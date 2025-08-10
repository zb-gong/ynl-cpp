// SPDX-License-Identifier: GPL-2.0
#include <iomanip>
#include <iostream>
#include <rt-link-user.hpp>
#include <sys/socket.h>
#include <ynl.hpp>

std::ostream &operator<<(std::ostream &os,
                         const ynl_cpp::rt_link_getlink_rsp &rsp) {
  os << std::right << std::setw(3) << rsp._hdr.ifi_index << ": ";

  if (rsp.ifname.size() > 0)
    os << std::setw(16) << (rsp.ifname + ": ");

  if (rsp.mtu)
    os << "mtu " << std::setw(5) << *rsp.mtu << "  ";

  if (rsp.linkinfo && !rsp.linkinfo->kind.empty())
    os << "kind " << std::left << std::setw(8) << rsp.linkinfo->kind << "  ";
  else
    os << "     " << std::setw(8) << "" << "  ";

  if (rsp.prop_list && !rsp.prop_list->alt_ifname.empty()) {
    os << "altname " << rsp.prop_list->alt_ifname << " ";
  }

  if (rsp.linkinfo && rsp.linkinfo->data && rsp.linkinfo->data->netkit) {
    const auto &netkit = rsp.linkinfo->data->netkit;
    os << "primary " << static_cast<int>(netkit->primary.value_or(0)) << "  ";

    if (netkit->policy) {
      const char *name =
          ynl_cpp::rt_link_netkit_policy_str(*netkit->policy).data();
      if (name)
        os << "policy " << name << "  ";
    }
  }

  return os;
}

int main(int argc, char **argv) {
  ynl_error yerr;
  ynl_cpp::ynl_socket ys(ynl_cpp::get_ynl_rt_link_family(), &yerr);
  if (!ys) {
    std::cerr << yerr.msg << std::endl;
    return -1;
  }

  ynl_cpp::rt_link_getlink_req_dump req = {};
  std::unique_ptr<ynl_cpp::rt_link_getlink_list> rsp =
      ynl_cpp::rt_link_getlink_dump(ys, req);
  if (rsp == nullptr) {
    std::cerr << "Error: rt-link getlink dump fails" << std::endl;
    return 2;
  }
  if (rsp->objs.empty()) {
    std::cerr << "Error: no links reported" << std::endl;
    return 2;
  }

  for (const auto &addr : rsp->objs)
    std::cout << addr << std::endl;

  return 0;
}

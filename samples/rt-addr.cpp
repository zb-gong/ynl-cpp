// SPDX-License-Identifier: GPL-2.0
#include <arpa/inet.h>
#include <iomanip>
#include <iostream>
#include <net/if.h>
#include <rt-addr-user.hpp>
#include <sys/socket.h>
#include <ynl.hpp>

std::ostream &operator<<(std::ostream &os,
                         const ynl_cpp::rt_addr_getaddr_rsp &rsp) {
  char buf[IF_NAMESIZE];
  char addr_str[64];

  auto name = if_indextoname(rsp._hdr.ifa_index, buf);
  if (name)
    os << std::setw(16) << name << ": ";

  if (rsp.address.size() == 4) {
    os << inet_ntop(AF_INET, rsp.address.data(), addr_str, sizeof(addr_str));
  } else if (rsp.address.size() == 16) {
    os << inet_ntop(AF_INET6, rsp.address.data(), addr_str, sizeof(addr_str));
  } else {
    os << "[" << rsp.address.size() << "]";
  }

  return os;
}

int main(int argc, char **argv) {
  ynl_error yerr;
  ynl_cpp::ynl_socket ys(ynl_cpp::get_ynl_rt_addr_family(), &yerr);
  if (!ys) {
    std::cerr << yerr.msg << std::endl;
    return -1;
  }

  ynl_cpp::rt_addr_getaddr_req req = {};
  std::unique_ptr<ynl_cpp::rt_addr_getaddr_list> rsp =
      ynl_cpp::rt_addr_getaddr_dump(ys, req);
  if (rsp == nullptr) {
    std::cerr << "Error: rt-addr getaddr dump fails" << std::endl;
    return 2;
  }
  if (rsp->objs.empty()) {
    std::cerr << "Error: no addresses reported" << std::endl;
    return 2;
  }

  for (const auto &addr : rsp->objs)
    std::cout << addr << std::endl;

  return 0;
}

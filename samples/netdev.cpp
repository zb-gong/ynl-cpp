// SPDX-License-Identifier: GPL-2.0
#include <netdev-user.hpp>
#include <ynl.hpp>
#include <iostream>

std::ostream& operator<<(
    std::ostream& os,
    const ynl_cpp::netdev_dev_get_rsp& rsp) {
  if (rsp.ifindex.has_value()) {
    os << "ifindex: " << rsp.ifindex.value() << ":";
  }
  if (rsp.xdp_features.has_value()) {
    os << "xdp_features: " << rsp.xdp_features.value() << ":";
  }
  if (rsp.xdp_zc_max_segs.has_value()) {
    os << "xdp_zc_max_segs: " << rsp.xdp_zc_max_segs.value() << ":";
  }
  if (rsp.xdp_rx_metadata_features.has_value()) {
    os << "xdp_rx_metadata_features: " << rsp.xdp_rx_metadata_features.value()
       << ":";
  }
  if (rsp.xsk_features.has_value()) {
    os << "xsk_features: " << rsp.xsk_features.value() << ":";
  }
  return os;
}

int main(int argc, char* argv[]) {
  int ifindex = 0;

  if (argc > 1) {
    ifindex = strtol(argv[1], NULL, 0);
  }

  std::cout << "ifindex = " << ifindex << std::endl;

  ynl_error yerr;
  ynl_cpp::ynl_socket ys(ynl_cpp::get_ynl_netdev_family(), &yerr);
  if (!ys) {
    std::cerr << yerr.msg << std::endl;
    return -1;
  }

  if (ifindex > 0) {
    ynl_cpp::netdev_dev_get_req req;
    req.ifindex = ifindex;
    auto ret = ynl_cpp::netdev_dev_get(ys, req);
    if (ret) {
      std::cout << *ret << std::endl;
    } else {
      std::cerr << "netdev_dev_get error" << std::endl;
    }
  } else if (!ifindex) {
    auto ret = ynl_cpp::netdev_dev_get_dump(ys);
    if (ret) {
      for (const auto& val : ret->objs) {
        std::cout << val << std::endl;
      }
    } else {
      std::cerr << "netdev_dev_get_dump error" << std::endl;
    }
  }
  return 0;
}

// SPDX-License-Identifier: GPL-2.0
#include <stdio.h>
#include <string.h>

#include <ynl.hpp>

#include <net/if.h>

#include "ethtool-user.hpp"

#include <iostream>

#define YNL_OSTREAM_OPTIONAL_VAL(rsp, name)                      \
  if (rsp.name.has_value()) {                                    \
    os << #name ": " << (uint32_t)rsp.name.value() << std::endl; \
  }

std::ostream& operator<<(
    std::ostream& os,
    const ynl_cpp::ethtool_header& header) {
  if (header.dev_index.has_value()) {
    os << "dev_index: " << header.dev_index.value() << " ";
  }
  os << "dev_name: " << header.dev_name << " ";
  if (header.flags.has_value()) {
    os << "flags: " << header.flags.value();
  }
  return os;
}

std::ostream& operator<<(
    std::ostream& os,
    const ynl_cpp::ethtool_channels_get_rsp& rsp) {
  if (rsp.header.has_value()) {
    os << "header: " << rsp.header.value() << std::endl;
  }

  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, other_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, combined_max)

  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_count)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx_count)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, other_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, combined_count)

  return os;
}

std::ostream& operator<<(
    std::ostream& os,
    const ynl_cpp::ethtool_rings_get_rsp& rsp) {
  if (rsp.header.has_value()) {
    os << "header: " << rsp.header.value() << std::endl;
  }

  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_mini_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_jumbo_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx_max)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_mini)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_jumbo)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_buf_len)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tcp_data_split)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, cqe_size)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx_push)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, rx_push)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx_push_buf_len)
  YNL_OSTREAM_OPTIONAL_VAL(rsp, tx_push_buf_len_max)

  return os;
}

int main(int argc, char** argv) {
  ynl_error yerr;
  ynl_cpp::ynl_socket ys(ynl_cpp::get_ynl_ethtool_family(), &yerr);
  if (!ys) {
    std::cerr << yerr.msg << std::endl;
    return 1;
  }

  ynl_cpp::ethtool_channels_get_req_dump creq;
  creq.header = ynl_cpp::ethtool_header();
  auto channels = ynl_cpp::ethtool_channels_get_dump(ys, creq);
  if (!channels) {
    std::cerr << "channels is nullptr" << std::endl;
    return 2;
  }
  std::cout << "Channels:" << std::endl;
  for (const auto& rsp : channels->objs) {
    std::cout << rsp << std::endl;
  }

  ynl_cpp::ethtool_rings_get_req_dump rreq;
  rreq.header = ynl_cpp::ethtool_header();
  auto rings = ynl_cpp::ethtool_rings_get_dump(ys, rreq);

  if (!rings) {
    std::cerr << "rings is nullptr" << std::endl;
    return 2;
  }
  std::cout << "Rings:" << std::endl;
  for (const auto& rsp : rings->objs) {
    std::cout << rsp << std::endl;
  }

  return 0;
}

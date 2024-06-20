// SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause)
/* Do not edit directly, auto-generated from: */
/*	 */
/* YNL-GEN user source */

#include "netdev-user.hpp"

#include <array>

#include <linux/netdev.h>

#include <linux/genetlink.h>

namespace ynl_cpp {

/* Enums */
static constexpr std::array<std::string_view, NETDEV_CMD_QSTATS_GET + 1> netdev_op_strmap = []() {
	std::array<std::string_view, NETDEV_CMD_QSTATS_GET + 1> arr{};
	arr[NETDEV_CMD_DEV_GET] = "dev-get";
	arr[NETDEV_CMD_DEV_ADD_NTF] = "dev-add-ntf";
	arr[NETDEV_CMD_DEV_DEL_NTF] = "dev-del-ntf";
	arr[NETDEV_CMD_DEV_CHANGE_NTF] = "dev-change-ntf";
	arr[NETDEV_CMD_PAGE_POOL_GET] = "page-pool-get";
	arr[NETDEV_CMD_PAGE_POOL_ADD_NTF] = "page-pool-add-ntf";
	arr[NETDEV_CMD_PAGE_POOL_DEL_NTF] = "page-pool-del-ntf";
	arr[NETDEV_CMD_PAGE_POOL_CHANGE_NTF] = "page-pool-change-ntf";
	arr[NETDEV_CMD_PAGE_POOL_STATS_GET] = "page-pool-stats-get";
	arr[NETDEV_CMD_QUEUE_GET] = "queue-get";
	arr[NETDEV_CMD_NAPI_GET] = "napi-get";
	arr[NETDEV_CMD_QSTATS_GET] = "qstats-get";
	return arr;
} ();

std::string_view netdev_op_str(int op)
{
	if (op < 0 || op >= (int)(netdev_op_strmap.size()))
		return "";
	return netdev_op_strmap[op];
}

static constexpr std::array<std::string_view, 6 + 1> netdev_xdp_act_strmap = []() {
	std::array<std::string_view, 6 + 1> arr{};
	arr[0] = "basic";
	arr[1] = "redirect";
	arr[2] = "ndo-xmit";
	arr[3] = "xsk-zerocopy";
	arr[4] = "hw-offload";
	arr[5] = "rx-sg";
	arr[6] = "ndo-xmit-sg";
	return arr;
} ();

std::string_view netdev_xdp_act_str(netdev_xdp_act value)
{
	value = (netdev_xdp_act)(ffs(value) - 1);
	if (value < 0 || value >= (int)(netdev_xdp_act_strmap.size()))
		return "";
	return netdev_xdp_act_strmap[value];
}

static constexpr std::array<std::string_view, 2 + 1> netdev_xdp_rx_metadata_strmap = []() {
	std::array<std::string_view, 2 + 1> arr{};
	arr[0] = "timestamp";
	arr[1] = "hash";
	arr[2] = "vlan-tag";
	return arr;
} ();

std::string_view netdev_xdp_rx_metadata_str(netdev_xdp_rx_metadata value)
{
	value = (netdev_xdp_rx_metadata)(ffs(value) - 1);
	if (value < 0 || value >= (int)(netdev_xdp_rx_metadata_strmap.size()))
		return "";
	return netdev_xdp_rx_metadata_strmap[value];
}

static constexpr std::array<std::string_view, 1 + 1> netdev_xsk_flags_strmap = []() {
	std::array<std::string_view, 1 + 1> arr{};
	arr[0] = "tx-timestamp";
	arr[1] = "tx-checksum";
	return arr;
} ();

std::string_view netdev_xsk_flags_str(netdev_xsk_flags value)
{
	value = (netdev_xsk_flags)(ffs(value) - 1);
	if (value < 0 || value >= (int)(netdev_xsk_flags_strmap.size()))
		return "";
	return netdev_xsk_flags_strmap[value];
}

static constexpr std::array<std::string_view, 1 + 1> netdev_queue_type_strmap = []() {
	std::array<std::string_view, 1 + 1> arr{};
	arr[0] = "rx";
	arr[1] = "tx";
	return arr;
} ();

std::string_view netdev_queue_type_str(netdev_queue_type value)
{
	if (value < 0 || value >= (int)(netdev_queue_type_strmap.size()))
		return "";
	return netdev_queue_type_strmap[value];
}

static constexpr std::array<std::string_view, 0 + 1> netdev_qstats_scope_strmap = []() {
	std::array<std::string_view, 0 + 1> arr{};
	arr[0] = "queue";
	return arr;
} ();

std::string_view netdev_qstats_scope_str(netdev_qstats_scope value)
{
	value = (netdev_qstats_scope)(ffs(value) - 1);
	if (value < 0 || value >= (int)(netdev_qstats_scope_strmap.size()))
		return "";
	return netdev_qstats_scope_strmap[value];
}

/* Policies */
static std::array<ynl_policy_attr,NETDEV_A_PAGE_POOL_MAX + 1> netdev_page_pool_info_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_PAGE_POOL_MAX + 1> arr{};
	arr[NETDEV_A_PAGE_POOL_ID] = { .name = "id", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_IFINDEX] = { .name = "ifindex", .type = YNL_PT_U32, };
	return arr;
} ();

struct ynl_policy_nest netdev_page_pool_info_nest = {
	.max_attr = NETDEV_A_PAGE_POOL_MAX,
	.table = netdev_page_pool_info_policy.data(),
};

static std::array<ynl_policy_attr,NETDEV_A_DEV_MAX + 1> netdev_dev_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_DEV_MAX + 1> arr{};
	arr[NETDEV_A_DEV_IFINDEX] = { .name = "ifindex", .type = YNL_PT_U32, };
	arr[NETDEV_A_DEV_PAD] = { .name = "pad", .type = YNL_PT_IGNORE, };
	arr[NETDEV_A_DEV_XDP_FEATURES] = { .name = "xdp-features", .type = YNL_PT_U64, };
	arr[NETDEV_A_DEV_XDP_ZC_MAX_SEGS] = { .name = "xdp-zc-max-segs", .type = YNL_PT_U32, };
	arr[NETDEV_A_DEV_XDP_RX_METADATA_FEATURES] = { .name = "xdp-rx-metadata-features", .type = YNL_PT_U64, };
	arr[NETDEV_A_DEV_XSK_FEATURES] = { .name = "xsk-features", .type = YNL_PT_U64, };
	return arr;
} ();

struct ynl_policy_nest netdev_dev_nest = {
	.max_attr = NETDEV_A_DEV_MAX,
	.table = netdev_dev_policy.data(),
};

static std::array<ynl_policy_attr,NETDEV_A_PAGE_POOL_MAX + 1> netdev_page_pool_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_PAGE_POOL_MAX + 1> arr{};
	arr[NETDEV_A_PAGE_POOL_ID] = { .name = "id", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_IFINDEX] = { .name = "ifindex", .type = YNL_PT_U32, };
	arr[NETDEV_A_PAGE_POOL_NAPI_ID] = { .name = "napi-id", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_INFLIGHT] = { .name = "inflight", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_INFLIGHT_MEM] = { .name = "inflight-mem", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_DETACH_TIME] = { .name = "detach-time", .type = YNL_PT_UINT, };
	return arr;
} ();

struct ynl_policy_nest netdev_page_pool_nest = {
	.max_attr = NETDEV_A_PAGE_POOL_MAX,
	.table = netdev_page_pool_policy.data(),
};

static std::array<ynl_policy_attr,NETDEV_A_PAGE_POOL_STATS_MAX + 1> netdev_page_pool_stats_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_PAGE_POOL_STATS_MAX + 1> arr{};
	arr[NETDEV_A_PAGE_POOL_STATS_INFO] = { .name = "info", .type = YNL_PT_NEST, .nest = &netdev_page_pool_info_nest, };
	arr[NETDEV_A_PAGE_POOL_STATS_ALLOC_FAST] = { .name = "alloc-fast", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_ALLOC_SLOW] = { .name = "alloc-slow", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_ALLOC_SLOW_HIGH_ORDER] = { .name = "alloc-slow-high-order", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_ALLOC_EMPTY] = { .name = "alloc-empty", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_ALLOC_REFILL] = { .name = "alloc-refill", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_ALLOC_WAIVE] = { .name = "alloc-waive", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_RECYCLE_CACHED] = { .name = "recycle-cached", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_RECYCLE_CACHE_FULL] = { .name = "recycle-cache-full", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_RECYCLE_RING] = { .name = "recycle-ring", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_RECYCLE_RING_FULL] = { .name = "recycle-ring-full", .type = YNL_PT_UINT, };
	arr[NETDEV_A_PAGE_POOL_STATS_RECYCLE_RELEASED_REFCNT] = { .name = "recycle-released-refcnt", .type = YNL_PT_UINT, };
	return arr;
} ();

struct ynl_policy_nest netdev_page_pool_stats_nest = {
	.max_attr = NETDEV_A_PAGE_POOL_STATS_MAX,
	.table = netdev_page_pool_stats_policy.data(),
};

static std::array<ynl_policy_attr,NETDEV_A_QUEUE_MAX + 1> netdev_queue_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_QUEUE_MAX + 1> arr{};
	arr[NETDEV_A_QUEUE_ID] = { .name = "id", .type = YNL_PT_U32, };
	arr[NETDEV_A_QUEUE_IFINDEX] = { .name = "ifindex", .type = YNL_PT_U32, };
	arr[NETDEV_A_QUEUE_TYPE] = { .name = "type", .type = YNL_PT_U32, };
	arr[NETDEV_A_QUEUE_NAPI_ID] = { .name = "napi-id", .type = YNL_PT_U32, };
	return arr;
} ();

struct ynl_policy_nest netdev_queue_nest = {
	.max_attr = NETDEV_A_QUEUE_MAX,
	.table = netdev_queue_policy.data(),
};

static std::array<ynl_policy_attr,NETDEV_A_NAPI_MAX + 1> netdev_napi_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_NAPI_MAX + 1> arr{};
	arr[NETDEV_A_NAPI_IFINDEX] = { .name = "ifindex", .type = YNL_PT_U32, };
	arr[NETDEV_A_NAPI_ID] = { .name = "id", .type = YNL_PT_U32, };
	arr[NETDEV_A_NAPI_IRQ] = { .name = "irq", .type = YNL_PT_U32, };
	arr[NETDEV_A_NAPI_PID] = { .name = "pid", .type = YNL_PT_U32, };
	return arr;
} ();

struct ynl_policy_nest netdev_napi_nest = {
	.max_attr = NETDEV_A_NAPI_MAX,
	.table = netdev_napi_policy.data(),
};

static std::array<ynl_policy_attr,NETDEV_A_QSTATS_MAX + 1> netdev_qstats_policy = []() {
	std::array<ynl_policy_attr,NETDEV_A_QSTATS_MAX + 1> arr{};
	arr[NETDEV_A_QSTATS_IFINDEX] = { .name = "ifindex", .type = YNL_PT_U32, };
	arr[NETDEV_A_QSTATS_QUEUE_TYPE] = { .name = "queue-type", .type = YNL_PT_U32, };
	arr[NETDEV_A_QSTATS_QUEUE_ID] = { .name = "queue-id", .type = YNL_PT_U32, };
	arr[NETDEV_A_QSTATS_SCOPE] = { .name = "scope", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_PACKETS] = { .name = "rx-packets", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_BYTES] = { .name = "rx-bytes", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_PACKETS] = { .name = "tx-packets", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_BYTES] = { .name = "tx-bytes", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_ALLOC_FAIL] = { .name = "rx-alloc-fail", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_DROPS] = { .name = "rx-hw-drops", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_DROP_OVERRUNS] = { .name = "rx-hw-drop-overruns", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_CSUM_UNNECESSARY] = { .name = "rx-csum-unnecessary", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_CSUM_NONE] = { .name = "rx-csum-none", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_CSUM_BAD] = { .name = "rx-csum-bad", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_GRO_PACKETS] = { .name = "rx-hw-gro-packets", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_GRO_BYTES] = { .name = "rx-hw-gro-bytes", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_GRO_WIRE_PACKETS] = { .name = "rx-hw-gro-wire-packets", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_GRO_WIRE_BYTES] = { .name = "rx-hw-gro-wire-bytes", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_RX_HW_DROP_RATELIMITS] = { .name = "rx-hw-drop-ratelimits", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_DROPS] = { .name = "tx-hw-drops", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_DROP_ERRORS] = { .name = "tx-hw-drop-errors", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_CSUM_NONE] = { .name = "tx-csum-none", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_NEEDS_CSUM] = { .name = "tx-needs-csum", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_GSO_PACKETS] = { .name = "tx-hw-gso-packets", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_GSO_BYTES] = { .name = "tx-hw-gso-bytes", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_GSO_WIRE_PACKETS] = { .name = "tx-hw-gso-wire-packets", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_GSO_WIRE_BYTES] = { .name = "tx-hw-gso-wire-bytes", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_HW_DROP_RATELIMITS] = { .name = "tx-hw-drop-ratelimits", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_STOP] = { .name = "tx-stop", .type = YNL_PT_UINT, };
	arr[NETDEV_A_QSTATS_TX_WAKE] = { .name = "tx-wake", .type = YNL_PT_UINT, };
	return arr;
} ();

struct ynl_policy_nest netdev_qstats_nest = {
	.max_attr = NETDEV_A_QSTATS_MAX,
	.table = netdev_qstats_policy.data(),
};

/* Common nested types */
int netdev_page_pool_info_put(struct nlmsghdr *nlh, unsigned int attr_type,
			      const netdev_page_pool_info&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.id.has_value())
		ynl_attr_put_uint(nlh, NETDEV_A_PAGE_POOL_ID, obj.id.value());
	if (obj.ifindex.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_PAGE_POOL_IFINDEX, obj.ifindex.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int netdev_page_pool_info_parse(struct ynl_parse_arg *yarg,
				const struct nlattr *nested)
{
	netdev_page_pool_info *dst = (netdev_page_pool_info *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_PAGE_POOL_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_IFINDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ifindex = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

/* ============== NETDEV_CMD_DEV_GET ============== */
/* NETDEV_CMD_DEV_GET - do */
int netdev_dev_get_rsp_parse(const struct nlmsghdr *nlh,
			     struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	netdev_dev_get_rsp *dst;

	dst = (netdev_dev_get_rsp*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_DEV_IFINDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ifindex = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_DEV_XDP_FEATURES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->xdp_features = (__u64)ynl_attr_get_u64(attr);
		} else if (type == NETDEV_A_DEV_XDP_ZC_MAX_SEGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->xdp_zc_max_segs = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_DEV_XDP_RX_METADATA_FEATURES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->xdp_rx_metadata_features = (__u64)ynl_attr_get_u64(attr);
		} else if (type == NETDEV_A_DEV_XSK_FEATURES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->xsk_features = (__u64)ynl_attr_get_u64(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<netdev_dev_get_rsp>
netdev_dev_get(ynl_cpp::ynl_socket&  ys, netdev_dev_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<netdev_dev_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_DEV_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_dev_nest;
	yrs.yarg.rsp_policy = &netdev_dev_nest;

	if (req.ifindex.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_DEV_IFINDEX, req.ifindex.value());

	rsp.reset(new netdev_dev_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = netdev_dev_get_rsp_parse;
	yrs.rsp_cmd = NETDEV_CMD_DEV_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* NETDEV_CMD_DEV_GET - dump */
std::unique_ptr<netdev_dev_get_list>
netdev_dev_get_dump(ynl_cpp::ynl_socket&  ys)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<netdev_dev_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &netdev_dev_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<netdev_dev_get_list*>(arg)->objs.emplace_back());};
	yds.cb = netdev_dev_get_rsp_parse;
	yds.rsp_cmd = NETDEV_CMD_DEV_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_DEV_GET, 1);

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* NETDEV_CMD_DEV_GET - notify */
/* ============== NETDEV_CMD_PAGE_POOL_GET ============== */
/* NETDEV_CMD_PAGE_POOL_GET - do */
int netdev_page_pool_get_rsp_parse(const struct nlmsghdr *nlh,
				   struct ynl_parse_arg *yarg)
{
	netdev_page_pool_get_rsp *dst;
	const struct nlattr *attr;

	dst = (netdev_page_pool_get_rsp*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_PAGE_POOL_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_IFINDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ifindex = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_PAGE_POOL_NAPI_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->napi_id = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_INFLIGHT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->inflight = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_INFLIGHT_MEM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->inflight_mem = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_DETACH_TIME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->detach_time = (__u64)ynl_attr_get_uint(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<netdev_page_pool_get_rsp>
netdev_page_pool_get(ynl_cpp::ynl_socket&  ys, netdev_page_pool_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<netdev_page_pool_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_PAGE_POOL_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_page_pool_nest;
	yrs.yarg.rsp_policy = &netdev_page_pool_nest;

	if (req.id.has_value())
		ynl_attr_put_uint(nlh, NETDEV_A_PAGE_POOL_ID, req.id.value());

	rsp.reset(new netdev_page_pool_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = netdev_page_pool_get_rsp_parse;
	yrs.rsp_cmd = NETDEV_CMD_PAGE_POOL_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* NETDEV_CMD_PAGE_POOL_GET - dump */
std::unique_ptr<netdev_page_pool_get_list>
netdev_page_pool_get_dump(ynl_cpp::ynl_socket&  ys)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<netdev_page_pool_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &netdev_page_pool_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<netdev_page_pool_get_list*>(arg)->objs.emplace_back());};
	yds.cb = netdev_page_pool_get_rsp_parse;
	yds.rsp_cmd = NETDEV_CMD_PAGE_POOL_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_PAGE_POOL_GET, 1);

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* NETDEV_CMD_PAGE_POOL_GET - notify */
/* ============== NETDEV_CMD_PAGE_POOL_STATS_GET ============== */
/* NETDEV_CMD_PAGE_POOL_STATS_GET - do */
int netdev_page_pool_stats_get_rsp_parse(const struct nlmsghdr *nlh,
					 struct ynl_parse_arg *yarg)
{
	netdev_page_pool_stats_get_rsp *dst;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	dst = (netdev_page_pool_stats_get_rsp*)yarg->data;
	parg.ys = yarg->ys;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_PAGE_POOL_STATS_INFO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &netdev_page_pool_info_nest;
			parg.data = &dst->info;
			if (netdev_page_pool_info_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == NETDEV_A_PAGE_POOL_STATS_ALLOC_FAST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alloc_fast = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_ALLOC_SLOW) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alloc_slow = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_ALLOC_SLOW_HIGH_ORDER) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alloc_slow_high_order = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_ALLOC_EMPTY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alloc_empty = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_ALLOC_REFILL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alloc_refill = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_ALLOC_WAIVE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alloc_waive = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_RECYCLE_CACHED) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->recycle_cached = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_RECYCLE_CACHE_FULL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->recycle_cache_full = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_RECYCLE_RING) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->recycle_ring = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_RECYCLE_RING_FULL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->recycle_ring_full = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_PAGE_POOL_STATS_RECYCLE_RELEASED_REFCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->recycle_released_refcnt = (__u64)ynl_attr_get_uint(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<netdev_page_pool_stats_get_rsp>
netdev_page_pool_stats_get(ynl_cpp::ynl_socket&  ys,
			   netdev_page_pool_stats_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<netdev_page_pool_stats_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_PAGE_POOL_STATS_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_page_pool_stats_nest;
	yrs.yarg.rsp_policy = &netdev_page_pool_stats_nest;

	if (req.info.has_value())
		netdev_page_pool_info_put(nlh, NETDEV_A_PAGE_POOL_STATS_INFO, req.info.value());

	rsp.reset(new netdev_page_pool_stats_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = netdev_page_pool_stats_get_rsp_parse;
	yrs.rsp_cmd = NETDEV_CMD_PAGE_POOL_STATS_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* NETDEV_CMD_PAGE_POOL_STATS_GET - dump */
std::unique_ptr<netdev_page_pool_stats_get_list>
netdev_page_pool_stats_get_dump(ynl_cpp::ynl_socket&  ys)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<netdev_page_pool_stats_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &netdev_page_pool_stats_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<netdev_page_pool_stats_get_list*>(arg)->objs.emplace_back());};
	yds.cb = netdev_page_pool_stats_get_rsp_parse;
	yds.rsp_cmd = NETDEV_CMD_PAGE_POOL_STATS_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_PAGE_POOL_STATS_GET, 1);

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* ============== NETDEV_CMD_QUEUE_GET ============== */
/* NETDEV_CMD_QUEUE_GET - do */
int netdev_queue_get_rsp_parse(const struct nlmsghdr *nlh,
			       struct ynl_parse_arg *yarg)
{
	netdev_queue_get_rsp *dst;
	const struct nlattr *attr;

	dst = (netdev_queue_get_rsp*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_QUEUE_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_QUEUE_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->type = (netdev_queue_type)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_QUEUE_NAPI_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->napi_id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_QUEUE_IFINDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ifindex = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<netdev_queue_get_rsp>
netdev_queue_get(ynl_cpp::ynl_socket&  ys, netdev_queue_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<netdev_queue_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_QUEUE_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_queue_nest;
	yrs.yarg.rsp_policy = &netdev_queue_nest;

	if (req.ifindex.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_QUEUE_IFINDEX, req.ifindex.value());
	if (req.type.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_QUEUE_TYPE, req.type.value());
	if (req.id.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_QUEUE_ID, req.id.value());

	rsp.reset(new netdev_queue_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = netdev_queue_get_rsp_parse;
	yrs.rsp_cmd = NETDEV_CMD_QUEUE_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* NETDEV_CMD_QUEUE_GET - dump */
std::unique_ptr<netdev_queue_get_list>
netdev_queue_get_dump(ynl_cpp::ynl_socket&  ys, netdev_queue_get_req_dump& req)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<netdev_queue_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &netdev_queue_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<netdev_queue_get_list*>(arg)->objs.emplace_back());};
	yds.cb = netdev_queue_get_rsp_parse;
	yds.rsp_cmd = NETDEV_CMD_QUEUE_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_QUEUE_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_queue_nest;

	if (req.ifindex.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_QUEUE_IFINDEX, req.ifindex.value());

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* ============== NETDEV_CMD_NAPI_GET ============== */
/* NETDEV_CMD_NAPI_GET - do */
int netdev_napi_get_rsp_parse(const struct nlmsghdr *nlh,
			      struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	netdev_napi_get_rsp *dst;

	dst = (netdev_napi_get_rsp*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_NAPI_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_NAPI_IFINDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ifindex = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_NAPI_IRQ) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->irq = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_NAPI_PID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pid = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<netdev_napi_get_rsp>
netdev_napi_get(ynl_cpp::ynl_socket&  ys, netdev_napi_get_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<netdev_napi_get_rsp> rsp;
	struct nlmsghdr *nlh;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_NAPI_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_napi_nest;
	yrs.yarg.rsp_policy = &netdev_napi_nest;

	if (req.id.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_NAPI_ID, req.id.value());

	rsp.reset(new netdev_napi_get_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = netdev_napi_get_rsp_parse;
	yrs.rsp_cmd = NETDEV_CMD_NAPI_GET;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* NETDEV_CMD_NAPI_GET - dump */
std::unique_ptr<netdev_napi_get_list>
netdev_napi_get_dump(ynl_cpp::ynl_socket&  ys, netdev_napi_get_req_dump& req)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<netdev_napi_get_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &netdev_napi_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<netdev_napi_get_list*>(arg)->objs.emplace_back());};
	yds.cb = netdev_napi_get_rsp_parse;
	yds.rsp_cmd = NETDEV_CMD_NAPI_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_NAPI_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_napi_nest;

	if (req.ifindex.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_NAPI_IFINDEX, req.ifindex.value());

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* ============== NETDEV_CMD_QSTATS_GET ============== */
/* NETDEV_CMD_QSTATS_GET - dump */
int netdev_qstats_get_rsp_dump_parse(const struct nlmsghdr *nlh,
				     struct ynl_parse_arg *yarg)
{
	netdev_qstats_get_rsp_dump *dst;
	const struct nlattr *attr;

	dst = (netdev_qstats_get_rsp_dump*)yarg->data;

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETDEV_A_QSTATS_IFINDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ifindex = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_QSTATS_QUEUE_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->queue_type = (netdev_queue_type)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_QSTATS_QUEUE_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->queue_id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == NETDEV_A_QSTATS_RX_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rx_packets = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_QSTATS_RX_BYTES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rx_bytes = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_QSTATS_TX_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->tx_packets = (__u64)ynl_attr_get_uint(attr);
		} else if (type == NETDEV_A_QSTATS_TX_BYTES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->tx_bytes = (__u64)ynl_attr_get_uint(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<netdev_qstats_get_rsp_list>
netdev_qstats_get_dump(ynl_cpp::ynl_socket&  ys,
		       netdev_qstats_get_req_dump& req)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	int err;

	auto ret = std::make_unique<netdev_qstats_get_rsp_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &netdev_qstats_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void*{return &(static_cast<netdev_qstats_get_rsp_list*>(arg)->objs.emplace_back());};
	yds.cb = netdev_qstats_get_rsp_dump_parse;
	yds.rsp_cmd = NETDEV_CMD_QSTATS_GET;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, NETDEV_CMD_QSTATS_GET, 1);
	((struct ynl_sock*)ys)->req_policy = &netdev_qstats_nest;

	if (req.ifindex.has_value())
		ynl_attr_put_u32(nlh, NETDEV_A_QSTATS_IFINDEX, req.ifindex.value());
	if (req.scope.has_value())
		ynl_attr_put_uint(nlh, NETDEV_A_QSTATS_SCOPE, req.scope.value());

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

static constexpr std::array<ynl_ntf_info, NETDEV_CMD_PAGE_POOL_CHANGE_NTF + 1> netdev_ntf_info = []() {
	std::array<ynl_ntf_info, NETDEV_CMD_PAGE_POOL_CHANGE_NTF + 1> arr{};
	arr[NETDEV_CMD_DEV_ADD_NTF] =  {
		.cb		= netdev_dev_get_rsp_parse,
		.policy		= &netdev_dev_nest,
	};
	arr[NETDEV_CMD_DEV_DEL_NTF] =  {
		.cb		= netdev_dev_get_rsp_parse,
		.policy		= &netdev_dev_nest,
	};
	arr[NETDEV_CMD_DEV_CHANGE_NTF] =  {
		.cb		= netdev_dev_get_rsp_parse,
		.policy		= &netdev_dev_nest,
	};
	arr[NETDEV_CMD_PAGE_POOL_ADD_NTF] =  {
		.cb		= netdev_page_pool_get_rsp_parse,
		.policy		= &netdev_page_pool_nest,
	};
	arr[NETDEV_CMD_PAGE_POOL_DEL_NTF] =  {
		.cb		= netdev_page_pool_get_rsp_parse,
		.policy		= &netdev_page_pool_nest,
	};
	arr[NETDEV_CMD_PAGE_POOL_CHANGE_NTF] =  {
		.cb		= netdev_page_pool_get_rsp_parse,
		.policy		= &netdev_page_pool_nest,
	};
	return arr;
} ();

const struct ynl_family ynl_netdev_family =  {
	.name		= "netdev",
	.hdr_len	= sizeof(struct genlmsghdr),
	.ntf_info	= netdev_ntf_info.data(),
	.ntf_info_size	= netdev_ntf_info.size(),
};
const struct ynl_family& get_ynl_netdev_family() {
	return ynl_netdev_family;
};
} //namespace ynl_cpp

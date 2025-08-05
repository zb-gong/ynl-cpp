// SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause)
/* Do not edit directly, auto-generated from: */
/*	 */
/* YNL-GEN user source */

#include "tc-user.hpp"

#include <array>

#include <linux/gen_stats.h>
#include <linux/pkt_cls.h>
#include <linux/pkt_sched.h>
#include <linux/rtnetlink.h>
#include <linux/tc_act/tc_bpf.h>
#include <linux/tc_act/tc_connmark.h>
#include <linux/tc_act/tc_csum.h>
#include <linux/tc_act/tc_ct.h>
#include <linux/tc_act/tc_ctinfo.h>
#include <linux/tc_act/tc_defact.h>
#include <linux/tc_act/tc_gact.h>
#include <linux/tc_act/tc_gate.h>
#include <linux/tc_act/tc_ife.h>
#include <linux/tc_act/tc_mirred.h>
#include <linux/tc_act/tc_mpls.h>
#include <linux/tc_act/tc_nat.h>
#include <linux/tc_act/tc_pedit.h>
#include <linux/tc_act/tc_sample.h>
#include <linux/tc_act/tc_skbedit.h>
#include <linux/tc_act/tc_skbmod.h>
#include <linux/tc_act/tc_tunnel_key.h>
#include <linux/tc_act/tc_vlan.h>

#include <linux/genetlink.h>

namespace ynl_cpp {

/* Enums */
static constexpr std::array<std::string_view, 100 + 1> tc_op_strmap = []() {
	std::array<std::string_view, 100 + 1> arr{};
	arr[36] = "getqdisc";
	arr[40] = "gettclass";
	arr[44] = "gettfilter";
	arr[100] = "getchain";
	return arr;
} ();

std::string_view tc_op_str(int op)
{
	if (op < 0 || op >= (int)(tc_op_strmap.size()))
		return "";
	return tc_op_strmap[op];
}

static constexpr std::array<std::string_view, 4 + 1> tc_cls_flags_strmap = []() {
	std::array<std::string_view, 4 + 1> arr{};
	arr[0] = "skip-hw";
	arr[1] = "skip-sw";
	arr[2] = "in-hw";
	arr[3] = "not-in-nw";
	arr[4] = "verbose";
	return arr;
} ();

std::string_view tc_cls_flags_str(int value)
{
	value = (int)(ffs(value) - 1);
	if (value < 0 || value >= (int)(tc_cls_flags_strmap.size()))
		return "";
	return tc_cls_flags_strmap[value];
}

static constexpr std::array<std::string_view, 5 + 1> tc_flower_key_ctrl_flags_strmap = []() {
	std::array<std::string_view, 5 + 1> arr{};
	arr[0] = "frag";
	arr[1] = "firstfrag";
	arr[2] = "tuncsum";
	arr[3] = "tundf";
	arr[4] = "tunoam";
	arr[5] = "tuncrit";
	return arr;
} ();

std::string_view tc_flower_key_ctrl_flags_str(int value)
{
	value = (int)(ffs(value) - 1);
	if (value < 0 || value >= (int)(tc_flower_key_ctrl_flags_strmap.size()))
		return "";
	return tc_flower_key_ctrl_flags_strmap[value];
}

static constexpr std::array<std::string_view, 1 + 1> tc_dualpi2_drop_overload_strmap = []() {
	std::array<std::string_view, 1 + 1> arr{};
	arr[0] = "overflow";
	arr[1] = "drop";
	return arr;
} ();

std::string_view tc_dualpi2_drop_overload_str(tc_dualpi2_drop_overload value)
{
	if (value < 0 || value >= (int)(tc_dualpi2_drop_overload_strmap.size()))
		return "";
	return tc_dualpi2_drop_overload_strmap[value];
}

static constexpr std::array<std::string_view, 1 + 1> tc_dualpi2_drop_early_strmap = []() {
	std::array<std::string_view, 1 + 1> arr{};
	arr[0] = "drop-dequeue";
	arr[1] = "drop-enqueue";
	return arr;
} ();

std::string_view tc_dualpi2_drop_early_str(tc_dualpi2_drop_early value)
{
	if (value < 0 || value >= (int)(tc_dualpi2_drop_early_strmap.size()))
		return "";
	return tc_dualpi2_drop_early_strmap[value];
}

static constexpr std::array<std::string_view, 3 + 1> tc_dualpi2_ecn_mask_strmap = []() {
	std::array<std::string_view, 3 + 1> arr{};
	arr[1] = "l4s-ect";
	arr[2] = "cla-ect";
	arr[3] = "any-ect";
	return arr;
} ();

std::string_view tc_dualpi2_ecn_mask_str(tc_dualpi2_ecn_mask value)
{
	if (value < 0 || value >= (int)(tc_dualpi2_ecn_mask_strmap.size()))
		return "";
	return tc_dualpi2_ecn_mask_strmap[value];
}

static constexpr std::array<std::string_view, 1 + 1> tc_dualpi2_split_gso_strmap = []() {
	std::array<std::string_view, 1 + 1> arr{};
	arr[0] = "no-split-gso";
	arr[1] = "split-gso";
	return arr;
} ();

std::string_view tc_dualpi2_split_gso_str(tc_dualpi2_split_gso value)
{
	if (value < 0 || value >= (int)(tc_dualpi2_split_gso_strmap.size()))
		return "";
	return tc_dualpi2_split_gso_strmap[value];
}

/* Policies */
extern struct ynl_policy_nest tc_ets_attrs_nest;

static std::array<ynl_policy_attr,TCA_STAB_MAX + 1> tc_tca_stab_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_STAB_MAX + 1> arr{};
	arr[TCA_STAB_BASE].name = "base";
	arr[TCA_STAB_BASE].type = YNL_PT_BINARY;
	arr[TCA_STAB_DATA].name = "data";
	arr[TCA_STAB_DATA].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_tca_stab_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_STAB_MAX),
	.table = tc_tca_stab_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CAKE_MAX + 1> tc_cake_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CAKE_MAX + 1> arr{};
	arr[TCA_CAKE_PAD].name = "pad";
	arr[TCA_CAKE_PAD].type = YNL_PT_IGNORE;
	arr[TCA_CAKE_BASE_RATE64].name = "base-rate64";
	arr[TCA_CAKE_BASE_RATE64].type = YNL_PT_U64;
	arr[TCA_CAKE_DIFFSERV_MODE].name = "diffserv-mode";
	arr[TCA_CAKE_DIFFSERV_MODE].type = YNL_PT_U32;
	arr[TCA_CAKE_ATM].name = "atm";
	arr[TCA_CAKE_ATM].type = YNL_PT_U32;
	arr[TCA_CAKE_FLOW_MODE].name = "flow-mode";
	arr[TCA_CAKE_FLOW_MODE].type = YNL_PT_U32;
	arr[TCA_CAKE_OVERHEAD].name = "overhead";
	arr[TCA_CAKE_OVERHEAD].type = YNL_PT_U32;
	arr[TCA_CAKE_RTT].name = "rtt";
	arr[TCA_CAKE_RTT].type = YNL_PT_U32;
	arr[TCA_CAKE_TARGET].name = "target";
	arr[TCA_CAKE_TARGET].type = YNL_PT_U32;
	arr[TCA_CAKE_AUTORATE].name = "autorate";
	arr[TCA_CAKE_AUTORATE].type = YNL_PT_U32;
	arr[TCA_CAKE_MEMORY].name = "memory";
	arr[TCA_CAKE_MEMORY].type = YNL_PT_U32;
	arr[TCA_CAKE_NAT].name = "nat";
	arr[TCA_CAKE_NAT].type = YNL_PT_U32;
	arr[TCA_CAKE_RAW].name = "raw";
	arr[TCA_CAKE_RAW].type = YNL_PT_U32;
	arr[TCA_CAKE_WASH].name = "wash";
	arr[TCA_CAKE_WASH].type = YNL_PT_U32;
	arr[TCA_CAKE_MPU].name = "mpu";
	arr[TCA_CAKE_MPU].type = YNL_PT_U32;
	arr[TCA_CAKE_INGRESS].name = "ingress";
	arr[TCA_CAKE_INGRESS].type = YNL_PT_U32;
	arr[TCA_CAKE_ACK_FILTER].name = "ack-filter";
	arr[TCA_CAKE_ACK_FILTER].type = YNL_PT_U32;
	arr[TCA_CAKE_SPLIT_GSO].name = "split-gso";
	arr[TCA_CAKE_SPLIT_GSO].type = YNL_PT_U32;
	arr[TCA_CAKE_FWMARK].name = "fwmark";
	arr[TCA_CAKE_FWMARK].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_cake_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CAKE_MAX),
	.table = tc_cake_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CBS_MAX + 1> tc_cbs_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CBS_MAX + 1> arr{};
	arr[TCA_CBS_PARMS].name = "parms";
	arr[TCA_CBS_PARMS].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_cbs_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CBS_MAX),
	.table = tc_cbs_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CHOKE_MAX + 1> tc_choke_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CHOKE_MAX + 1> arr{};
	arr[TCA_CHOKE_PARMS].name = "parms";
	arr[TCA_CHOKE_PARMS].type = YNL_PT_BINARY;
	arr[TCA_CHOKE_STAB].name = "stab";
	arr[TCA_CHOKE_STAB].type = YNL_PT_BINARY;
	arr[TCA_CHOKE_MAX_P].name = "max-p";
	arr[TCA_CHOKE_MAX_P].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_choke_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CHOKE_MAX),
	.table = tc_choke_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CODEL_MAX + 1> tc_codel_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CODEL_MAX + 1> arr{};
	arr[TCA_CODEL_TARGET].name = "target";
	arr[TCA_CODEL_TARGET].type = YNL_PT_U32;
	arr[TCA_CODEL_LIMIT].name = "limit";
	arr[TCA_CODEL_LIMIT].type = YNL_PT_U32;
	arr[TCA_CODEL_INTERVAL].name = "interval";
	arr[TCA_CODEL_INTERVAL].type = YNL_PT_U32;
	arr[TCA_CODEL_ECN].name = "ecn";
	arr[TCA_CODEL_ECN].type = YNL_PT_U32;
	arr[TCA_CODEL_CE_THRESHOLD].name = "ce-threshold";
	arr[TCA_CODEL_CE_THRESHOLD].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_codel_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CODEL_MAX),
	.table = tc_codel_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_DRR_MAX + 1> tc_drr_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_DRR_MAX + 1> arr{};
	arr[TCA_DRR_QUANTUM].name = "quantum";
	arr[TCA_DRR_QUANTUM].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_drr_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_DRR_MAX),
	.table = tc_drr_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_DUALPI2_MAX + 1> tc_dualpi2_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_DUALPI2_MAX + 1> arr{};
	arr[TCA_DUALPI2_LIMIT].name = "limit";
	arr[TCA_DUALPI2_LIMIT].type = YNL_PT_U32;
	arr[TCA_DUALPI2_MEMORY_LIMIT].name = "memory-limit";
	arr[TCA_DUALPI2_MEMORY_LIMIT].type = YNL_PT_U32;
	arr[TCA_DUALPI2_TARGET].name = "target";
	arr[TCA_DUALPI2_TARGET].type = YNL_PT_U32;
	arr[TCA_DUALPI2_TUPDATE].name = "tupdate";
	arr[TCA_DUALPI2_TUPDATE].type = YNL_PT_U32;
	arr[TCA_DUALPI2_ALPHA].name = "alpha";
	arr[TCA_DUALPI2_ALPHA].type = YNL_PT_U32;
	arr[TCA_DUALPI2_BETA].name = "beta";
	arr[TCA_DUALPI2_BETA].type = YNL_PT_U32;
	arr[TCA_DUALPI2_STEP_THRESH_PKTS].name = "step-thresh-pkts";
	arr[TCA_DUALPI2_STEP_THRESH_PKTS].type = YNL_PT_U32;
	arr[TCA_DUALPI2_STEP_THRESH_US].name = "step-thresh-us";
	arr[TCA_DUALPI2_STEP_THRESH_US].type = YNL_PT_U32;
	arr[TCA_DUALPI2_MIN_QLEN_STEP].name = "min-qlen-step";
	arr[TCA_DUALPI2_MIN_QLEN_STEP].type = YNL_PT_U32;
	arr[TCA_DUALPI2_COUPLING].name = "coupling";
	arr[TCA_DUALPI2_COUPLING].type = YNL_PT_U8;
	arr[TCA_DUALPI2_DROP_OVERLOAD].name = "drop-overload";
	arr[TCA_DUALPI2_DROP_OVERLOAD].type = YNL_PT_U8;
	arr[TCA_DUALPI2_DROP_EARLY].name = "drop-early";
	arr[TCA_DUALPI2_DROP_EARLY].type = YNL_PT_U8;
	arr[TCA_DUALPI2_C_PROTECTION].name = "c-protection";
	arr[TCA_DUALPI2_C_PROTECTION].type = YNL_PT_U8;
	arr[TCA_DUALPI2_ECN_MASK].name = "ecn-mask";
	arr[TCA_DUALPI2_ECN_MASK].type = YNL_PT_U8;
	arr[TCA_DUALPI2_SPLIT_GSO].name = "split-gso";
	arr[TCA_DUALPI2_SPLIT_GSO].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_dualpi2_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_DUALPI2_MAX),
	.table = tc_dualpi2_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_ETF_MAX + 1> tc_etf_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_ETF_MAX + 1> arr{};
	arr[TCA_ETF_PARMS].name = "parms";
	arr[TCA_ETF_PARMS].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_etf_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_ETF_MAX),
	.table = tc_etf_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FQ_MAX + 1> tc_fq_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FQ_MAX + 1> arr{};
	arr[TCA_FQ_PLIMIT].name = "plimit";
	arr[TCA_FQ_PLIMIT].type = YNL_PT_U32;
	arr[TCA_FQ_FLOW_PLIMIT].name = "flow-plimit";
	arr[TCA_FQ_FLOW_PLIMIT].type = YNL_PT_U32;
	arr[TCA_FQ_QUANTUM].name = "quantum";
	arr[TCA_FQ_QUANTUM].type = YNL_PT_U32;
	arr[TCA_FQ_INITIAL_QUANTUM].name = "initial-quantum";
	arr[TCA_FQ_INITIAL_QUANTUM].type = YNL_PT_U32;
	arr[TCA_FQ_RATE_ENABLE].name = "rate-enable";
	arr[TCA_FQ_RATE_ENABLE].type = YNL_PT_U32;
	arr[TCA_FQ_FLOW_DEFAULT_RATE].name = "flow-default-rate";
	arr[TCA_FQ_FLOW_DEFAULT_RATE].type = YNL_PT_U32;
	arr[TCA_FQ_FLOW_MAX_RATE].name = "flow-max-rate";
	arr[TCA_FQ_FLOW_MAX_RATE].type = YNL_PT_U32;
	arr[TCA_FQ_BUCKETS_LOG].name = "buckets-log";
	arr[TCA_FQ_BUCKETS_LOG].type = YNL_PT_U32;
	arr[TCA_FQ_FLOW_REFILL_DELAY].name = "flow-refill-delay";
	arr[TCA_FQ_FLOW_REFILL_DELAY].type = YNL_PT_U32;
	arr[TCA_FQ_ORPHAN_MASK].name = "orphan-mask";
	arr[TCA_FQ_ORPHAN_MASK].type = YNL_PT_U32;
	arr[TCA_FQ_LOW_RATE_THRESHOLD].name = "low-rate-threshold";
	arr[TCA_FQ_LOW_RATE_THRESHOLD].type = YNL_PT_U32;
	arr[TCA_FQ_CE_THRESHOLD].name = "ce-threshold";
	arr[TCA_FQ_CE_THRESHOLD].type = YNL_PT_U32;
	arr[TCA_FQ_TIMER_SLACK].name = "timer-slack";
	arr[TCA_FQ_TIMER_SLACK].type = YNL_PT_U32;
	arr[TCA_FQ_HORIZON].name = "horizon";
	arr[TCA_FQ_HORIZON].type = YNL_PT_U32;
	arr[TCA_FQ_HORIZON_DROP].name = "horizon-drop";
	arr[TCA_FQ_HORIZON_DROP].type = YNL_PT_U8;
	arr[TCA_FQ_PRIOMAP].name = "priomap";
	arr[TCA_FQ_PRIOMAP].type = YNL_PT_BINARY;
	arr[TCA_FQ_WEIGHTS].name = "weights";
	arr[TCA_FQ_WEIGHTS].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_fq_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FQ_MAX),
	.table = tc_fq_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FQ_CODEL_MAX + 1> tc_fq_codel_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FQ_CODEL_MAX + 1> arr{};
	arr[TCA_FQ_CODEL_TARGET].name = "target";
	arr[TCA_FQ_CODEL_TARGET].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_LIMIT].name = "limit";
	arr[TCA_FQ_CODEL_LIMIT].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_INTERVAL].name = "interval";
	arr[TCA_FQ_CODEL_INTERVAL].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_ECN].name = "ecn";
	arr[TCA_FQ_CODEL_ECN].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_FLOWS].name = "flows";
	arr[TCA_FQ_CODEL_FLOWS].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_QUANTUM].name = "quantum";
	arr[TCA_FQ_CODEL_QUANTUM].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_CE_THRESHOLD].name = "ce-threshold";
	arr[TCA_FQ_CODEL_CE_THRESHOLD].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_DROP_BATCH_SIZE].name = "drop-batch-size";
	arr[TCA_FQ_CODEL_DROP_BATCH_SIZE].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_MEMORY_LIMIT].name = "memory-limit";
	arr[TCA_FQ_CODEL_MEMORY_LIMIT].type = YNL_PT_U32;
	arr[TCA_FQ_CODEL_CE_THRESHOLD_SELECTOR].name = "ce-threshold-selector";
	arr[TCA_FQ_CODEL_CE_THRESHOLD_SELECTOR].type = YNL_PT_U8;
	arr[TCA_FQ_CODEL_CE_THRESHOLD_MASK].name = "ce-threshold-mask";
	arr[TCA_FQ_CODEL_CE_THRESHOLD_MASK].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_fq_codel_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FQ_CODEL_MAX),
	.table = tc_fq_codel_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FQ_PIE_MAX + 1> tc_fq_pie_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FQ_PIE_MAX + 1> arr{};
	arr[TCA_FQ_PIE_LIMIT].name = "limit";
	arr[TCA_FQ_PIE_LIMIT].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_FLOWS].name = "flows";
	arr[TCA_FQ_PIE_FLOWS].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_TARGET].name = "target";
	arr[TCA_FQ_PIE_TARGET].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_TUPDATE].name = "tupdate";
	arr[TCA_FQ_PIE_TUPDATE].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_ALPHA].name = "alpha";
	arr[TCA_FQ_PIE_ALPHA].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_BETA].name = "beta";
	arr[TCA_FQ_PIE_BETA].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_QUANTUM].name = "quantum";
	arr[TCA_FQ_PIE_QUANTUM].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_MEMORY_LIMIT].name = "memory-limit";
	arr[TCA_FQ_PIE_MEMORY_LIMIT].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_ECN_PROB].name = "ecn-prob";
	arr[TCA_FQ_PIE_ECN_PROB].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_ECN].name = "ecn";
	arr[TCA_FQ_PIE_ECN].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_BYTEMODE].name = "bytemode";
	arr[TCA_FQ_PIE_BYTEMODE].type = YNL_PT_U32;
	arr[TCA_FQ_PIE_DQ_RATE_ESTIMATOR].name = "dq-rate-estimator";
	arr[TCA_FQ_PIE_DQ_RATE_ESTIMATOR].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_fq_pie_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FQ_PIE_MAX),
	.table = tc_fq_pie_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_HHF_MAX + 1> tc_hhf_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_HHF_MAX + 1> arr{};
	arr[TCA_HHF_BACKLOG_LIMIT].name = "backlog-limit";
	arr[TCA_HHF_BACKLOG_LIMIT].type = YNL_PT_U32;
	arr[TCA_HHF_QUANTUM].name = "quantum";
	arr[TCA_HHF_QUANTUM].type = YNL_PT_U32;
	arr[TCA_HHF_HH_FLOWS_LIMIT].name = "hh-flows-limit";
	arr[TCA_HHF_HH_FLOWS_LIMIT].type = YNL_PT_U32;
	arr[TCA_HHF_RESET_TIMEOUT].name = "reset-timeout";
	arr[TCA_HHF_RESET_TIMEOUT].type = YNL_PT_U32;
	arr[TCA_HHF_ADMIT_BYTES].name = "admit-bytes";
	arr[TCA_HHF_ADMIT_BYTES].type = YNL_PT_U32;
	arr[TCA_HHF_EVICT_TIMEOUT].name = "evict-timeout";
	arr[TCA_HHF_EVICT_TIMEOUT].type = YNL_PT_U32;
	arr[TCA_HHF_NON_HH_WEIGHT].name = "non-hh-weight";
	arr[TCA_HHF_NON_HH_WEIGHT].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_hhf_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_HHF_MAX),
	.table = tc_hhf_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_HTB_MAX + 1> tc_htb_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_HTB_MAX + 1> arr{};
	arr[TCA_HTB_PARMS].name = "parms";
	arr[TCA_HTB_PARMS].type = YNL_PT_BINARY;
	arr[TCA_HTB_INIT].name = "init";
	arr[TCA_HTB_INIT].type = YNL_PT_BINARY;
	arr[TCA_HTB_CTAB].name = "ctab";
	arr[TCA_HTB_CTAB].type = YNL_PT_BINARY;
	arr[TCA_HTB_RTAB].name = "rtab";
	arr[TCA_HTB_RTAB].type = YNL_PT_BINARY;
	arr[TCA_HTB_DIRECT_QLEN].name = "direct-qlen";
	arr[TCA_HTB_DIRECT_QLEN].type = YNL_PT_U32;
	arr[TCA_HTB_RATE64].name = "rate64";
	arr[TCA_HTB_RATE64].type = YNL_PT_U64;
	arr[TCA_HTB_CEIL64].name = "ceil64";
	arr[TCA_HTB_CEIL64].type = YNL_PT_U64;
	arr[TCA_HTB_PAD].name = "pad";
	arr[TCA_HTB_PAD].type = YNL_PT_IGNORE;
	arr[TCA_HTB_OFFLOAD].name = "offload";
	arr[TCA_HTB_OFFLOAD].type = YNL_PT_FLAG;
	return arr;
} ();

struct ynl_policy_nest tc_htb_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_HTB_MAX),
	.table = tc_htb_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_PIE_MAX + 1> tc_pie_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_PIE_MAX + 1> arr{};
	arr[TCA_PIE_TARGET].name = "target";
	arr[TCA_PIE_TARGET].type = YNL_PT_U32;
	arr[TCA_PIE_LIMIT].name = "limit";
	arr[TCA_PIE_LIMIT].type = YNL_PT_U32;
	arr[TCA_PIE_TUPDATE].name = "tupdate";
	arr[TCA_PIE_TUPDATE].type = YNL_PT_U32;
	arr[TCA_PIE_ALPHA].name = "alpha";
	arr[TCA_PIE_ALPHA].type = YNL_PT_U32;
	arr[TCA_PIE_BETA].name = "beta";
	arr[TCA_PIE_BETA].type = YNL_PT_U32;
	arr[TCA_PIE_ECN].name = "ecn";
	arr[TCA_PIE_ECN].type = YNL_PT_U32;
	arr[TCA_PIE_BYTEMODE].name = "bytemode";
	arr[TCA_PIE_BYTEMODE].type = YNL_PT_U32;
	arr[TCA_PIE_DQ_RATE_ESTIMATOR].name = "dq-rate-estimator";
	arr[TCA_PIE_DQ_RATE_ESTIMATOR].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_pie_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_PIE_MAX),
	.table = tc_pie_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_QFQ_MAX + 1> tc_qfq_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_QFQ_MAX + 1> arr{};
	arr[TCA_QFQ_WEIGHT].name = "weight";
	arr[TCA_QFQ_WEIGHT].type = YNL_PT_U32;
	arr[TCA_QFQ_LMAX].name = "lmax";
	arr[TCA_QFQ_LMAX].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_qfq_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_QFQ_MAX),
	.table = tc_qfq_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_RED_MAX + 1> tc_red_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_RED_MAX + 1> arr{};
	arr[TCA_RED_PARMS].name = "parms";
	arr[TCA_RED_PARMS].type = YNL_PT_BINARY;
	arr[TCA_RED_STAB].name = "stab";
	arr[TCA_RED_STAB].type = YNL_PT_BINARY;
	arr[TCA_RED_MAX_P].name = "max-p";
	arr[TCA_RED_MAX_P].type = YNL_PT_U32;
	arr[TCA_RED_FLAGS].name = "flags";
	arr[TCA_RED_FLAGS].type = YNL_PT_BITFIELD32;
	arr[TCA_RED_EARLY_DROP_BLOCK].name = "early-drop-block";
	arr[TCA_RED_EARLY_DROP_BLOCK].type = YNL_PT_U32;
	arr[TCA_RED_MARK_BLOCK].name = "mark-block";
	arr[TCA_RED_MARK_BLOCK].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_red_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_RED_MAX),
	.table = tc_red_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_TBF_MAX + 1> tc_tbf_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_TBF_MAX + 1> arr{};
	arr[TCA_TBF_PARMS].name = "parms";
	arr[TCA_TBF_PARMS].type = YNL_PT_BINARY;
	arr[TCA_TBF_RTAB].name = "rtab";
	arr[TCA_TBF_RTAB].type = YNL_PT_BINARY;
	arr[TCA_TBF_PTAB].name = "ptab";
	arr[TCA_TBF_PTAB].type = YNL_PT_BINARY;
	arr[TCA_TBF_RATE64].name = "rate64";
	arr[TCA_TBF_RATE64].type = YNL_PT_U64;
	arr[TCA_TBF_PRATE64].name = "prate64";
	arr[TCA_TBF_PRATE64].type = YNL_PT_U64;
	arr[TCA_TBF_BURST].name = "burst";
	arr[TCA_TBF_BURST].type = YNL_PT_U32;
	arr[TCA_TBF_PBURST].name = "pburst";
	arr[TCA_TBF_PBURST].type = YNL_PT_U32;
	arr[TCA_TBF_PAD].name = "pad";
	arr[TCA_TBF_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_tbf_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_TBF_MAX),
	.table = tc_tbf_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_EMATCH_TREE_MAX + 1> tc_ematch_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_EMATCH_TREE_MAX + 1> arr{};
	arr[TCA_EMATCH_TREE_HDR].name = "tree-hdr";
	arr[TCA_EMATCH_TREE_HDR].type = YNL_PT_BINARY;
	arr[TCA_EMATCH_TREE_LIST].name = "tree-list";
	arr[TCA_EMATCH_TREE_LIST].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_ematch_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_EMATCH_TREE_MAX),
	.table = tc_ematch_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_POLICE_MAX + 1> tc_police_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_POLICE_MAX + 1> arr{};
	arr[TCA_POLICE_TBF].name = "tbf";
	arr[TCA_POLICE_TBF].type = YNL_PT_BINARY;
	arr[TCA_POLICE_RATE].name = "rate";
	arr[TCA_POLICE_RATE].type = YNL_PT_BINARY;
	arr[TCA_POLICE_PEAKRATE].name = "peakrate";
	arr[TCA_POLICE_PEAKRATE].type = YNL_PT_BINARY;
	arr[TCA_POLICE_AVRATE].name = "avrate";
	arr[TCA_POLICE_AVRATE].type = YNL_PT_U32;
	arr[TCA_POLICE_RESULT].name = "result";
	arr[TCA_POLICE_RESULT].type = YNL_PT_U32;
	arr[TCA_POLICE_TM].name = "tm";
	arr[TCA_POLICE_TM].type = YNL_PT_BINARY;
	arr[TCA_POLICE_PAD].name = "pad";
	arr[TCA_POLICE_PAD].type = YNL_PT_IGNORE;
	arr[TCA_POLICE_RATE64].name = "rate64";
	arr[TCA_POLICE_RATE64].type = YNL_PT_U64;
	arr[TCA_POLICE_PEAKRATE64].name = "peakrate64";
	arr[TCA_POLICE_PEAKRATE64].type = YNL_PT_U64;
	arr[TCA_POLICE_PKTRATE64].name = "pktrate64";
	arr[TCA_POLICE_PKTRATE64].type = YNL_PT_U64;
	arr[TCA_POLICE_PKTBURST64].name = "pktburst64";
	arr[TCA_POLICE_PKTBURST64].type = YNL_PT_U64;
	return arr;
} ();

struct ynl_policy_nest tc_police_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_POLICE_MAX),
	.table = tc_police_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_MPLS_OPT_LSE_MAX + 1> tc_flower_key_mpls_opt_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_MPLS_OPT_LSE_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_DEPTH].name = "lse-depth";
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_DEPTH].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_TTL].name = "lse-ttl";
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_TTL].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_BOS].name = "lse-bos";
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_BOS].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_TC].name = "lse-tc";
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_TC].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_LABEL].name = "lse-label";
	arr[TCA_FLOWER_KEY_MPLS_OPT_LSE_LABEL].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_mpls_opt_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_MPLS_OPT_LSE_MAX),
	.table = tc_flower_key_mpls_opt_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_CFM_MAX + 1> tc_flower_key_cfm_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_CFM_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_CFM_MD_LEVEL].name = "md-level";
	arr[TCA_FLOWER_KEY_CFM_MD_LEVEL].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_CFM_OPCODE].name = "opcode";
	arr[TCA_FLOWER_KEY_CFM_OPCODE].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_cfm_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_CFM_MAX),
	.table = tc_flower_key_cfm_attrs_policy.data(),
};

static std::array<ynl_policy_attr,NETEM_LOSS_MAX + 1> tc_netem_loss_attrs_policy = []() {
	std::array<ynl_policy_attr,NETEM_LOSS_MAX + 1> arr{};
	arr[NETEM_LOSS_GI].name = "gi";
	arr[NETEM_LOSS_GI].type = YNL_PT_BINARY;
	arr[NETEM_LOSS_GE].name = "ge";
	arr[NETEM_LOSS_GE].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_netem_loss_attrs_nest = {
	.max_attr = static_cast<unsigned int>(NETEM_LOSS_MAX),
	.table = tc_netem_loss_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_TAPRIO_SCHED_ENTRY_MAX + 1> tc_taprio_sched_entry_policy = []() {
	std::array<ynl_policy_attr,TCA_TAPRIO_SCHED_ENTRY_MAX + 1> arr{};
	arr[TCA_TAPRIO_SCHED_ENTRY_INDEX].name = "index";
	arr[TCA_TAPRIO_SCHED_ENTRY_INDEX].type = YNL_PT_U32;
	arr[TCA_TAPRIO_SCHED_ENTRY_CMD].name = "cmd";
	arr[TCA_TAPRIO_SCHED_ENTRY_CMD].type = YNL_PT_U8;
	arr[TCA_TAPRIO_SCHED_ENTRY_GATE_MASK].name = "gate-mask";
	arr[TCA_TAPRIO_SCHED_ENTRY_GATE_MASK].type = YNL_PT_U32;
	arr[TCA_TAPRIO_SCHED_ENTRY_INTERVAL].name = "interval";
	arr[TCA_TAPRIO_SCHED_ENTRY_INTERVAL].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_taprio_sched_entry_nest = {
	.max_attr = static_cast<unsigned int>(TCA_TAPRIO_SCHED_ENTRY_MAX),
	.table = tc_taprio_sched_entry_policy.data(),
};

static std::array<ynl_policy_attr,TCA_TAPRIO_TC_ENTRY_MAX + 1> tc_taprio_tc_entry_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_TAPRIO_TC_ENTRY_MAX + 1> arr{};
	arr[TCA_TAPRIO_TC_ENTRY_INDEX].name = "index";
	arr[TCA_TAPRIO_TC_ENTRY_INDEX].type = YNL_PT_U32;
	arr[TCA_TAPRIO_TC_ENTRY_MAX_SDU].name = "max-sdu";
	arr[TCA_TAPRIO_TC_ENTRY_MAX_SDU].type = YNL_PT_U32;
	arr[TCA_TAPRIO_TC_ENTRY_FP].name = "fp";
	arr[TCA_TAPRIO_TC_ENTRY_FP].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_taprio_tc_entry_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_TAPRIO_TC_ENTRY_MAX),
	.table = tc_taprio_tc_entry_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CAKE_TIN_STATS_MAX + 1> tc_cake_tin_stats_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CAKE_TIN_STATS_MAX + 1> arr{};
	arr[TCA_CAKE_TIN_STATS_PAD].name = "pad";
	arr[TCA_CAKE_TIN_STATS_PAD].type = YNL_PT_IGNORE;
	arr[TCA_CAKE_TIN_STATS_SENT_PACKETS].name = "sent-packets";
	arr[TCA_CAKE_TIN_STATS_SENT_PACKETS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_SENT_BYTES64].name = "sent-bytes64";
	arr[TCA_CAKE_TIN_STATS_SENT_BYTES64].type = YNL_PT_U64;
	arr[TCA_CAKE_TIN_STATS_DROPPED_PACKETS].name = "dropped-packets";
	arr[TCA_CAKE_TIN_STATS_DROPPED_PACKETS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_DROPPED_BYTES64].name = "dropped-bytes64";
	arr[TCA_CAKE_TIN_STATS_DROPPED_BYTES64].type = YNL_PT_U64;
	arr[TCA_CAKE_TIN_STATS_ACKS_DROPPED_PACKETS].name = "acks-dropped-packets";
	arr[TCA_CAKE_TIN_STATS_ACKS_DROPPED_PACKETS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_ACKS_DROPPED_BYTES64].name = "acks-dropped-bytes64";
	arr[TCA_CAKE_TIN_STATS_ACKS_DROPPED_BYTES64].type = YNL_PT_U64;
	arr[TCA_CAKE_TIN_STATS_ECN_MARKED_PACKETS].name = "ecn-marked-packets";
	arr[TCA_CAKE_TIN_STATS_ECN_MARKED_PACKETS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_ECN_MARKED_BYTES64].name = "ecn-marked-bytes64";
	arr[TCA_CAKE_TIN_STATS_ECN_MARKED_BYTES64].type = YNL_PT_U64;
	arr[TCA_CAKE_TIN_STATS_BACKLOG_PACKETS].name = "backlog-packets";
	arr[TCA_CAKE_TIN_STATS_BACKLOG_PACKETS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_BACKLOG_BYTES].name = "backlog-bytes";
	arr[TCA_CAKE_TIN_STATS_BACKLOG_BYTES].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_THRESHOLD_RATE64].name = "threshold-rate64";
	arr[TCA_CAKE_TIN_STATS_THRESHOLD_RATE64].type = YNL_PT_U64;
	arr[TCA_CAKE_TIN_STATS_TARGET_US].name = "target-us";
	arr[TCA_CAKE_TIN_STATS_TARGET_US].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_INTERVAL_US].name = "interval-us";
	arr[TCA_CAKE_TIN_STATS_INTERVAL_US].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_WAY_INDIRECT_HITS].name = "way-indirect-hits";
	arr[TCA_CAKE_TIN_STATS_WAY_INDIRECT_HITS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_WAY_MISSES].name = "way-misses";
	arr[TCA_CAKE_TIN_STATS_WAY_MISSES].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_WAY_COLLISIONS].name = "way-collisions";
	arr[TCA_CAKE_TIN_STATS_WAY_COLLISIONS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_PEAK_DELAY_US].name = "peak-delay-us";
	arr[TCA_CAKE_TIN_STATS_PEAK_DELAY_US].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_AVG_DELAY_US].name = "avg-delay-us";
	arr[TCA_CAKE_TIN_STATS_AVG_DELAY_US].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_BASE_DELAY_US].name = "base-delay-us";
	arr[TCA_CAKE_TIN_STATS_BASE_DELAY_US].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_SPARSE_FLOWS].name = "sparse-flows";
	arr[TCA_CAKE_TIN_STATS_SPARSE_FLOWS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_BULK_FLOWS].name = "bulk-flows";
	arr[TCA_CAKE_TIN_STATS_BULK_FLOWS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_UNRESPONSIVE_FLOWS].name = "unresponsive-flows";
	arr[TCA_CAKE_TIN_STATS_UNRESPONSIVE_FLOWS].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_MAX_SKBLEN].name = "max-skblen";
	arr[TCA_CAKE_TIN_STATS_MAX_SKBLEN].type = YNL_PT_U32;
	arr[TCA_CAKE_TIN_STATS_FLOW_QUANTUM].name = "flow-quantum";
	arr[TCA_CAKE_TIN_STATS_FLOW_QUANTUM].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_cake_tin_stats_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CAKE_TIN_STATS_MAX),
	.table = tc_cake_tin_stats_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_GENEVE_MAX + 1> tc_flower_key_enc_opt_geneve_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_GENEVE_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_ENC_OPT_GENEVE_CLASS].name = "class";
	arr[TCA_FLOWER_KEY_ENC_OPT_GENEVE_CLASS].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_OPT_GENEVE_TYPE].name = "type";
	arr[TCA_FLOWER_KEY_ENC_OPT_GENEVE_TYPE].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_OPT_GENEVE_DATA].name = "data";
	arr[TCA_FLOWER_KEY_ENC_OPT_GENEVE_DATA].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_enc_opt_geneve_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_ENC_OPT_GENEVE_MAX),
	.table = tc_flower_key_enc_opt_geneve_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_VXLAN_MAX + 1> tc_flower_key_enc_opt_vxlan_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_VXLAN_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_ENC_OPT_VXLAN_GBP].name = "gbp";
	arr[TCA_FLOWER_KEY_ENC_OPT_VXLAN_GBP].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_enc_opt_vxlan_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_ENC_OPT_VXLAN_MAX),
	.table = tc_flower_key_enc_opt_vxlan_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_ERSPAN_MAX + 1> tc_flower_key_enc_opt_erspan_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_ERSPAN_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_VER].name = "ver";
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_VER].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_INDEX].name = "index";
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_INDEX].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_DIR].name = "dir";
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_DIR].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_HWID].name = "hwid";
	arr[TCA_FLOWER_KEY_ENC_OPT_ERSPAN_HWID].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_enc_opt_erspan_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_ENC_OPT_ERSPAN_MAX),
	.table = tc_flower_key_enc_opt_erspan_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_GTP_MAX + 1> tc_flower_key_enc_opt_gtp_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPT_GTP_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_ENC_OPT_GTP_PDU_TYPE].name = "pdu-type";
	arr[TCA_FLOWER_KEY_ENC_OPT_GTP_PDU_TYPE].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_OPT_GTP_QFI].name = "qfi";
	arr[TCA_FLOWER_KEY_ENC_OPT_GTP_QFI].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_enc_opt_gtp_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_ENC_OPT_GTP_MAX),
	.table = tc_flower_key_enc_opt_gtp_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_GRED_VQ_MAX + 1> tc_tca_gred_vq_entry_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_GRED_VQ_MAX + 1> arr{};
	arr[TCA_GRED_VQ_PAD].name = "pad";
	arr[TCA_GRED_VQ_PAD].type = YNL_PT_IGNORE;
	arr[TCA_GRED_VQ_DP].name = "dp";
	arr[TCA_GRED_VQ_DP].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_BYTES].name = "stat-bytes";
	arr[TCA_GRED_VQ_STAT_BYTES].type = YNL_PT_U64;
	arr[TCA_GRED_VQ_STAT_PACKETS].name = "stat-packets";
	arr[TCA_GRED_VQ_STAT_PACKETS].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_BACKLOG].name = "stat-backlog";
	arr[TCA_GRED_VQ_STAT_BACKLOG].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_PROB_DROP].name = "stat-prob-drop";
	arr[TCA_GRED_VQ_STAT_PROB_DROP].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_PROB_MARK].name = "stat-prob-mark";
	arr[TCA_GRED_VQ_STAT_PROB_MARK].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_FORCED_DROP].name = "stat-forced-drop";
	arr[TCA_GRED_VQ_STAT_FORCED_DROP].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_FORCED_MARK].name = "stat-forced-mark";
	arr[TCA_GRED_VQ_STAT_FORCED_MARK].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_PDROP].name = "stat-pdrop";
	arr[TCA_GRED_VQ_STAT_PDROP].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_STAT_OTHER].name = "stat-other";
	arr[TCA_GRED_VQ_STAT_OTHER].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_FLAGS].name = "flags";
	arr[TCA_GRED_VQ_FLAGS].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_tca_gred_vq_entry_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_GRED_VQ_MAX),
	.table = tc_tca_gred_vq_entry_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_ACT_BPF_MAX + 1> tc_act_bpf_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_ACT_BPF_MAX + 1> arr{};
	arr[TCA_ACT_BPF_TM].name = "tm";
	arr[TCA_ACT_BPF_TM].type = YNL_PT_BINARY;
	arr[TCA_ACT_BPF_PARMS].name = "parms";
	arr[TCA_ACT_BPF_PARMS].type = YNL_PT_BINARY;
	arr[TCA_ACT_BPF_OPS_LEN].name = "ops-len";
	arr[TCA_ACT_BPF_OPS_LEN].type = YNL_PT_U16;
	arr[TCA_ACT_BPF_OPS].name = "ops";
	arr[TCA_ACT_BPF_OPS].type = YNL_PT_BINARY;
	arr[TCA_ACT_BPF_FD].name = "fd";
	arr[TCA_ACT_BPF_FD].type = YNL_PT_U32;
	arr[TCA_ACT_BPF_NAME].name = "name";
	arr[TCA_ACT_BPF_NAME].type  = YNL_PT_NUL_STR;
	arr[TCA_ACT_BPF_PAD].name = "pad";
	arr[TCA_ACT_BPF_PAD].type = YNL_PT_IGNORE;
	arr[TCA_ACT_BPF_TAG].name = "tag";
	arr[TCA_ACT_BPF_TAG].type = YNL_PT_BINARY;
	arr[TCA_ACT_BPF_ID].name = "id";
	arr[TCA_ACT_BPF_ID].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_act_bpf_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_ACT_BPF_MAX),
	.table = tc_act_bpf_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CONNMARK_MAX + 1> tc_act_connmark_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CONNMARK_MAX + 1> arr{};
	arr[TCA_CONNMARK_PARMS].name = "parms";
	arr[TCA_CONNMARK_PARMS].type = YNL_PT_BINARY;
	arr[TCA_CONNMARK_TM].name = "tm";
	arr[TCA_CONNMARK_TM].type = YNL_PT_BINARY;
	arr[TCA_CONNMARK_PAD].name = "pad";
	arr[TCA_CONNMARK_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_connmark_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CONNMARK_MAX),
	.table = tc_act_connmark_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CSUM_MAX + 1> tc_act_csum_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CSUM_MAX + 1> arr{};
	arr[TCA_CSUM_PARMS].name = "parms";
	arr[TCA_CSUM_PARMS].type = YNL_PT_BINARY;
	arr[TCA_CSUM_TM].name = "tm";
	arr[TCA_CSUM_TM].type = YNL_PT_BINARY;
	arr[TCA_CSUM_PAD].name = "pad";
	arr[TCA_CSUM_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_csum_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CSUM_MAX),
	.table = tc_act_csum_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CT_MAX + 1> tc_act_ct_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CT_MAX + 1> arr{};
	arr[TCA_CT_PARMS].name = "parms";
	arr[TCA_CT_PARMS].type = YNL_PT_BINARY;
	arr[TCA_CT_TM].name = "tm";
	arr[TCA_CT_TM].type = YNL_PT_BINARY;
	arr[TCA_CT_ACTION].name = "action";
	arr[TCA_CT_ACTION].type = YNL_PT_U16;
	arr[TCA_CT_ZONE].name = "zone";
	arr[TCA_CT_ZONE].type = YNL_PT_U16;
	arr[TCA_CT_MARK].name = "mark";
	arr[TCA_CT_MARK].type = YNL_PT_U32;
	arr[TCA_CT_MARK_MASK].name = "mark-mask";
	arr[TCA_CT_MARK_MASK].type = YNL_PT_U32;
	arr[TCA_CT_LABELS].name = "labels";
	arr[TCA_CT_LABELS].type = YNL_PT_BINARY;
	arr[TCA_CT_LABELS_MASK].name = "labels-mask";
	arr[TCA_CT_LABELS_MASK].type = YNL_PT_BINARY;
	arr[TCA_CT_NAT_IPV4_MIN].name = "nat-ipv4-min";
	arr[TCA_CT_NAT_IPV4_MIN].type = YNL_PT_U32;
	arr[TCA_CT_NAT_IPV4_MAX].name = "nat-ipv4-max";
	arr[TCA_CT_NAT_IPV4_MAX].type = YNL_PT_U32;
	arr[TCA_CT_NAT_IPV6_MIN].name = "nat-ipv6-min";
	arr[TCA_CT_NAT_IPV6_MIN].type = YNL_PT_BINARY;
	arr[TCA_CT_NAT_IPV6_MAX].name = "nat-ipv6-max";
	arr[TCA_CT_NAT_IPV6_MAX].type = YNL_PT_BINARY;
	arr[TCA_CT_NAT_PORT_MIN].name = "nat-port-min";
	arr[TCA_CT_NAT_PORT_MIN].type = YNL_PT_U16;
	arr[TCA_CT_NAT_PORT_MAX].name = "nat-port-max";
	arr[TCA_CT_NAT_PORT_MAX].type = YNL_PT_U16;
	arr[TCA_CT_PAD].name = "pad";
	arr[TCA_CT_PAD].type = YNL_PT_IGNORE;
	arr[TCA_CT_HELPER_NAME].name = "helper-name";
	arr[TCA_CT_HELPER_NAME].type  = YNL_PT_NUL_STR;
	arr[TCA_CT_HELPER_FAMILY].name = "helper-family";
	arr[TCA_CT_HELPER_FAMILY].type = YNL_PT_U8;
	arr[TCA_CT_HELPER_PROTO].name = "helper-proto";
	arr[TCA_CT_HELPER_PROTO].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_act_ct_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CT_MAX),
	.table = tc_act_ct_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CTINFO_MAX + 1> tc_act_ctinfo_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CTINFO_MAX + 1> arr{};
	arr[TCA_CTINFO_PAD].name = "pad";
	arr[TCA_CTINFO_PAD].type = YNL_PT_IGNORE;
	arr[TCA_CTINFO_TM].name = "tm";
	arr[TCA_CTINFO_TM].type = YNL_PT_BINARY;
	arr[TCA_CTINFO_ACT].name = "act";
	arr[TCA_CTINFO_ACT].type = YNL_PT_BINARY;
	arr[TCA_CTINFO_ZONE].name = "zone";
	arr[TCA_CTINFO_ZONE].type = YNL_PT_U16;
	arr[TCA_CTINFO_PARMS_DSCP_MASK].name = "parms-dscp-mask";
	arr[TCA_CTINFO_PARMS_DSCP_MASK].type = YNL_PT_U32;
	arr[TCA_CTINFO_PARMS_DSCP_STATEMASK].name = "parms-dscp-statemask";
	arr[TCA_CTINFO_PARMS_DSCP_STATEMASK].type = YNL_PT_U32;
	arr[TCA_CTINFO_PARMS_CPMARK_MASK].name = "parms-cpmark-mask";
	arr[TCA_CTINFO_PARMS_CPMARK_MASK].type = YNL_PT_U32;
	arr[TCA_CTINFO_STATS_DSCP_SET].name = "stats-dscp-set";
	arr[TCA_CTINFO_STATS_DSCP_SET].type = YNL_PT_U64;
	arr[TCA_CTINFO_STATS_DSCP_ERROR].name = "stats-dscp-error";
	arr[TCA_CTINFO_STATS_DSCP_ERROR].type = YNL_PT_U64;
	arr[TCA_CTINFO_STATS_CPMARK_SET].name = "stats-cpmark-set";
	arr[TCA_CTINFO_STATS_CPMARK_SET].type = YNL_PT_U64;
	return arr;
} ();

struct ynl_policy_nest tc_act_ctinfo_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CTINFO_MAX),
	.table = tc_act_ctinfo_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_GACT_MAX + 1> tc_act_gact_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_GACT_MAX + 1> arr{};
	arr[TCA_GACT_TM].name = "tm";
	arr[TCA_GACT_TM].type = YNL_PT_BINARY;
	arr[TCA_GACT_PARMS].name = "parms";
	arr[TCA_GACT_PARMS].type = YNL_PT_BINARY;
	arr[TCA_GACT_PROB].name = "prob";
	arr[TCA_GACT_PROB].type = YNL_PT_BINARY;
	arr[TCA_GACT_PAD].name = "pad";
	arr[TCA_GACT_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_gact_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_GACT_MAX),
	.table = tc_act_gact_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_GATE_MAX + 1> tc_act_gate_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_GATE_MAX + 1> arr{};
	arr[TCA_GATE_TM].name = "tm";
	arr[TCA_GATE_TM].type = YNL_PT_BINARY;
	arr[TCA_GATE_PARMS].name = "parms";
	arr[TCA_GATE_PARMS].type = YNL_PT_BINARY;
	arr[TCA_GATE_PAD].name = "pad";
	arr[TCA_GATE_PAD].type = YNL_PT_IGNORE;
	arr[TCA_GATE_PRIORITY].name = "priority";
	arr[TCA_GATE_PRIORITY].type = YNL_PT_U32;
	arr[TCA_GATE_ENTRY_LIST].name = "entry-list";
	arr[TCA_GATE_ENTRY_LIST].type = YNL_PT_BINARY;
	arr[TCA_GATE_BASE_TIME].name = "base-time";
	arr[TCA_GATE_BASE_TIME].type = YNL_PT_U64;
	arr[TCA_GATE_CYCLE_TIME].name = "cycle-time";
	arr[TCA_GATE_CYCLE_TIME].type = YNL_PT_U64;
	arr[TCA_GATE_CYCLE_TIME_EXT].name = "cycle-time-ext";
	arr[TCA_GATE_CYCLE_TIME_EXT].type = YNL_PT_U64;
	arr[TCA_GATE_FLAGS].name = "flags";
	arr[TCA_GATE_FLAGS].type = YNL_PT_U32;
	arr[TCA_GATE_CLOCKID].name = "clockid";
	arr[TCA_GATE_CLOCKID].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_act_gate_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_GATE_MAX),
	.table = tc_act_gate_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_IFE_MAX + 1> tc_act_ife_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_IFE_MAX + 1> arr{};
	arr[TCA_IFE_PARMS].name = "parms";
	arr[TCA_IFE_PARMS].type = YNL_PT_BINARY;
	arr[TCA_IFE_TM].name = "tm";
	arr[TCA_IFE_TM].type = YNL_PT_BINARY;
	arr[TCA_IFE_DMAC].name = "dmac";
	arr[TCA_IFE_DMAC].type = YNL_PT_BINARY;
	arr[TCA_IFE_SMAC].name = "smac";
	arr[TCA_IFE_SMAC].type = YNL_PT_BINARY;
	arr[TCA_IFE_TYPE].name = "type";
	arr[TCA_IFE_TYPE].type = YNL_PT_U16;
	arr[TCA_IFE_METALST].name = "metalst";
	arr[TCA_IFE_METALST].type = YNL_PT_BINARY;
	arr[TCA_IFE_PAD].name = "pad";
	arr[TCA_IFE_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_ife_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_IFE_MAX),
	.table = tc_act_ife_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_MIRRED_MAX + 1> tc_act_mirred_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_MIRRED_MAX + 1> arr{};
	arr[TCA_MIRRED_TM].name = "tm";
	arr[TCA_MIRRED_TM].type = YNL_PT_BINARY;
	arr[TCA_MIRRED_PARMS].name = "parms";
	arr[TCA_MIRRED_PARMS].type = YNL_PT_BINARY;
	arr[TCA_MIRRED_PAD].name = "pad";
	arr[TCA_MIRRED_PAD].type = YNL_PT_IGNORE;
	arr[TCA_MIRRED_BLOCKID].name = "blockid";
	arr[TCA_MIRRED_BLOCKID].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_act_mirred_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_MIRRED_MAX),
	.table = tc_act_mirred_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_MPLS_MAX + 1> tc_act_mpls_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_MPLS_MAX + 1> arr{};
	arr[TCA_MPLS_TM].name = "tm";
	arr[TCA_MPLS_TM].type = YNL_PT_BINARY;
	arr[TCA_MPLS_PARMS].name = "parms";
	arr[TCA_MPLS_PARMS].type = YNL_PT_BINARY;
	arr[TCA_MPLS_PAD].name = "pad";
	arr[TCA_MPLS_PAD].type = YNL_PT_IGNORE;
	arr[TCA_MPLS_PROTO].name = "proto";
	arr[TCA_MPLS_PROTO].type = YNL_PT_U16;
	arr[TCA_MPLS_LABEL].name = "label";
	arr[TCA_MPLS_LABEL].type = YNL_PT_U32;
	arr[TCA_MPLS_TC].name = "tc";
	arr[TCA_MPLS_TC].type = YNL_PT_U8;
	arr[TCA_MPLS_TTL].name = "ttl";
	arr[TCA_MPLS_TTL].type = YNL_PT_U8;
	arr[TCA_MPLS_BOS].name = "bos";
	arr[TCA_MPLS_BOS].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_act_mpls_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_MPLS_MAX),
	.table = tc_act_mpls_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_NAT_MAX + 1> tc_act_nat_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_NAT_MAX + 1> arr{};
	arr[TCA_NAT_PARMS].name = "parms";
	arr[TCA_NAT_PARMS].type = YNL_PT_BINARY;
	arr[TCA_NAT_TM].name = "tm";
	arr[TCA_NAT_TM].type = YNL_PT_BINARY;
	arr[TCA_NAT_PAD].name = "pad";
	arr[TCA_NAT_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_nat_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_NAT_MAX),
	.table = tc_act_nat_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_PEDIT_MAX + 1> tc_act_pedit_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_PEDIT_MAX + 1> arr{};
	arr[TCA_PEDIT_TM].name = "tm";
	arr[TCA_PEDIT_TM].type = YNL_PT_BINARY;
	arr[TCA_PEDIT_PARMS].name = "parms";
	arr[TCA_PEDIT_PARMS].type = YNL_PT_BINARY;
	arr[TCA_PEDIT_PAD].name = "pad";
	arr[TCA_PEDIT_PAD].type = YNL_PT_IGNORE;
	arr[TCA_PEDIT_PARMS_EX].name = "parms-ex";
	arr[TCA_PEDIT_PARMS_EX].type = YNL_PT_BINARY;
	arr[TCA_PEDIT_KEYS_EX].name = "keys-ex";
	arr[TCA_PEDIT_KEYS_EX].type = YNL_PT_BINARY;
	arr[TCA_PEDIT_KEY_EX].name = "key-ex";
	arr[TCA_PEDIT_KEY_EX].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_act_pedit_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_PEDIT_MAX),
	.table = tc_act_pedit_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_SAMPLE_MAX + 1> tc_act_sample_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_SAMPLE_MAX + 1> arr{};
	arr[TCA_SAMPLE_TM].name = "tm";
	arr[TCA_SAMPLE_TM].type = YNL_PT_BINARY;
	arr[TCA_SAMPLE_PARMS].name = "parms";
	arr[TCA_SAMPLE_PARMS].type = YNL_PT_BINARY;
	arr[TCA_SAMPLE_RATE].name = "rate";
	arr[TCA_SAMPLE_RATE].type = YNL_PT_U32;
	arr[TCA_SAMPLE_TRUNC_SIZE].name = "trunc-size";
	arr[TCA_SAMPLE_TRUNC_SIZE].type = YNL_PT_U32;
	arr[TCA_SAMPLE_PSAMPLE_GROUP].name = "psample-group";
	arr[TCA_SAMPLE_PSAMPLE_GROUP].type = YNL_PT_U32;
	arr[TCA_SAMPLE_PAD].name = "pad";
	arr[TCA_SAMPLE_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_sample_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_SAMPLE_MAX),
	.table = tc_act_sample_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_DEF_MAX + 1> tc_act_simple_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_DEF_MAX + 1> arr{};
	arr[TCA_DEF_TM].name = "tm";
	arr[TCA_DEF_TM].type = YNL_PT_BINARY;
	arr[TCA_DEF_PARMS].name = "parms";
	arr[TCA_DEF_PARMS].type = YNL_PT_BINARY;
	arr[TCA_DEF_DATA].name = "data";
	arr[TCA_DEF_DATA].type = YNL_PT_BINARY;
	arr[TCA_DEF_PAD].name = "pad";
	arr[TCA_DEF_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_simple_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_DEF_MAX),
	.table = tc_act_simple_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_SKBEDIT_MAX + 1> tc_act_skbedit_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_SKBEDIT_MAX + 1> arr{};
	arr[TCA_SKBEDIT_TM].name = "tm";
	arr[TCA_SKBEDIT_TM].type = YNL_PT_BINARY;
	arr[TCA_SKBEDIT_PARMS].name = "parms";
	arr[TCA_SKBEDIT_PARMS].type = YNL_PT_BINARY;
	arr[TCA_SKBEDIT_PRIORITY].name = "priority";
	arr[TCA_SKBEDIT_PRIORITY].type = YNL_PT_U32;
	arr[TCA_SKBEDIT_QUEUE_MAPPING].name = "queue-mapping";
	arr[TCA_SKBEDIT_QUEUE_MAPPING].type = YNL_PT_U16;
	arr[TCA_SKBEDIT_MARK].name = "mark";
	arr[TCA_SKBEDIT_MARK].type = YNL_PT_U32;
	arr[TCA_SKBEDIT_PAD].name = "pad";
	arr[TCA_SKBEDIT_PAD].type = YNL_PT_IGNORE;
	arr[TCA_SKBEDIT_PTYPE].name = "ptype";
	arr[TCA_SKBEDIT_PTYPE].type = YNL_PT_U16;
	arr[TCA_SKBEDIT_MASK].name = "mask";
	arr[TCA_SKBEDIT_MASK].type = YNL_PT_U32;
	arr[TCA_SKBEDIT_FLAGS].name = "flags";
	arr[TCA_SKBEDIT_FLAGS].type = YNL_PT_U64;
	arr[TCA_SKBEDIT_QUEUE_MAPPING_MAX].name = "queue-mapping-max";
	arr[TCA_SKBEDIT_QUEUE_MAPPING_MAX].type = YNL_PT_U16;
	return arr;
} ();

struct ynl_policy_nest tc_act_skbedit_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_SKBEDIT_MAX),
	.table = tc_act_skbedit_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_SKBMOD_MAX + 1> tc_act_skbmod_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_SKBMOD_MAX + 1> arr{};
	arr[TCA_SKBMOD_TM].name = "tm";
	arr[TCA_SKBMOD_TM].type = YNL_PT_BINARY;
	arr[TCA_SKBMOD_PARMS].name = "parms";
	arr[TCA_SKBMOD_PARMS].type = YNL_PT_BINARY;
	arr[TCA_SKBMOD_DMAC].name = "dmac";
	arr[TCA_SKBMOD_DMAC].type = YNL_PT_BINARY;
	arr[TCA_SKBMOD_SMAC].name = "smac";
	arr[TCA_SKBMOD_SMAC].type = YNL_PT_BINARY;
	arr[TCA_SKBMOD_ETYPE].name = "etype";
	arr[TCA_SKBMOD_ETYPE].type = YNL_PT_BINARY;
	arr[TCA_SKBMOD_PAD].name = "pad";
	arr[TCA_SKBMOD_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_act_skbmod_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_SKBMOD_MAX),
	.table = tc_act_skbmod_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_TUNNEL_KEY_MAX + 1> tc_act_tunnel_key_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_TUNNEL_KEY_MAX + 1> arr{};
	arr[TCA_TUNNEL_KEY_TM].name = "tm";
	arr[TCA_TUNNEL_KEY_TM].type = YNL_PT_BINARY;
	arr[TCA_TUNNEL_KEY_PARMS].name = "parms";
	arr[TCA_TUNNEL_KEY_PARMS].type = YNL_PT_BINARY;
	arr[TCA_TUNNEL_KEY_ENC_IPV4_SRC].name = "enc-ipv4-src";
	arr[TCA_TUNNEL_KEY_ENC_IPV4_SRC].type = YNL_PT_U32;
	arr[TCA_TUNNEL_KEY_ENC_IPV4_DST].name = "enc-ipv4-dst";
	arr[TCA_TUNNEL_KEY_ENC_IPV4_DST].type = YNL_PT_U32;
	arr[TCA_TUNNEL_KEY_ENC_IPV6_SRC].name = "enc-ipv6-src";
	arr[TCA_TUNNEL_KEY_ENC_IPV6_SRC].type = YNL_PT_BINARY;
	arr[TCA_TUNNEL_KEY_ENC_IPV6_DST].name = "enc-ipv6-dst";
	arr[TCA_TUNNEL_KEY_ENC_IPV6_DST].type = YNL_PT_BINARY;
	arr[TCA_TUNNEL_KEY_ENC_KEY_ID].name = "enc-key-id";
	arr[TCA_TUNNEL_KEY_ENC_KEY_ID].type = YNL_PT_U64;
	arr[TCA_TUNNEL_KEY_PAD].name = "pad";
	arr[TCA_TUNNEL_KEY_PAD].type = YNL_PT_IGNORE;
	arr[TCA_TUNNEL_KEY_ENC_DST_PORT].name = "enc-dst-port";
	arr[TCA_TUNNEL_KEY_ENC_DST_PORT].type = YNL_PT_U16;
	arr[TCA_TUNNEL_KEY_NO_CSUM].name = "no-csum";
	arr[TCA_TUNNEL_KEY_NO_CSUM].type = YNL_PT_U8;
	arr[TCA_TUNNEL_KEY_ENC_OPTS].name = "enc-opts";
	arr[TCA_TUNNEL_KEY_ENC_OPTS].type = YNL_PT_BINARY;
	arr[TCA_TUNNEL_KEY_ENC_TOS].name = "enc-tos";
	arr[TCA_TUNNEL_KEY_ENC_TOS].type = YNL_PT_U8;
	arr[TCA_TUNNEL_KEY_ENC_TTL].name = "enc-ttl";
	arr[TCA_TUNNEL_KEY_ENC_TTL].type = YNL_PT_U8;
	arr[TCA_TUNNEL_KEY_NO_FRAG].name = "no-frag";
	arr[TCA_TUNNEL_KEY_NO_FRAG].type = YNL_PT_FLAG;
	return arr;
} ();

struct ynl_policy_nest tc_act_tunnel_key_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_TUNNEL_KEY_MAX),
	.table = tc_act_tunnel_key_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_VLAN_MAX + 1> tc_act_vlan_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_VLAN_MAX + 1> arr{};
	arr[TCA_VLAN_TM].name = "tm";
	arr[TCA_VLAN_TM].type = YNL_PT_BINARY;
	arr[TCA_VLAN_PARMS].name = "parms";
	arr[TCA_VLAN_PARMS].type = YNL_PT_BINARY;
	arr[TCA_VLAN_PUSH_VLAN_ID].name = "push-vlan-id";
	arr[TCA_VLAN_PUSH_VLAN_ID].type = YNL_PT_U16;
	arr[TCA_VLAN_PUSH_VLAN_PROTOCOL].name = "push-vlan-protocol";
	arr[TCA_VLAN_PUSH_VLAN_PROTOCOL].type = YNL_PT_U16;
	arr[TCA_VLAN_PAD].name = "pad";
	arr[TCA_VLAN_PAD].type = YNL_PT_IGNORE;
	arr[TCA_VLAN_PUSH_VLAN_PRIORITY].name = "push-vlan-priority";
	arr[TCA_VLAN_PUSH_VLAN_PRIORITY].type = YNL_PT_U8;
	arr[TCA_VLAN_PUSH_ETH_DST].name = "push-eth-dst";
	arr[TCA_VLAN_PUSH_ETH_DST].type = YNL_PT_BINARY;
	arr[TCA_VLAN_PUSH_ETH_SRC].name = "push-eth-src";
	arr[TCA_VLAN_PUSH_ETH_SRC].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_act_vlan_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_VLAN_MAX),
	.table = tc_act_vlan_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOW_MAX + 1> tc_flow_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOW_MAX + 1> arr{};
	arr[TCA_FLOW_KEYS].name = "keys";
	arr[TCA_FLOW_KEYS].type = YNL_PT_U32;
	arr[TCA_FLOW_MODE].name = "mode";
	arr[TCA_FLOW_MODE].type = YNL_PT_U32;
	arr[TCA_FLOW_BASECLASS].name = "baseclass";
	arr[TCA_FLOW_BASECLASS].type = YNL_PT_U32;
	arr[TCA_FLOW_RSHIFT].name = "rshift";
	arr[TCA_FLOW_RSHIFT].type = YNL_PT_U32;
	arr[TCA_FLOW_ADDEND].name = "addend";
	arr[TCA_FLOW_ADDEND].type = YNL_PT_U32;
	arr[TCA_FLOW_MASK].name = "mask";
	arr[TCA_FLOW_MASK].type = YNL_PT_U32;
	arr[TCA_FLOW_XOR].name = "xor";
	arr[TCA_FLOW_XOR].type = YNL_PT_U32;
	arr[TCA_FLOW_DIVISOR].name = "divisor";
	arr[TCA_FLOW_DIVISOR].type = YNL_PT_U32;
	arr[TCA_FLOW_ACT].name = "act";
	arr[TCA_FLOW_ACT].type = YNL_PT_BINARY;
	arr[TCA_FLOW_POLICE].name = "police";
	arr[TCA_FLOW_POLICE].type = YNL_PT_NEST;
	arr[TCA_FLOW_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_FLOW_EMATCHES].name = "ematches";
	arr[TCA_FLOW_EMATCHES].type = YNL_PT_BINARY;
	arr[TCA_FLOW_PERTURB].name = "perturb";
	arr[TCA_FLOW_PERTURB].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_flow_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOW_MAX),
	.table = tc_flow_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_NETEM_MAX + 1> tc_netem_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_NETEM_MAX + 1> arr{};
	arr[TCA_NETEM_CORR].name = "corr";
	arr[TCA_NETEM_CORR].type = YNL_PT_BINARY;
	arr[TCA_NETEM_DELAY_DIST].name = "delay-dist";
	arr[TCA_NETEM_DELAY_DIST].type = YNL_PT_BINARY;
	arr[TCA_NETEM_REORDER].name = "reorder";
	arr[TCA_NETEM_REORDER].type = YNL_PT_BINARY;
	arr[TCA_NETEM_CORRUPT].name = "corrupt";
	arr[TCA_NETEM_CORRUPT].type = YNL_PT_BINARY;
	arr[TCA_NETEM_LOSS].name = "loss";
	arr[TCA_NETEM_LOSS].type = YNL_PT_NEST;
	arr[TCA_NETEM_LOSS].nest = &tc_netem_loss_attrs_nest;
	arr[TCA_NETEM_RATE].name = "rate";
	arr[TCA_NETEM_RATE].type = YNL_PT_BINARY;
	arr[TCA_NETEM_ECN].name = "ecn";
	arr[TCA_NETEM_ECN].type = YNL_PT_U32;
	arr[TCA_NETEM_RATE64].name = "rate64";
	arr[TCA_NETEM_RATE64].type = YNL_PT_U64;
	arr[TCA_NETEM_PAD].name = "pad";
	arr[TCA_NETEM_PAD].type = YNL_PT_U32;
	arr[TCA_NETEM_LATENCY64].name = "latency64";
	arr[TCA_NETEM_LATENCY64].type = YNL_PT_U64;
	arr[TCA_NETEM_JITTER64].name = "jitter64";
	arr[TCA_NETEM_JITTER64].type = YNL_PT_U64;
	arr[TCA_NETEM_SLOT].name = "slot";
	arr[TCA_NETEM_SLOT].type = YNL_PT_BINARY;
	arr[TCA_NETEM_SLOT_DIST].name = "slot-dist";
	arr[TCA_NETEM_SLOT_DIST].type = YNL_PT_BINARY;
	arr[TCA_NETEM_PRNG_SEED].name = "prng-seed";
	arr[TCA_NETEM_PRNG_SEED].type = YNL_PT_U64;
	return arr;
} ();

struct ynl_policy_nest tc_netem_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_NETEM_MAX),
	.table = tc_netem_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CAKE_STATS_MAX + 1> tc_cake_stats_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CAKE_STATS_MAX + 1> arr{};
	arr[TCA_CAKE_STATS_PAD].name = "pad";
	arr[TCA_CAKE_STATS_PAD].type = YNL_PT_IGNORE;
	arr[TCA_CAKE_STATS_CAPACITY_ESTIMATE64].name = "capacity-estimate64";
	arr[TCA_CAKE_STATS_CAPACITY_ESTIMATE64].type = YNL_PT_U64;
	arr[TCA_CAKE_STATS_MEMORY_LIMIT].name = "memory-limit";
	arr[TCA_CAKE_STATS_MEMORY_LIMIT].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_MEMORY_USED].name = "memory-used";
	arr[TCA_CAKE_STATS_MEMORY_USED].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_AVG_NETOFF].name = "avg-netoff";
	arr[TCA_CAKE_STATS_AVG_NETOFF].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_MIN_NETLEN].name = "min-netlen";
	arr[TCA_CAKE_STATS_MIN_NETLEN].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_MAX_NETLEN].name = "max-netlen";
	arr[TCA_CAKE_STATS_MAX_NETLEN].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_MIN_ADJLEN].name = "min-adjlen";
	arr[TCA_CAKE_STATS_MIN_ADJLEN].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_MAX_ADJLEN].name = "max-adjlen";
	arr[TCA_CAKE_STATS_MAX_ADJLEN].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_TIN_STATS].name = "tin-stats";
	arr[TCA_CAKE_STATS_TIN_STATS].type = YNL_PT_NEST;
	arr[TCA_CAKE_STATS_TIN_STATS].nest = &tc_cake_tin_stats_attrs_nest;
	arr[TCA_CAKE_STATS_DEFICIT].name = "deficit";
	arr[TCA_CAKE_STATS_DEFICIT].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_COBALT_COUNT].name = "cobalt-count";
	arr[TCA_CAKE_STATS_COBALT_COUNT].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_DROPPING].name = "dropping";
	arr[TCA_CAKE_STATS_DROPPING].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_DROP_NEXT_US].name = "drop-next-us";
	arr[TCA_CAKE_STATS_DROP_NEXT_US].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_P_DROP].name = "p-drop";
	arr[TCA_CAKE_STATS_P_DROP].type = YNL_PT_U32;
	arr[TCA_CAKE_STATS_BLUE_TIMER_US].name = "blue-timer-us";
	arr[TCA_CAKE_STATS_BLUE_TIMER_US].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_cake_stats_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CAKE_STATS_MAX),
	.table = tc_cake_stats_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPTS_MAX + 1> tc_flower_key_enc_opts_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_KEY_ENC_OPTS_MAX + 1> arr{};
	arr[TCA_FLOWER_KEY_ENC_OPTS_GENEVE].name = "geneve";
	arr[TCA_FLOWER_KEY_ENC_OPTS_GENEVE].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_ENC_OPTS_GENEVE].nest = &tc_flower_key_enc_opt_geneve_attrs_nest;
	arr[TCA_FLOWER_KEY_ENC_OPTS_VXLAN].name = "vxlan";
	arr[TCA_FLOWER_KEY_ENC_OPTS_VXLAN].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_ENC_OPTS_VXLAN].nest = &tc_flower_key_enc_opt_vxlan_attrs_nest;
	arr[TCA_FLOWER_KEY_ENC_OPTS_ERSPAN].name = "erspan";
	arr[TCA_FLOWER_KEY_ENC_OPTS_ERSPAN].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_ENC_OPTS_ERSPAN].nest = &tc_flower_key_enc_opt_erspan_attrs_nest;
	arr[TCA_FLOWER_KEY_ENC_OPTS_GTP].name = "gtp";
	arr[TCA_FLOWER_KEY_ENC_OPTS_GTP].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_ENC_OPTS_GTP].nest = &tc_flower_key_enc_opt_gtp_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_flower_key_enc_opts_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_KEY_ENC_OPTS_MAX),
	.table = tc_flower_key_enc_opts_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_GRED_VQ_MAX + 1> tc_tca_gred_vq_list_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_GRED_VQ_MAX + 1> arr{};
	arr[TCA_GRED_VQ_ENTRY].name = "entry";
	arr[TCA_GRED_VQ_ENTRY].type = YNL_PT_NEST;
	arr[TCA_GRED_VQ_ENTRY].nest = &tc_tca_gred_vq_entry_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_tca_gred_vq_list_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_GRED_VQ_MAX),
	.table = tc_tca_gred_vq_list_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_TAPRIO_SCHED_MAX + 1> tc_taprio_sched_entry_list_policy = []() {
	std::array<ynl_policy_attr,TCA_TAPRIO_SCHED_MAX + 1> arr{};
	arr[TCA_TAPRIO_SCHED_ENTRY].name = "entry";
	arr[TCA_TAPRIO_SCHED_ENTRY].type = YNL_PT_NEST;
	arr[TCA_TAPRIO_SCHED_ENTRY].nest = &tc_taprio_sched_entry_nest;
	return arr;
} ();

struct ynl_policy_nest tc_taprio_sched_entry_list_nest = {
	.max_attr = static_cast<unsigned int>(TCA_TAPRIO_SCHED_MAX),
	.table = tc_taprio_sched_entry_list_policy.data(),
};

static std::array<ynl_policy_attr,19> tc_act_options_msg_policy = []() {
	std::array<ynl_policy_attr,19> arr{};
	arr[0].type = YNL_PT_SUBMSG;
	arr[0].name = "bpf";
	arr[0].nest = &tc_act_bpf_attrs_nest;
	arr[1].type = YNL_PT_SUBMSG;
	arr[1].name = "connmark";
	arr[1].nest = &tc_act_connmark_attrs_nest;
	arr[2].type = YNL_PT_SUBMSG;
	arr[2].name = "csum";
	arr[2].nest = &tc_act_csum_attrs_nest;
	arr[3].type = YNL_PT_SUBMSG;
	arr[3].name = "ct";
	arr[3].nest = &tc_act_ct_attrs_nest;
	arr[4].type = YNL_PT_SUBMSG;
	arr[4].name = "ctinfo";
	arr[4].nest = &tc_act_ctinfo_attrs_nest;
	arr[5].type = YNL_PT_SUBMSG;
	arr[5].name = "gact";
	arr[5].nest = &tc_act_gact_attrs_nest;
	arr[6].type = YNL_PT_SUBMSG;
	arr[6].name = "gate";
	arr[6].nest = &tc_act_gate_attrs_nest;
	arr[7].type = YNL_PT_SUBMSG;
	arr[7].name = "ife";
	arr[7].nest = &tc_act_ife_attrs_nest;
	arr[8].type = YNL_PT_SUBMSG;
	arr[8].name = "mirred";
	arr[8].nest = &tc_act_mirred_attrs_nest;
	arr[9].type = YNL_PT_SUBMSG;
	arr[9].name = "mpls";
	arr[9].nest = &tc_act_mpls_attrs_nest;
	arr[10].type = YNL_PT_SUBMSG;
	arr[10].name = "nat";
	arr[10].nest = &tc_act_nat_attrs_nest;
	arr[11].type = YNL_PT_SUBMSG;
	arr[11].name = "pedit";
	arr[11].nest = &tc_act_pedit_attrs_nest;
	arr[12].type = YNL_PT_SUBMSG;
	arr[12].name = "police";
	arr[12].nest = &tc_police_attrs_nest;
	arr[13].type = YNL_PT_SUBMSG;
	arr[13].name = "sample";
	arr[13].nest = &tc_act_sample_attrs_nest;
	arr[14].type = YNL_PT_SUBMSG;
	arr[14].name = "simple";
	arr[14].nest = &tc_act_simple_attrs_nest;
	arr[15].type = YNL_PT_SUBMSG;
	arr[15].name = "skbedit";
	arr[15].nest = &tc_act_skbedit_attrs_nest;
	arr[16].type = YNL_PT_SUBMSG;
	arr[16].name = "skbmod";
	arr[16].nest = &tc_act_skbmod_attrs_nest;
	arr[17].type = YNL_PT_SUBMSG;
	arr[17].name = "tunnel_key";
	arr[17].nest = &tc_act_tunnel_key_attrs_nest;
	arr[18].type = YNL_PT_SUBMSG;
	arr[18].name = "vlan";
	arr[18].nest = &tc_act_vlan_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_act_options_msg_nest = {
	.max_attr = 19,
	.table = tc_act_options_msg_policy.data(),
};

static std::array<ynl_policy_attr,12> tc_tca_stats_app_msg_policy = []() {
	std::array<ynl_policy_attr,12> arr{};
	arr[0].type = YNL_PT_SUBMSG;
	arr[0].name = "cake";
	arr[0].nest = &tc_cake_stats_attrs_nest;
	arr[1].type = YNL_PT_SUBMSG;
	arr[1].name = "choke";
	arr[2].type = YNL_PT_SUBMSG;
	arr[2].name = "codel";
	arr[3].type = YNL_PT_SUBMSG;
	arr[3].name = "dualpi2";
	arr[4].type = YNL_PT_SUBMSG;
	arr[4].name = "fq";
	arr[5].type = YNL_PT_SUBMSG;
	arr[5].name = "fq_codel";
	arr[6].type = YNL_PT_SUBMSG;
	arr[6].name = "fq_pie";
	arr[7].type = YNL_PT_SUBMSG;
	arr[7].name = "hhf";
	arr[8].type = YNL_PT_SUBMSG;
	arr[8].name = "pie";
	arr[9].type = YNL_PT_SUBMSG;
	arr[9].name = "red";
	arr[10].type = YNL_PT_SUBMSG;
	arr[10].name = "sfb";
	arr[11].type = YNL_PT_SUBMSG;
	arr[11].name = "sfq";
	return arr;
} ();

struct ynl_policy_nest tc_tca_stats_app_msg_nest = {
	.max_attr = 12,
	.table = tc_tca_stats_app_msg_policy.data(),
};

static std::array<ynl_policy_attr,TCA_STATS_MAX + 1> tc_tca_stats_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_STATS_MAX + 1> arr{};
	arr[TCA_STATS_BASIC].name = "basic";
	arr[TCA_STATS_BASIC].type = YNL_PT_BINARY;
	arr[TCA_STATS_RATE_EST].name = "rate-est";
	arr[TCA_STATS_RATE_EST].type = YNL_PT_BINARY;
	arr[TCA_STATS_QUEUE].name = "queue";
	arr[TCA_STATS_QUEUE].type = YNL_PT_BINARY;
	arr[TCA_STATS_APP].name = "app";
	arr[TCA_STATS_APP].type = YNL_PT_NEST;
	arr[TCA_STATS_APP].nest = &tc_tca_stats_app_msg_nest;
	arr[TCA_STATS_APP].is_submsg = 1;
	arr[TCA_STATS_RATE_EST64].name = "rate-est64";
	arr[TCA_STATS_RATE_EST64].type = YNL_PT_BINARY;
	arr[TCA_STATS_PAD].name = "pad";
	arr[TCA_STATS_PAD].type = YNL_PT_IGNORE;
	arr[TCA_STATS_BASIC_HW].name = "basic-hw";
	arr[TCA_STATS_BASIC_HW].type = YNL_PT_BINARY;
	arr[TCA_STATS_PKT64].name = "pkt64";
	arr[TCA_STATS_PKT64].type = YNL_PT_U64;
	return arr;
} ();

struct ynl_policy_nest tc_tca_stats_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_STATS_MAX),
	.table = tc_tca_stats_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_GRED_MAX + 1> tc_gred_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_GRED_MAX + 1> arr{};
	arr[TCA_GRED_PARMS].name = "parms";
	arr[TCA_GRED_PARMS].type = YNL_PT_BINARY;
	arr[TCA_GRED_STAB].name = "stab";
	arr[TCA_GRED_STAB].type = YNL_PT_BINARY;
	arr[TCA_GRED_DPS].name = "dps";
	arr[TCA_GRED_DPS].type = YNL_PT_BINARY;
	arr[TCA_GRED_MAX_P].name = "max-p";
	arr[TCA_GRED_MAX_P].type = YNL_PT_BINARY;
	arr[TCA_GRED_LIMIT].name = "limit";
	arr[TCA_GRED_LIMIT].type = YNL_PT_U32;
	arr[TCA_GRED_VQ_LIST].name = "vq-list";
	arr[TCA_GRED_VQ_LIST].type = YNL_PT_NEST;
	arr[TCA_GRED_VQ_LIST].nest = &tc_tca_gred_vq_list_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_gred_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_GRED_MAX),
	.table = tc_gred_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_TAPRIO_ATTR_MAX + 1> tc_taprio_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_TAPRIO_ATTR_MAX + 1> arr{};
	arr[TCA_TAPRIO_ATTR_PRIOMAP].name = "priomap";
	arr[TCA_TAPRIO_ATTR_PRIOMAP].type = YNL_PT_BINARY;
	arr[TCA_TAPRIO_ATTR_SCHED_ENTRY_LIST].name = "sched-entry-list";
	arr[TCA_TAPRIO_ATTR_SCHED_ENTRY_LIST].type = YNL_PT_NEST;
	arr[TCA_TAPRIO_ATTR_SCHED_ENTRY_LIST].nest = &tc_taprio_sched_entry_list_nest;
	arr[TCA_TAPRIO_ATTR_SCHED_BASE_TIME].name = "sched-base-time";
	arr[TCA_TAPRIO_ATTR_SCHED_BASE_TIME].type = YNL_PT_U64;
	arr[TCA_TAPRIO_ATTR_SCHED_SINGLE_ENTRY].name = "sched-single-entry";
	arr[TCA_TAPRIO_ATTR_SCHED_SINGLE_ENTRY].type = YNL_PT_NEST;
	arr[TCA_TAPRIO_ATTR_SCHED_SINGLE_ENTRY].nest = &tc_taprio_sched_entry_nest;
	arr[TCA_TAPRIO_ATTR_SCHED_CLOCKID].name = "sched-clockid";
	arr[TCA_TAPRIO_ATTR_SCHED_CLOCKID].type = YNL_PT_U32;
	arr[TCA_TAPRIO_ATTR_PAD].name = "pad";
	arr[TCA_TAPRIO_ATTR_PAD].type = YNL_PT_IGNORE;
	arr[TCA_TAPRIO_ATTR_ADMIN_SCHED].name = "admin-sched";
	arr[TCA_TAPRIO_ATTR_ADMIN_SCHED].type = YNL_PT_BINARY;
	arr[TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME].name = "sched-cycle-time";
	arr[TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME].type = YNL_PT_U64;
	arr[TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME_EXTENSION].name = "sched-cycle-time-extension";
	arr[TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME_EXTENSION].type = YNL_PT_U64;
	arr[TCA_TAPRIO_ATTR_FLAGS].name = "flags";
	arr[TCA_TAPRIO_ATTR_FLAGS].type = YNL_PT_U32;
	arr[TCA_TAPRIO_ATTR_TXTIME_DELAY].name = "txtime-delay";
	arr[TCA_TAPRIO_ATTR_TXTIME_DELAY].type = YNL_PT_U32;
	arr[TCA_TAPRIO_ATTR_TC_ENTRY].name = "tc-entry";
	arr[TCA_TAPRIO_ATTR_TC_ENTRY].type = YNL_PT_NEST;
	arr[TCA_TAPRIO_ATTR_TC_ENTRY].nest = &tc_taprio_tc_entry_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_taprio_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_TAPRIO_ATTR_MAX),
	.table = tc_taprio_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_ACT_MAX + 1> tc_act_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_ACT_MAX + 1> arr{};
	arr[TCA_ACT_KIND].name = "kind";
	arr[TCA_ACT_KIND].type  = YNL_PT_NUL_STR;
	arr[TCA_ACT_OPTIONS].name = "options";
	arr[TCA_ACT_OPTIONS].type = YNL_PT_NEST;
	arr[TCA_ACT_OPTIONS].nest = &tc_act_options_msg_nest;
	arr[TCA_ACT_OPTIONS].is_submsg = 1;
	arr[TCA_ACT_OPTIONS].selector_type = 1;
	arr[TCA_ACT_INDEX].name = "index";
	arr[TCA_ACT_INDEX].type = YNL_PT_U32;
	arr[TCA_ACT_STATS].name = "stats";
	arr[TCA_ACT_STATS].type = YNL_PT_NEST;
	arr[TCA_ACT_STATS].nest = &tc_tca_stats_attrs_nest;
	arr[TCA_ACT_PAD].name = "pad";
	arr[TCA_ACT_PAD].type = YNL_PT_IGNORE;
	arr[TCA_ACT_COOKIE].name = "cookie";
	arr[TCA_ACT_COOKIE].type = YNL_PT_BINARY;
	arr[TCA_ACT_FLAGS].name = "flags";
	arr[TCA_ACT_FLAGS].type = YNL_PT_BITFIELD32;
	arr[TCA_ACT_HW_STATS].name = "hw-stats";
	arr[TCA_ACT_HW_STATS].type = YNL_PT_BITFIELD32;
	arr[TCA_ACT_USED_HW_STATS].name = "used-hw-stats";
	arr[TCA_ACT_USED_HW_STATS].type = YNL_PT_BITFIELD32;
	arr[TCA_ACT_IN_HW_COUNT].name = "in-hw-count";
	arr[TCA_ACT_IN_HW_COUNT].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_act_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_ACT_MAX),
	.table = tc_act_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_BASIC_MAX + 1> tc_basic_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_BASIC_MAX + 1> arr{};
	arr[TCA_BASIC_CLASSID].name = "classid";
	arr[TCA_BASIC_CLASSID].type = YNL_PT_U32;
	arr[TCA_BASIC_EMATCHES].name = "ematches";
	arr[TCA_BASIC_EMATCHES].type = YNL_PT_NEST;
	arr[TCA_BASIC_EMATCHES].nest = &tc_ematch_attrs_nest;
	arr[TCA_BASIC_ACT].name = "act";
	arr[TCA_BASIC_ACT].type = YNL_PT_NEST;
	arr[TCA_BASIC_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_BASIC_POLICE].name = "police";
	arr[TCA_BASIC_POLICE].type = YNL_PT_NEST;
	arr[TCA_BASIC_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_BASIC_PCNT].name = "pcnt";
	arr[TCA_BASIC_PCNT].type = YNL_PT_BINARY;
	arr[TCA_BASIC_PAD].name = "pad";
	arr[TCA_BASIC_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_basic_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_BASIC_MAX),
	.table = tc_basic_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_BPF_MAX + 1> tc_bpf_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_BPF_MAX + 1> arr{};
	arr[TCA_BPF_ACT].name = "act";
	arr[TCA_BPF_ACT].type = YNL_PT_NEST;
	arr[TCA_BPF_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_BPF_POLICE].name = "police";
	arr[TCA_BPF_POLICE].type = YNL_PT_NEST;
	arr[TCA_BPF_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_BPF_CLASSID].name = "classid";
	arr[TCA_BPF_CLASSID].type = YNL_PT_U32;
	arr[TCA_BPF_OPS_LEN].name = "ops-len";
	arr[TCA_BPF_OPS_LEN].type = YNL_PT_U16;
	arr[TCA_BPF_OPS].name = "ops";
	arr[TCA_BPF_OPS].type = YNL_PT_BINARY;
	arr[TCA_BPF_FD].name = "fd";
	arr[TCA_BPF_FD].type = YNL_PT_U32;
	arr[TCA_BPF_NAME].name = "name";
	arr[TCA_BPF_NAME].type  = YNL_PT_NUL_STR;
	arr[TCA_BPF_FLAGS].name = "flags";
	arr[TCA_BPF_FLAGS].type = YNL_PT_U32;
	arr[TCA_BPF_FLAGS_GEN].name = "flags-gen";
	arr[TCA_BPF_FLAGS_GEN].type = YNL_PT_U32;
	arr[TCA_BPF_TAG].name = "tag";
	arr[TCA_BPF_TAG].type = YNL_PT_BINARY;
	arr[TCA_BPF_ID].name = "id";
	arr[TCA_BPF_ID].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_bpf_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_BPF_MAX),
	.table = tc_bpf_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_CGROUP_MAX + 1> tc_cgroup_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_CGROUP_MAX + 1> arr{};
	arr[TCA_CGROUP_ACT].name = "act";
	arr[TCA_CGROUP_ACT].type = YNL_PT_NEST;
	arr[TCA_CGROUP_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_CGROUP_POLICE].name = "police";
	arr[TCA_CGROUP_POLICE].type = YNL_PT_NEST;
	arr[TCA_CGROUP_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_CGROUP_EMATCHES].name = "ematches";
	arr[TCA_CGROUP_EMATCHES].type = YNL_PT_BINARY;
	return arr;
} ();

struct ynl_policy_nest tc_cgroup_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_CGROUP_MAX),
	.table = tc_cgroup_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FLOWER_MAX + 1> tc_flower_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FLOWER_MAX + 1> arr{};
	arr[TCA_FLOWER_CLASSID].name = "classid";
	arr[TCA_FLOWER_CLASSID].type = YNL_PT_U32;
	arr[TCA_FLOWER_INDEV].name = "indev";
	arr[TCA_FLOWER_INDEV].type  = YNL_PT_NUL_STR;
	arr[TCA_FLOWER_ACT].name = "act";
	arr[TCA_FLOWER_ACT].type = YNL_PT_NEST;
	arr[TCA_FLOWER_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_FLOWER_KEY_ETH_DST].name = "key-eth-dst";
	arr[TCA_FLOWER_KEY_ETH_DST].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ETH_DST_MASK].name = "key-eth-dst-mask";
	arr[TCA_FLOWER_KEY_ETH_DST_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ETH_SRC].name = "key-eth-src";
	arr[TCA_FLOWER_KEY_ETH_SRC].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ETH_SRC_MASK].name = "key-eth-src-mask";
	arr[TCA_FLOWER_KEY_ETH_SRC_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ETH_TYPE].name = "key-eth-type";
	arr[TCA_FLOWER_KEY_ETH_TYPE].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_IP_PROTO].name = "key-ip-proto";
	arr[TCA_FLOWER_KEY_IP_PROTO].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_IPV4_SRC].name = "key-ipv4-src";
	arr[TCA_FLOWER_KEY_IPV4_SRC].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_IPV4_SRC_MASK].name = "key-ipv4-src-mask";
	arr[TCA_FLOWER_KEY_IPV4_SRC_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_IPV4_DST].name = "key-ipv4-dst";
	arr[TCA_FLOWER_KEY_IPV4_DST].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_IPV4_DST_MASK].name = "key-ipv4-dst-mask";
	arr[TCA_FLOWER_KEY_IPV4_DST_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_IPV6_SRC].name = "key-ipv6-src";
	arr[TCA_FLOWER_KEY_IPV6_SRC].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_IPV6_SRC_MASK].name = "key-ipv6-src-mask";
	arr[TCA_FLOWER_KEY_IPV6_SRC_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_IPV6_DST].name = "key-ipv6-dst";
	arr[TCA_FLOWER_KEY_IPV6_DST].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_IPV6_DST_MASK].name = "key-ipv6-dst-mask";
	arr[TCA_FLOWER_KEY_IPV6_DST_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_TCP_SRC].name = "key-tcp-src";
	arr[TCA_FLOWER_KEY_TCP_SRC].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_TCP_DST].name = "key-tcp-dst";
	arr[TCA_FLOWER_KEY_TCP_DST].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_UDP_SRC].name = "key-udp-src";
	arr[TCA_FLOWER_KEY_UDP_SRC].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_UDP_DST].name = "key-udp-dst";
	arr[TCA_FLOWER_KEY_UDP_DST].type = YNL_PT_U16;
	arr[TCA_FLOWER_FLAGS].name = "flags";
	arr[TCA_FLOWER_FLAGS].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_VLAN_ID].name = "key-vlan-id";
	arr[TCA_FLOWER_KEY_VLAN_ID].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_VLAN_PRIO].name = "key-vlan-prio";
	arr[TCA_FLOWER_KEY_VLAN_PRIO].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_VLAN_ETH_TYPE].name = "key-vlan-eth-type";
	arr[TCA_FLOWER_KEY_VLAN_ETH_TYPE].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_KEY_ID].name = "key-enc-key-id";
	arr[TCA_FLOWER_KEY_ENC_KEY_ID].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_IPV4_SRC].name = "key-enc-ipv4-src";
	arr[TCA_FLOWER_KEY_ENC_IPV4_SRC].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_IPV4_SRC_MASK].name = "key-enc-ipv4-src-mask";
	arr[TCA_FLOWER_KEY_ENC_IPV4_SRC_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_IPV4_DST].name = "key-enc-ipv4-dst";
	arr[TCA_FLOWER_KEY_ENC_IPV4_DST].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_IPV4_DST_MASK].name = "key-enc-ipv4-dst-mask";
	arr[TCA_FLOWER_KEY_ENC_IPV4_DST_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_IPV6_SRC].name = "key-enc-ipv6-src";
	arr[TCA_FLOWER_KEY_ENC_IPV6_SRC].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ENC_IPV6_SRC_MASK].name = "key-enc-ipv6-src-mask";
	arr[TCA_FLOWER_KEY_ENC_IPV6_SRC_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ENC_IPV6_DST].name = "key-enc-ipv6-dst";
	arr[TCA_FLOWER_KEY_ENC_IPV6_DST].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ENC_IPV6_DST_MASK].name = "key-enc-ipv6-dst-mask";
	arr[TCA_FLOWER_KEY_ENC_IPV6_DST_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_TCP_SRC_MASK].name = "key-tcp-src-mask";
	arr[TCA_FLOWER_KEY_TCP_SRC_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_TCP_DST_MASK].name = "key-tcp-dst-mask";
	arr[TCA_FLOWER_KEY_TCP_DST_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_UDP_SRC_MASK].name = "key-udp-src-mask";
	arr[TCA_FLOWER_KEY_UDP_SRC_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_UDP_DST_MASK].name = "key-udp-dst-mask";
	arr[TCA_FLOWER_KEY_UDP_DST_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_SCTP_SRC_MASK].name = "key-sctp-src-mask";
	arr[TCA_FLOWER_KEY_SCTP_SRC_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_SCTP_DST_MASK].name = "key-sctp-dst-mask";
	arr[TCA_FLOWER_KEY_SCTP_DST_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_SCTP_SRC].name = "key-sctp-src";
	arr[TCA_FLOWER_KEY_SCTP_SRC].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_SCTP_DST].name = "key-sctp-dst";
	arr[TCA_FLOWER_KEY_SCTP_DST].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_UDP_SRC_PORT].name = "key-enc-udp-src-port";
	arr[TCA_FLOWER_KEY_ENC_UDP_SRC_PORT].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_UDP_SRC_PORT_MASK].name = "key-enc-udp-src-port-mask";
	arr[TCA_FLOWER_KEY_ENC_UDP_SRC_PORT_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_UDP_DST_PORT].name = "key-enc-udp-dst-port";
	arr[TCA_FLOWER_KEY_ENC_UDP_DST_PORT].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_UDP_DST_PORT_MASK].name = "key-enc-udp-dst-port-mask";
	arr[TCA_FLOWER_KEY_ENC_UDP_DST_PORT_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_FLAGS].name = "key-flags";
	arr[TCA_FLOWER_KEY_FLAGS].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_FLAGS_MASK].name = "key-flags-mask";
	arr[TCA_FLOWER_KEY_FLAGS_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ICMPV4_CODE].name = "key-icmpv4-code";
	arr[TCA_FLOWER_KEY_ICMPV4_CODE].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV4_CODE_MASK].name = "key-icmpv4-code-mask";
	arr[TCA_FLOWER_KEY_ICMPV4_CODE_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV4_TYPE].name = "key-icmpv4-type";
	arr[TCA_FLOWER_KEY_ICMPV4_TYPE].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV4_TYPE_MASK].name = "key-icmpv4-type-mask";
	arr[TCA_FLOWER_KEY_ICMPV4_TYPE_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV6_CODE].name = "key-icmpv6-code";
	arr[TCA_FLOWER_KEY_ICMPV6_CODE].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV6_CODE_MASK].name = "key-icmpv6-code-mask";
	arr[TCA_FLOWER_KEY_ICMPV6_CODE_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV6_TYPE].name = "key-icmpv6-type";
	arr[TCA_FLOWER_KEY_ICMPV6_TYPE].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ICMPV6_TYPE_MASK].name = "key-icmpv6-type-mask";
	arr[TCA_FLOWER_KEY_ICMPV6_TYPE_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ARP_SIP].name = "key-arp-sip";
	arr[TCA_FLOWER_KEY_ARP_SIP].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ARP_SIP_MASK].name = "key-arp-sip-mask";
	arr[TCA_FLOWER_KEY_ARP_SIP_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ARP_TIP].name = "key-arp-tip";
	arr[TCA_FLOWER_KEY_ARP_TIP].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ARP_TIP_MASK].name = "key-arp-tip-mask";
	arr[TCA_FLOWER_KEY_ARP_TIP_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ARP_OP].name = "key-arp-op";
	arr[TCA_FLOWER_KEY_ARP_OP].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ARP_OP_MASK].name = "key-arp-op-mask";
	arr[TCA_FLOWER_KEY_ARP_OP_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ARP_SHA].name = "key-arp-sha";
	arr[TCA_FLOWER_KEY_ARP_SHA].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ARP_SHA_MASK].name = "key-arp-sha-mask";
	arr[TCA_FLOWER_KEY_ARP_SHA_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ARP_THA].name = "key-arp-tha";
	arr[TCA_FLOWER_KEY_ARP_THA].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_ARP_THA_MASK].name = "key-arp-tha-mask";
	arr[TCA_FLOWER_KEY_ARP_THA_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_MPLS_TTL].name = "key-mpls-ttl";
	arr[TCA_FLOWER_KEY_MPLS_TTL].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_BOS].name = "key-mpls-bos";
	arr[TCA_FLOWER_KEY_MPLS_BOS].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_TC].name = "key-mpls-tc";
	arr[TCA_FLOWER_KEY_MPLS_TC].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_MPLS_LABEL].name = "key-mpls-label";
	arr[TCA_FLOWER_KEY_MPLS_LABEL].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_TCP_FLAGS].name = "key-tcp-flags";
	arr[TCA_FLOWER_KEY_TCP_FLAGS].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_TCP_FLAGS_MASK].name = "key-tcp-flags-mask";
	arr[TCA_FLOWER_KEY_TCP_FLAGS_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_IP_TOS].name = "key-ip-tos";
	arr[TCA_FLOWER_KEY_IP_TOS].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_IP_TOS_MASK].name = "key-ip-tos-mask";
	arr[TCA_FLOWER_KEY_IP_TOS_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_IP_TTL].name = "key-ip-ttl";
	arr[TCA_FLOWER_KEY_IP_TTL].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_IP_TTL_MASK].name = "key-ip-ttl-mask";
	arr[TCA_FLOWER_KEY_IP_TTL_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_CVLAN_ID].name = "key-cvlan-id";
	arr[TCA_FLOWER_KEY_CVLAN_ID].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_CVLAN_PRIO].name = "key-cvlan-prio";
	arr[TCA_FLOWER_KEY_CVLAN_PRIO].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_CVLAN_ETH_TYPE].name = "key-cvlan-eth-type";
	arr[TCA_FLOWER_KEY_CVLAN_ETH_TYPE].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_ENC_IP_TOS].name = "key-enc-ip-tos";
	arr[TCA_FLOWER_KEY_ENC_IP_TOS].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_IP_TOS_MASK].name = "key-enc-ip-tos-mask";
	arr[TCA_FLOWER_KEY_ENC_IP_TOS_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_IP_TTL].name = "key-enc-ip-ttl";
	arr[TCA_FLOWER_KEY_ENC_IP_TTL].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_IP_TTL_MASK].name = "key-enc-ip-ttl-mask";
	arr[TCA_FLOWER_KEY_ENC_IP_TTL_MASK].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_ENC_OPTS].name = "key-enc-opts";
	arr[TCA_FLOWER_KEY_ENC_OPTS].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_ENC_OPTS].nest = &tc_flower_key_enc_opts_attrs_nest;
	arr[TCA_FLOWER_KEY_ENC_OPTS_MASK].name = "key-enc-opts-mask";
	arr[TCA_FLOWER_KEY_ENC_OPTS_MASK].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_ENC_OPTS_MASK].nest = &tc_flower_key_enc_opts_attrs_nest;
	arr[TCA_FLOWER_IN_HW_COUNT].name = "in-hw-count";
	arr[TCA_FLOWER_IN_HW_COUNT].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_PORT_SRC_MIN].name = "key-port-src-min";
	arr[TCA_FLOWER_KEY_PORT_SRC_MIN].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_PORT_SRC_MAX].name = "key-port-src-max";
	arr[TCA_FLOWER_KEY_PORT_SRC_MAX].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_PORT_DST_MIN].name = "key-port-dst-min";
	arr[TCA_FLOWER_KEY_PORT_DST_MIN].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_PORT_DST_MAX].name = "key-port-dst-max";
	arr[TCA_FLOWER_KEY_PORT_DST_MAX].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_CT_STATE].name = "key-ct-state";
	arr[TCA_FLOWER_KEY_CT_STATE].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_CT_STATE_MASK].name = "key-ct-state-mask";
	arr[TCA_FLOWER_KEY_CT_STATE_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_CT_ZONE].name = "key-ct-zone";
	arr[TCA_FLOWER_KEY_CT_ZONE].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_CT_ZONE_MASK].name = "key-ct-zone-mask";
	arr[TCA_FLOWER_KEY_CT_ZONE_MASK].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_CT_MARK].name = "key-ct-mark";
	arr[TCA_FLOWER_KEY_CT_MARK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_CT_MARK_MASK].name = "key-ct-mark-mask";
	arr[TCA_FLOWER_KEY_CT_MARK_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_CT_LABELS].name = "key-ct-labels";
	arr[TCA_FLOWER_KEY_CT_LABELS].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_CT_LABELS_MASK].name = "key-ct-labels-mask";
	arr[TCA_FLOWER_KEY_CT_LABELS_MASK].type = YNL_PT_BINARY;
	arr[TCA_FLOWER_KEY_MPLS_OPTS].name = "key-mpls-opts";
	arr[TCA_FLOWER_KEY_MPLS_OPTS].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_MPLS_OPTS].nest = &tc_flower_key_mpls_opt_attrs_nest;
	arr[TCA_FLOWER_KEY_HASH].name = "key-hash";
	arr[TCA_FLOWER_KEY_HASH].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_HASH_MASK].name = "key-hash-mask";
	arr[TCA_FLOWER_KEY_HASH_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_NUM_OF_VLANS].name = "key-num-of-vlans";
	arr[TCA_FLOWER_KEY_NUM_OF_VLANS].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_PPPOE_SID].name = "key-pppoe-sid";
	arr[TCA_FLOWER_KEY_PPPOE_SID].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_PPP_PROTO].name = "key-ppp-proto";
	arr[TCA_FLOWER_KEY_PPP_PROTO].type = YNL_PT_U16;
	arr[TCA_FLOWER_KEY_L2TPV3_SID].name = "key-l2tpv3-sid";
	arr[TCA_FLOWER_KEY_L2TPV3_SID].type = YNL_PT_U32;
	arr[TCA_FLOWER_L2_MISS].name = "l2-miss";
	arr[TCA_FLOWER_L2_MISS].type = YNL_PT_U8;
	arr[TCA_FLOWER_KEY_CFM].name = "key-cfm";
	arr[TCA_FLOWER_KEY_CFM].type = YNL_PT_NEST;
	arr[TCA_FLOWER_KEY_CFM].nest = &tc_flower_key_cfm_attrs_nest;
	arr[TCA_FLOWER_KEY_SPI].name = "key-spi";
	arr[TCA_FLOWER_KEY_SPI].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_SPI_MASK].name = "key-spi-mask";
	arr[TCA_FLOWER_KEY_SPI_MASK].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_FLAGS].name = "key-enc-flags";
	arr[TCA_FLOWER_KEY_ENC_FLAGS].type = YNL_PT_U32;
	arr[TCA_FLOWER_KEY_ENC_FLAGS_MASK].name = "key-enc-flags-mask";
	arr[TCA_FLOWER_KEY_ENC_FLAGS_MASK].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_flower_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FLOWER_MAX),
	.table = tc_flower_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_FW_MAX + 1> tc_fw_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_FW_MAX + 1> arr{};
	arr[TCA_FW_CLASSID].name = "classid";
	arr[TCA_FW_CLASSID].type = YNL_PT_U32;
	arr[TCA_FW_POLICE].name = "police";
	arr[TCA_FW_POLICE].type = YNL_PT_NEST;
	arr[TCA_FW_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_FW_INDEV].name = "indev";
	arr[TCA_FW_INDEV].type  = YNL_PT_NUL_STR;
	arr[TCA_FW_ACT].name = "act";
	arr[TCA_FW_ACT].type = YNL_PT_NEST;
	arr[TCA_FW_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_FW_MASK].name = "mask";
	arr[TCA_FW_MASK].type = YNL_PT_U32;
	return arr;
} ();

struct ynl_policy_nest tc_fw_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_FW_MAX),
	.table = tc_fw_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_MATCHALL_MAX + 1> tc_matchall_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_MATCHALL_MAX + 1> arr{};
	arr[TCA_MATCHALL_CLASSID].name = "classid";
	arr[TCA_MATCHALL_CLASSID].type = YNL_PT_U32;
	arr[TCA_MATCHALL_ACT].name = "act";
	arr[TCA_MATCHALL_ACT].type = YNL_PT_NEST;
	arr[TCA_MATCHALL_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_MATCHALL_FLAGS].name = "flags";
	arr[TCA_MATCHALL_FLAGS].type = YNL_PT_U32;
	arr[TCA_MATCHALL_PCNT].name = "pcnt";
	arr[TCA_MATCHALL_PCNT].type = YNL_PT_BINARY;
	arr[TCA_MATCHALL_PAD].name = "pad";
	arr[TCA_MATCHALL_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_matchall_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_MATCHALL_MAX),
	.table = tc_matchall_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_ROUTE4_MAX + 1> tc_route_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_ROUTE4_MAX + 1> arr{};
	arr[TCA_ROUTE4_CLASSID].name = "classid";
	arr[TCA_ROUTE4_CLASSID].type = YNL_PT_U32;
	arr[TCA_ROUTE4_TO].name = "to";
	arr[TCA_ROUTE4_TO].type = YNL_PT_U32;
	arr[TCA_ROUTE4_FROM].name = "from";
	arr[TCA_ROUTE4_FROM].type = YNL_PT_U32;
	arr[TCA_ROUTE4_IIF].name = "iif";
	arr[TCA_ROUTE4_IIF].type = YNL_PT_U32;
	arr[TCA_ROUTE4_POLICE].name = "police";
	arr[TCA_ROUTE4_POLICE].type = YNL_PT_NEST;
	arr[TCA_ROUTE4_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_ROUTE4_ACT].name = "act";
	arr[TCA_ROUTE4_ACT].type = YNL_PT_NEST;
	arr[TCA_ROUTE4_ACT].nest = &tc_act_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_route_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_ROUTE4_MAX),
	.table = tc_route_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_U32_MAX + 1> tc_u32_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_U32_MAX + 1> arr{};
	arr[TCA_U32_CLASSID].name = "classid";
	arr[TCA_U32_CLASSID].type = YNL_PT_U32;
	arr[TCA_U32_HASH].name = "hash";
	arr[TCA_U32_HASH].type = YNL_PT_U32;
	arr[TCA_U32_LINK].name = "link";
	arr[TCA_U32_LINK].type = YNL_PT_U32;
	arr[TCA_U32_DIVISOR].name = "divisor";
	arr[TCA_U32_DIVISOR].type = YNL_PT_U32;
	arr[TCA_U32_SEL].name = "sel";
	arr[TCA_U32_SEL].type = YNL_PT_BINARY;
	arr[TCA_U32_POLICE].name = "police";
	arr[TCA_U32_POLICE].type = YNL_PT_NEST;
	arr[TCA_U32_POLICE].nest = &tc_police_attrs_nest;
	arr[TCA_U32_ACT].name = "act";
	arr[TCA_U32_ACT].type = YNL_PT_NEST;
	arr[TCA_U32_ACT].nest = &tc_act_attrs_nest;
	arr[TCA_U32_INDEV].name = "indev";
	arr[TCA_U32_INDEV].type  = YNL_PT_NUL_STR;
	arr[TCA_U32_PCNT].name = "pcnt";
	arr[TCA_U32_PCNT].type = YNL_PT_BINARY;
	arr[TCA_U32_MARK].name = "mark";
	arr[TCA_U32_MARK].type = YNL_PT_BINARY;
	arr[TCA_U32_FLAGS].name = "flags";
	arr[TCA_U32_FLAGS].type = YNL_PT_U32;
	arr[TCA_U32_PAD].name = "pad";
	arr[TCA_U32_PAD].type = YNL_PT_IGNORE;
	return arr;
} ();

struct ynl_policy_nest tc_u32_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_U32_MAX),
	.table = tc_u32_attrs_policy.data(),
};

static std::array<ynl_policy_attr,TCA_ETS_MAX + 1> tc_ets_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_ETS_MAX + 1> arr{};
	arr[TCA_ETS_NBANDS].name = "nbands";
	arr[TCA_ETS_NBANDS].type = YNL_PT_U8;
	arr[TCA_ETS_NSTRICT].name = "nstrict";
	arr[TCA_ETS_NSTRICT].type = YNL_PT_U8;
	arr[TCA_ETS_QUANTA].name = "quanta";
	arr[TCA_ETS_QUANTA].type = YNL_PT_NEST;
	arr[TCA_ETS_QUANTA].nest = &tc_ets_attrs_nest;
	arr[TCA_ETS_QUANTA_BAND].name = "quanta-band";
	arr[TCA_ETS_QUANTA_BAND].type = YNL_PT_U32;
	arr[TCA_ETS_PRIOMAP].name = "priomap";
	arr[TCA_ETS_PRIOMAP].type = YNL_PT_NEST;
	arr[TCA_ETS_PRIOMAP].nest = &tc_ets_attrs_nest;
	arr[TCA_ETS_PRIOMAP_BAND].name = "priomap-band";
	arr[TCA_ETS_PRIOMAP_BAND].type = YNL_PT_U8;
	return arr;
} ();

struct ynl_policy_nest tc_ets_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_ETS_MAX),
	.table = tc_ets_attrs_policy.data(),
};

static std::array<ynl_policy_attr,43> tc_options_msg_policy = []() {
	std::array<ynl_policy_attr,43> arr{};
	arr[0].type = YNL_PT_SUBMSG;
	arr[0].name = "basic";
	arr[0].nest = &tc_basic_attrs_nest;
	arr[1].type = YNL_PT_SUBMSG;
	arr[1].name = "bpf";
	arr[1].nest = &tc_bpf_attrs_nest;
	arr[2].type = YNL_PT_SUBMSG;
	arr[2].name = "bfifo";
	arr[3].type = YNL_PT_SUBMSG;
	arr[3].name = "cake";
	arr[3].nest = &tc_cake_attrs_nest;
	arr[4].type = YNL_PT_SUBMSG;
	arr[4].name = "cbs";
	arr[4].nest = &tc_cbs_attrs_nest;
	arr[5].type = YNL_PT_SUBMSG;
	arr[5].name = "cgroup";
	arr[5].nest = &tc_cgroup_attrs_nest;
	arr[6].type = YNL_PT_SUBMSG;
	arr[6].name = "choke";
	arr[6].nest = &tc_choke_attrs_nest;
	arr[7].type = YNL_PT_SUBMSG;
	arr[7].name = "clsact";
	arr[8].type = YNL_PT_SUBMSG;
	arr[8].name = "codel";
	arr[8].nest = &tc_codel_attrs_nest;
	arr[9].type = YNL_PT_SUBMSG;
	arr[9].name = "drr";
	arr[9].nest = &tc_drr_attrs_nest;
	arr[10].type = YNL_PT_SUBMSG;
	arr[10].name = "dualpi2";
	arr[10].nest = &tc_dualpi2_attrs_nest;
	arr[11].type = YNL_PT_SUBMSG;
	arr[11].name = "etf";
	arr[11].nest = &tc_etf_attrs_nest;
	arr[12].type = YNL_PT_SUBMSG;
	arr[12].name = "ets";
	arr[12].nest = &tc_ets_attrs_nest;
	arr[13].type = YNL_PT_SUBMSG;
	arr[13].name = "flow";
	arr[13].nest = &tc_flow_attrs_nest;
	arr[14].type = YNL_PT_SUBMSG;
	arr[14].name = "flower";
	arr[14].nest = &tc_flower_attrs_nest;
	arr[15].type = YNL_PT_SUBMSG;
	arr[15].name = "fq";
	arr[15].nest = &tc_fq_attrs_nest;
	arr[16].type = YNL_PT_SUBMSG;
	arr[16].name = "fq_codel";
	arr[16].nest = &tc_fq_codel_attrs_nest;
	arr[17].type = YNL_PT_SUBMSG;
	arr[17].name = "fq_pie";
	arr[17].nest = &tc_fq_pie_attrs_nest;
	arr[18].type = YNL_PT_SUBMSG;
	arr[18].name = "fw";
	arr[18].nest = &tc_fw_attrs_nest;
	arr[19].type = YNL_PT_SUBMSG;
	arr[19].name = "gred";
	arr[19].nest = &tc_gred_attrs_nest;
	arr[20].type = YNL_PT_SUBMSG;
	arr[20].name = "hfsc";
	arr[21].type = YNL_PT_SUBMSG;
	arr[21].name = "hhf";
	arr[21].nest = &tc_hhf_attrs_nest;
	arr[22].type = YNL_PT_SUBMSG;
	arr[22].name = "htb";
	arr[22].nest = &tc_htb_attrs_nest;
	arr[23].type = YNL_PT_SUBMSG;
	arr[23].name = "ingress";
	arr[24].type = YNL_PT_SUBMSG;
	arr[24].name = "matchall";
	arr[24].nest = &tc_matchall_attrs_nest;
	arr[25].type = YNL_PT_SUBMSG;
	arr[25].name = "mq";
	arr[26].type = YNL_PT_SUBMSG;
	arr[26].name = "mqprio";
	arr[27].type = YNL_PT_SUBMSG;
	arr[27].name = "multiq";
	arr[28].type = YNL_PT_SUBMSG;
	arr[28].name = "netem";
	arr[28].nest = &tc_netem_attrs_nest;
	arr[29].type = YNL_PT_SUBMSG;
	arr[29].name = "pfifo";
	arr[30].type = YNL_PT_SUBMSG;
	arr[30].name = "pfifo_fast";
	arr[31].type = YNL_PT_SUBMSG;
	arr[31].name = "pfifo_head_drop";
	arr[32].type = YNL_PT_SUBMSG;
	arr[32].name = "pie";
	arr[32].nest = &tc_pie_attrs_nest;
	arr[33].type = YNL_PT_SUBMSG;
	arr[33].name = "plug";
	arr[34].type = YNL_PT_SUBMSG;
	arr[34].name = "prio";
	arr[35].type = YNL_PT_SUBMSG;
	arr[35].name = "qfq";
	arr[35].nest = &tc_qfq_attrs_nest;
	arr[36].type = YNL_PT_SUBMSG;
	arr[36].name = "red";
	arr[36].nest = &tc_red_attrs_nest;
	arr[37].type = YNL_PT_SUBMSG;
	arr[37].name = "route";
	arr[37].nest = &tc_route_attrs_nest;
	arr[38].type = YNL_PT_SUBMSG;
	arr[38].name = "sfb";
	arr[39].type = YNL_PT_SUBMSG;
	arr[39].name = "sfq";
	arr[40].type = YNL_PT_SUBMSG;
	arr[40].name = "taprio";
	arr[40].nest = &tc_taprio_attrs_nest;
	arr[41].type = YNL_PT_SUBMSG;
	arr[41].name = "tbf";
	arr[41].nest = &tc_tbf_attrs_nest;
	arr[42].type = YNL_PT_SUBMSG;
	arr[42].name = "u32";
	arr[42].nest = &tc_u32_attrs_nest;
	return arr;
} ();

struct ynl_policy_nest tc_options_msg_nest = {
	.max_attr = 43,
	.table = tc_options_msg_policy.data(),
};

static std::array<ynl_policy_attr,TCA_MAX + 1> tc_attrs_policy = []() {
	std::array<ynl_policy_attr,TCA_MAX + 1> arr{};
	arr[TCA_KIND].name = "kind";
	arr[TCA_KIND].type  = YNL_PT_NUL_STR;
	arr[TCA_OPTIONS].name = "options";
	arr[TCA_OPTIONS].type = YNL_PT_NEST;
	arr[TCA_OPTIONS].nest = &tc_options_msg_nest;
	arr[TCA_OPTIONS].is_submsg = 1;
	arr[TCA_OPTIONS].selector_type = 1;
	arr[TCA_STATS].name = "stats";
	arr[TCA_STATS].type = YNL_PT_BINARY;
	arr[TCA_XSTATS].name = "xstats";
	arr[TCA_XSTATS].type = YNL_PT_NEST;
	arr[TCA_XSTATS].nest = &tc_tca_stats_app_msg_nest;
	arr[TCA_XSTATS].is_submsg = 1;
	arr[TCA_XSTATS].selector_type = 1;
	arr[TCA_RATE].name = "rate";
	arr[TCA_RATE].type = YNL_PT_BINARY;
	arr[TCA_FCNT].name = "fcnt";
	arr[TCA_FCNT].type = YNL_PT_U32;
	arr[TCA_STATS2].name = "stats2";
	arr[TCA_STATS2].type = YNL_PT_NEST;
	arr[TCA_STATS2].nest = &tc_tca_stats_attrs_nest;
	arr[TCA_STAB].name = "stab";
	arr[TCA_STAB].type = YNL_PT_NEST;
	arr[TCA_STAB].nest = &tc_tca_stab_attrs_nest;
	arr[TCA_PAD].name = "pad";
	arr[TCA_PAD].type = YNL_PT_IGNORE;
	arr[TCA_DUMP_INVISIBLE].name = "dump-invisible";
	arr[TCA_DUMP_INVISIBLE].type = YNL_PT_FLAG;
	arr[TCA_CHAIN].name = "chain";
	arr[TCA_CHAIN].type = YNL_PT_U32;
	arr[TCA_HW_OFFLOAD].name = "hw-offload";
	arr[TCA_HW_OFFLOAD].type = YNL_PT_U8;
	arr[TCA_INGRESS_BLOCK].name = "ingress-block";
	arr[TCA_INGRESS_BLOCK].type = YNL_PT_U32;
	arr[TCA_EGRESS_BLOCK].name = "egress-block";
	arr[TCA_EGRESS_BLOCK].type = YNL_PT_U32;
	arr[TCA_DUMP_FLAGS].name = "dump-flags";
	arr[TCA_DUMP_FLAGS].type = YNL_PT_BITFIELD32;
	arr[TCA_EXT_WARN_MSG].name = "ext-warn-msg";
	arr[TCA_EXT_WARN_MSG].type  = YNL_PT_NUL_STR;
	return arr;
} ();

struct ynl_policy_nest tc_attrs_nest = {
	.max_attr = static_cast<unsigned int>(TCA_MAX),
	.table = tc_attrs_policy.data(),
};

/* Common nested types */
int tc_tca_stab_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_cake_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		      const tc_cake_attrs&  obj);
int tc_cake_attrs_parse(struct ynl_parse_arg *yarg,
			const struct nlattr *nested);
int tc_cbs_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_cbs_attrs&  obj);
int tc_cbs_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_choke_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_choke_attrs&  obj);
int tc_choke_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested);
int tc_codel_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_codel_attrs&  obj);
int tc_codel_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested);
int tc_drr_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_drr_attrs&  obj);
int tc_drr_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_dualpi2_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_dualpi2_attrs&  obj);
int tc_dualpi2_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested);
int tc_etf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_etf_attrs&  obj);
int tc_etf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_fq_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		    const tc_fq_attrs&  obj);
int tc_fq_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_fq_codel_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_fq_codel_attrs&  obj);
int tc_fq_codel_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_fq_pie_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_fq_pie_attrs&  obj);
int tc_fq_pie_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_hhf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_hhf_attrs&  obj);
int tc_hhf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_htb_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_htb_attrs&  obj);
int tc_htb_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_pie_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_pie_attrs&  obj);
int tc_pie_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_qfq_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_qfq_attrs&  obj);
int tc_qfq_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_red_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_red_attrs&  obj);
int tc_red_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_tbf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_tbf_attrs&  obj);
int tc_tbf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_ematch_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_ematch_attrs&  obj);
int tc_ematch_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_police_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_police_attrs&  obj);
int tc_police_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_flower_key_mpls_opt_attrs_put(struct nlmsghdr *nlh,
				     unsigned int attr_type,
				     const tc_flower_key_mpls_opt_attrs&  obj);
int tc_flower_key_mpls_opt_attrs_parse(struct ynl_parse_arg *yarg,
				       const struct nlattr *nested);
int tc_flower_key_cfm_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				const tc_flower_key_cfm_attrs&  obj);
int tc_flower_key_cfm_attrs_parse(struct ynl_parse_arg *yarg,
				  const struct nlattr *nested);
int tc_netem_loss_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_netem_loss_attrs&  obj);
int tc_netem_loss_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_taprio_sched_entry_put(struct nlmsghdr *nlh, unsigned int attr_type,
			      const tc_taprio_sched_entry&  obj);
int tc_taprio_sched_entry_parse(struct ynl_parse_arg *yarg,
				const struct nlattr *nested);
int tc_taprio_tc_entry_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				 const tc_taprio_tc_entry_attrs&  obj);
int tc_taprio_tc_entry_attrs_parse(struct ynl_parse_arg *yarg,
				   const struct nlattr *nested);
int tc_cake_tin_stats_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				const tc_cake_tin_stats_attrs&  obj);
int tc_cake_tin_stats_attrs_parse(struct ynl_parse_arg *yarg,
				  const struct nlattr *nested, __u32 idx);
int tc_flower_key_enc_opt_geneve_attrs_put(struct nlmsghdr *nlh,
					   unsigned int attr_type,
					   const tc_flower_key_enc_opt_geneve_attrs&  obj);
int tc_flower_key_enc_opt_geneve_attrs_parse(struct ynl_parse_arg *yarg,
					     const struct nlattr *nested);
int tc_flower_key_enc_opt_vxlan_attrs_put(struct nlmsghdr *nlh,
					  unsigned int attr_type,
					  const tc_flower_key_enc_opt_vxlan_attrs&  obj);
int tc_flower_key_enc_opt_vxlan_attrs_parse(struct ynl_parse_arg *yarg,
					    const struct nlattr *nested);
int tc_flower_key_enc_opt_erspan_attrs_put(struct nlmsghdr *nlh,
					   unsigned int attr_type,
					   const tc_flower_key_enc_opt_erspan_attrs&  obj);
int tc_flower_key_enc_opt_erspan_attrs_parse(struct ynl_parse_arg *yarg,
					     const struct nlattr *nested);
int tc_flower_key_enc_opt_gtp_attrs_put(struct nlmsghdr *nlh,
					unsigned int attr_type,
					const tc_flower_key_enc_opt_gtp_attrs&  obj);
int tc_flower_key_enc_opt_gtp_attrs_parse(struct ynl_parse_arg *yarg,
					  const struct nlattr *nested);
int tc_tca_gred_vq_entry_attrs_put(struct nlmsghdr *nlh,
				   unsigned int attr_type,
				   const tc_tca_gred_vq_entry_attrs&  obj);
int tc_tca_gred_vq_entry_attrs_parse(struct ynl_parse_arg *yarg,
				     const struct nlattr *nested);
int tc_act_bpf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_act_bpf_attrs&  obj);
int tc_act_bpf_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested);
int tc_act_connmark_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			      const tc_act_connmark_attrs&  obj);
int tc_act_connmark_attrs_parse(struct ynl_parse_arg *yarg,
				const struct nlattr *nested);
int tc_act_csum_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_csum_attrs&  obj);
int tc_act_csum_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_act_ct_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_act_ct_attrs&  obj);
int tc_act_ct_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_act_ctinfo_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_ctinfo_attrs&  obj);
int tc_act_ctinfo_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_act_gact_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_gact_attrs&  obj);
int tc_act_gact_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_act_gate_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_gate_attrs&  obj);
int tc_act_gate_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_act_ife_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_act_ife_attrs&  obj);
int tc_act_ife_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested);
int tc_act_mirred_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_mirred_attrs&  obj);
int tc_act_mirred_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_act_mpls_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_mpls_attrs&  obj);
int tc_act_mpls_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_act_nat_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_act_nat_attrs&  obj);
int tc_act_nat_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested);
int tc_act_pedit_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			   const tc_act_pedit_attrs&  obj);
int tc_act_pedit_attrs_parse(struct ynl_parse_arg *yarg,
			     const struct nlattr *nested);
int tc_act_sample_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_sample_attrs&  obj);
int tc_act_sample_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_act_simple_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_simple_attrs&  obj);
int tc_act_simple_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_act_skbedit_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			     const tc_act_skbedit_attrs&  obj);
int tc_act_skbedit_attrs_parse(struct ynl_parse_arg *yarg,
			       const struct nlattr *nested);
int tc_act_skbmod_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_skbmod_attrs&  obj);
int tc_act_skbmod_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_act_tunnel_key_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				const tc_act_tunnel_key_attrs&  obj);
int tc_act_tunnel_key_attrs_parse(struct ynl_parse_arg *yarg,
				  const struct nlattr *nested);
int tc_act_vlan_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_vlan_attrs&  obj);
int tc_act_vlan_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_flow_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		      const tc_flow_attrs&  obj);
int tc_flow_attrs_parse(struct ynl_parse_arg *yarg,
			const struct nlattr *nested);
int tc_netem_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_netem_attrs&  obj);
int tc_netem_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested);
int tc_cake_stats_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_cake_stats_attrs&  obj);
int tc_cake_stats_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested);
int tc_flower_key_enc_opts_attrs_put(struct nlmsghdr *nlh,
				     unsigned int attr_type,
				     const tc_flower_key_enc_opts_attrs&  obj);
int tc_flower_key_enc_opts_attrs_parse(struct ynl_parse_arg *yarg,
				       const struct nlattr *nested);
int tc_tca_gred_vq_list_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				  const tc_tca_gred_vq_list_attrs&  obj);
int tc_tca_gred_vq_list_attrs_parse(struct ynl_parse_arg *yarg,
				    const struct nlattr *nested);
int tc_taprio_sched_entry_list_put(struct nlmsghdr *nlh,
				   unsigned int attr_type,
				   const tc_taprio_sched_entry_list&  obj);
int tc_taprio_sched_entry_list_parse(struct ynl_parse_arg *yarg,
				     const struct nlattr *nested);
int tc_act_options_msg_put(struct nlmsghdr *nlh, unsigned int attr_type,
			   const tc_act_options_msg&  obj);
int tc_act_options_msg_parse(struct ynl_parse_arg *yarg,
			     const std::string& sel,
			     const struct nlattr *nested);
int tc_tca_stats_app_msg_put(struct nlmsghdr *nlh, unsigned int attr_type,
			     const tc_tca_stats_app_msg&  obj);
int tc_tca_stats_app_msg_parse(struct ynl_parse_arg *yarg,
			       const std::string& sel,
			       const struct nlattr *nested);
int tc_tca_stats_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			   const tc_tca_stats_attrs&  obj);
int tc_tca_stats_attrs_parse(struct ynl_parse_arg *yarg,
			     const struct nlattr *nested,
			     const std::string& _sel_kind);
int tc_gred_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		      const tc_gred_attrs&  obj);
int tc_gred_attrs_parse(struct ynl_parse_arg *yarg,
			const struct nlattr *nested);
int tc_taprio_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_taprio_attrs&  obj);
int tc_taprio_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_act_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_act_attrs&  obj);
int tc_act_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested,
		       __u32 idx);
int tc_basic_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_basic_attrs&  obj);
int tc_basic_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested);
int tc_bpf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_bpf_attrs&  obj);
int tc_bpf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_cgroup_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_cgroup_attrs&  obj);
int tc_cgroup_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_flower_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_flower_attrs&  obj);
int tc_flower_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested);
int tc_fw_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		    const tc_fw_attrs&  obj);
int tc_fw_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_matchall_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_matchall_attrs&  obj);
int tc_matchall_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested);
int tc_route_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_route_attrs&  obj);
int tc_route_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested);
int tc_u32_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_u32_attrs&  obj);
int tc_u32_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_ets_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_ets_attrs&  obj);
int tc_ets_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested);
int tc_options_msg_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_options_msg&  obj);
int tc_options_msg_parse(struct ynl_parse_arg *yarg, const std::string& sel,
			 const struct nlattr *nested);

int tc_tca_stab_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_tca_stab_attrs *dst = (tc_tca_stab_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_STAB_BASE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->base.assign(data, data + len);
		} else if (type == TCA_STAB_DATA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->data.assign(data, data + len);
		}
	}

	return 0;
}

int tc_cake_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		      const tc_cake_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.base_rate64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_BASE_RATE64, obj.base_rate64.value());
	if (obj.diffserv_mode.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_DIFFSERV_MODE, obj.diffserv_mode.value());
	if (obj.atm.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_ATM, obj.atm.value());
	if (obj.flow_mode.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_FLOW_MODE, obj.flow_mode.value());
	if (obj.overhead.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_OVERHEAD, obj.overhead.value());
	if (obj.rtt.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_RTT, obj.rtt.value());
	if (obj.target.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TARGET, obj.target.value());
	if (obj.autorate.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_AUTORATE, obj.autorate.value());
	if (obj.memory.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_MEMORY, obj.memory.value());
	if (obj.nat.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_NAT, obj.nat.value());
	if (obj.raw.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_RAW, obj.raw.value());
	if (obj.wash.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_WASH, obj.wash.value());
	if (obj.mpu.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_MPU, obj.mpu.value());
	if (obj.ingress.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_INGRESS, obj.ingress.value());
	if (obj.ack_filter.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_ACK_FILTER, obj.ack_filter.value());
	if (obj.split_gso.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_SPLIT_GSO, obj.split_gso.value());
	if (obj.fwmark.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_FWMARK, obj.fwmark.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_cake_attrs_parse(struct ynl_parse_arg *yarg,
			const struct nlattr *nested)
{
	tc_cake_attrs *dst = (tc_cake_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CAKE_BASE_RATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->base_rate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_DIFFSERV_MODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->diffserv_mode = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_ATM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->atm = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_FLOW_MODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flow_mode = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_OVERHEAD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->overhead = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_RTT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rtt = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TARGET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_AUTORATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->autorate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_MEMORY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->memory = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_NAT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nat = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_RAW) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->raw = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_WASH) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->wash = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_MPU) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mpu = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_INGRESS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ingress = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_ACK_FILTER) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ack_filter = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_SPLIT_GSO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->split_gso = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_FWMARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fwmark = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_cbs_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_cbs_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_CBS_PARMS, obj.parms.data(), obj.parms.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_cbs_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_cbs_attrs *dst = (tc_cbs_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CBS_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		}
	}

	return 0;
}

int tc_choke_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_choke_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_CHOKE_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.stab.size() > 0)
		ynl_attr_put(nlh, TCA_CHOKE_STAB, obj.stab.data(), obj.stab.size());
	if (obj.max_p.has_value())
		ynl_attr_put_u32(nlh, TCA_CHOKE_MAX_P, obj.max_p.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_choke_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested)
{
	tc_choke_attrs *dst = (tc_choke_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CHOKE_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_CHOKE_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stab.assign(data, data + len);
		} else if (type == TCA_CHOKE_MAX_P) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->max_p = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_codel_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_codel_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.target.has_value())
		ynl_attr_put_u32(nlh, TCA_CODEL_TARGET, obj.target.value());
	if (obj.limit.has_value())
		ynl_attr_put_u32(nlh, TCA_CODEL_LIMIT, obj.limit.value());
	if (obj.interval.has_value())
		ynl_attr_put_u32(nlh, TCA_CODEL_INTERVAL, obj.interval.value());
	if (obj.ecn.has_value())
		ynl_attr_put_u32(nlh, TCA_CODEL_ECN, obj.ecn.value());
	if (obj.ce_threshold.has_value())
		ynl_attr_put_u32(nlh, TCA_CODEL_CE_THRESHOLD, obj.ce_threshold.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_codel_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested)
{
	tc_codel_attrs *dst = (tc_codel_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CODEL_TARGET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CODEL_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CODEL_INTERVAL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->interval = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CODEL_ECN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CODEL_CE_THRESHOLD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ce_threshold = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_drr_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_drr_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_DRR_QUANTUM, obj.quantum.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_drr_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_drr_attrs *dst = (tc_drr_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_DRR_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->quantum = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_dualpi2_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_dualpi2_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.limit.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_LIMIT, obj.limit.value());
	if (obj.memory_limit.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_MEMORY_LIMIT, obj.memory_limit.value());
	if (obj.target.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_TARGET, obj.target.value());
	if (obj.tupdate.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_TUPDATE, obj.tupdate.value());
	if (obj.alpha.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_ALPHA, obj.alpha.value());
	if (obj.beta.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_BETA, obj.beta.value());
	if (obj.step_thresh_pkts.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_STEP_THRESH_PKTS, obj.step_thresh_pkts.value());
	if (obj.step_thresh_us.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_STEP_THRESH_US, obj.step_thresh_us.value());
	if (obj.min_qlen_step.has_value())
		ynl_attr_put_u32(nlh, TCA_DUALPI2_MIN_QLEN_STEP, obj.min_qlen_step.value());
	if (obj.coupling.has_value())
		ynl_attr_put_u8(nlh, TCA_DUALPI2_COUPLING, obj.coupling.value());
	if (obj.drop_overload.has_value())
		ynl_attr_put_u8(nlh, TCA_DUALPI2_DROP_OVERLOAD, obj.drop_overload.value());
	if (obj.drop_early.has_value())
		ynl_attr_put_u8(nlh, TCA_DUALPI2_DROP_EARLY, obj.drop_early.value());
	if (obj.c_protection.has_value())
		ynl_attr_put_u8(nlh, TCA_DUALPI2_C_PROTECTION, obj.c_protection.value());
	if (obj.ecn_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_DUALPI2_ECN_MASK, obj.ecn_mask.value());
	if (obj.split_gso.has_value())
		ynl_attr_put_u8(nlh, TCA_DUALPI2_SPLIT_GSO, obj.split_gso.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_dualpi2_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested)
{
	tc_dualpi2_attrs *dst = (tc_dualpi2_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_DUALPI2_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_MEMORY_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->memory_limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_TARGET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_TUPDATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->tupdate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_ALPHA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alpha = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_BETA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->beta = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_STEP_THRESH_PKTS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->step_thresh_pkts = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_STEP_THRESH_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->step_thresh_us = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_MIN_QLEN_STEP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->min_qlen_step = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_DUALPI2_COUPLING) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->coupling = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_DUALPI2_DROP_OVERLOAD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->drop_overload = (enum tc_dualpi2_drop_overload)ynl_attr_get_u8(attr);
		} else if (type == TCA_DUALPI2_DROP_EARLY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->drop_early = (enum tc_dualpi2_drop_early)ynl_attr_get_u8(attr);
		} else if (type == TCA_DUALPI2_C_PROTECTION) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->c_protection = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_DUALPI2_ECN_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn_mask = (enum tc_dualpi2_ecn_mask)ynl_attr_get_u8(attr);
		} else if (type == TCA_DUALPI2_SPLIT_GSO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->split_gso = (enum tc_dualpi2_split_gso)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_etf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_etf_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_ETF_PARMS, obj.parms.data(), obj.parms.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_etf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_etf_attrs *dst = (tc_etf_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_ETF_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		}
	}

	return 0;
}

int tc_fq_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		    const tc_fq_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.plimit.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PLIMIT, obj.plimit.value());
	if (obj.flow_plimit.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_FLOW_PLIMIT, obj.flow_plimit.value());
	if (obj.quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_QUANTUM, obj.quantum.value());
	if (obj.initial_quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_INITIAL_QUANTUM, obj.initial_quantum.value());
	if (obj.rate_enable.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_RATE_ENABLE, obj.rate_enable.value());
	if (obj.flow_default_rate.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_FLOW_DEFAULT_RATE, obj.flow_default_rate.value());
	if (obj.flow_max_rate.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_FLOW_MAX_RATE, obj.flow_max_rate.value());
	if (obj.buckets_log.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_BUCKETS_LOG, obj.buckets_log.value());
	if (obj.flow_refill_delay.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_FLOW_REFILL_DELAY, obj.flow_refill_delay.value());
	if (obj.orphan_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_ORPHAN_MASK, obj.orphan_mask.value());
	if (obj.low_rate_threshold.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_LOW_RATE_THRESHOLD, obj.low_rate_threshold.value());
	if (obj.ce_threshold.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CE_THRESHOLD, obj.ce_threshold.value());
	if (obj.timer_slack.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_TIMER_SLACK, obj.timer_slack.value());
	if (obj.horizon.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_HORIZON, obj.horizon.value());
	if (obj.horizon_drop.has_value())
		ynl_attr_put_u8(nlh, TCA_FQ_HORIZON_DROP, obj.horizon_drop.value());
	if (obj.priomap.size() > 0)
		ynl_attr_put(nlh, TCA_FQ_PRIOMAP, obj.priomap.data(), obj.priomap.size());
	if (obj.weights.size() > 0)
		ynl_attr_put(nlh, TCA_FQ_WEIGHTS, obj.weights.data(), obj.weights.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_fq_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_fq_attrs *dst = (tc_fq_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FQ_PLIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->plimit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_FLOW_PLIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flow_plimit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->quantum = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_INITIAL_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->initial_quantum = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_RATE_ENABLE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rate_enable = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_FLOW_DEFAULT_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flow_default_rate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_FLOW_MAX_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flow_max_rate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_BUCKETS_LOG) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->buckets_log = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_FLOW_REFILL_DELAY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flow_refill_delay = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_ORPHAN_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->orphan_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_LOW_RATE_THRESHOLD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->low_rate_threshold = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CE_THRESHOLD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ce_threshold = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_TIMER_SLACK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->timer_slack = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_HORIZON) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->horizon = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_HORIZON_DROP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->horizon_drop = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FQ_PRIOMAP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->priomap.assign(data, data + len);
		} else if (type == TCA_FQ_WEIGHTS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->weights.assign(data, data + len);
		}
	}

	return 0;
}

int tc_fq_codel_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_fq_codel_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.target.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_TARGET, obj.target.value());
	if (obj.limit.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_LIMIT, obj.limit.value());
	if (obj.interval.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_INTERVAL, obj.interval.value());
	if (obj.ecn.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_ECN, obj.ecn.value());
	if (obj.flows.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_FLOWS, obj.flows.value());
	if (obj.quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_QUANTUM, obj.quantum.value());
	if (obj.ce_threshold.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_CE_THRESHOLD, obj.ce_threshold.value());
	if (obj.drop_batch_size.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_DROP_BATCH_SIZE, obj.drop_batch_size.value());
	if (obj.memory_limit.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_CODEL_MEMORY_LIMIT, obj.memory_limit.value());
	if (obj.ce_threshold_selector.has_value())
		ynl_attr_put_u8(nlh, TCA_FQ_CODEL_CE_THRESHOLD_SELECTOR, obj.ce_threshold_selector.value());
	if (obj.ce_threshold_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FQ_CODEL_CE_THRESHOLD_MASK, obj.ce_threshold_mask.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_fq_codel_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_fq_codel_attrs *dst = (tc_fq_codel_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FQ_CODEL_TARGET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_INTERVAL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->interval = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_ECN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_FLOWS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flows = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->quantum = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_CE_THRESHOLD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ce_threshold = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_DROP_BATCH_SIZE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->drop_batch_size = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_MEMORY_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->memory_limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_CODEL_CE_THRESHOLD_SELECTOR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ce_threshold_selector = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FQ_CODEL_CE_THRESHOLD_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ce_threshold_mask = (__u8)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_fq_pie_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_fq_pie_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.limit.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_LIMIT, obj.limit.value());
	if (obj.flows.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_FLOWS, obj.flows.value());
	if (obj.target.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_TARGET, obj.target.value());
	if (obj.tupdate.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_TUPDATE, obj.tupdate.value());
	if (obj.alpha.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_ALPHA, obj.alpha.value());
	if (obj.beta.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_BETA, obj.beta.value());
	if (obj.quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_QUANTUM, obj.quantum.value());
	if (obj.memory_limit.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_MEMORY_LIMIT, obj.memory_limit.value());
	if (obj.ecn_prob.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_ECN_PROB, obj.ecn_prob.value());
	if (obj.ecn.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_ECN, obj.ecn.value());
	if (obj.bytemode.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_BYTEMODE, obj.bytemode.value());
	if (obj.dq_rate_estimator.has_value())
		ynl_attr_put_u32(nlh, TCA_FQ_PIE_DQ_RATE_ESTIMATOR, obj.dq_rate_estimator.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_fq_pie_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_fq_pie_attrs *dst = (tc_fq_pie_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FQ_PIE_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_FLOWS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flows = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_TARGET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_TUPDATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->tupdate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_ALPHA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alpha = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_BETA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->beta = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->quantum = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_MEMORY_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->memory_limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_ECN_PROB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn_prob = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_ECN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_BYTEMODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->bytemode = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FQ_PIE_DQ_RATE_ESTIMATOR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dq_rate_estimator = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_hhf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_hhf_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.backlog_limit.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_BACKLOG_LIMIT, obj.backlog_limit.value());
	if (obj.quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_QUANTUM, obj.quantum.value());
	if (obj.hh_flows_limit.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_HH_FLOWS_LIMIT, obj.hh_flows_limit.value());
	if (obj.reset_timeout.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_RESET_TIMEOUT, obj.reset_timeout.value());
	if (obj.admit_bytes.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_ADMIT_BYTES, obj.admit_bytes.value());
	if (obj.evict_timeout.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_EVICT_TIMEOUT, obj.evict_timeout.value());
	if (obj.non_hh_weight.has_value())
		ynl_attr_put_u32(nlh, TCA_HHF_NON_HH_WEIGHT, obj.non_hh_weight.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_hhf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_hhf_attrs *dst = (tc_hhf_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_HHF_BACKLOG_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->backlog_limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HHF_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->quantum = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HHF_HH_FLOWS_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->hh_flows_limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HHF_RESET_TIMEOUT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->reset_timeout = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HHF_ADMIT_BYTES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->admit_bytes = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HHF_EVICT_TIMEOUT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->evict_timeout = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HHF_NON_HH_WEIGHT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->non_hh_weight = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_htb_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_htb_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_HTB_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.init.size() > 0)
		ynl_attr_put(nlh, TCA_HTB_INIT, obj.init.data(), obj.init.size());
	if (obj.ctab.size() > 0)
		ynl_attr_put(nlh, TCA_HTB_CTAB, obj.ctab.data(), obj.ctab.size());
	if (obj.rtab.size() > 0)
		ynl_attr_put(nlh, TCA_HTB_RTAB, obj.rtab.data(), obj.rtab.size());
	if (obj.direct_qlen.has_value())
		ynl_attr_put_u32(nlh, TCA_HTB_DIRECT_QLEN, obj.direct_qlen.value());
	if (obj.rate64.has_value())
		ynl_attr_put_u64(nlh, TCA_HTB_RATE64, obj.rate64.value());
	if (obj.ceil64.has_value())
		ynl_attr_put_u64(nlh, TCA_HTB_CEIL64, obj.ceil64.value());
	if (obj.offload)
		ynl_attr_put(nlh, TCA_HTB_OFFLOAD, NULL, 0);
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_htb_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_htb_attrs *dst = (tc_htb_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_HTB_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_HTB_INIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->init.assign(data, data + len);
		} else if (type == TCA_HTB_CTAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ctab.assign(data, data + len);
		} else if (type == TCA_HTB_RTAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rtab.assign(data, data + len);
		} else if (type == TCA_HTB_DIRECT_QLEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->direct_qlen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_HTB_RATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_HTB_CEIL64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ceil64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_HTB_OFFLOAD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
		}
	}

	return 0;
}

int tc_pie_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_pie_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.target.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_TARGET, obj.target.value());
	if (obj.limit.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_LIMIT, obj.limit.value());
	if (obj.tupdate.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_TUPDATE, obj.tupdate.value());
	if (obj.alpha.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_ALPHA, obj.alpha.value());
	if (obj.beta.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_BETA, obj.beta.value());
	if (obj.ecn.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_ECN, obj.ecn.value());
	if (obj.bytemode.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_BYTEMODE, obj.bytemode.value());
	if (obj.dq_rate_estimator.has_value())
		ynl_attr_put_u32(nlh, TCA_PIE_DQ_RATE_ESTIMATOR, obj.dq_rate_estimator.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_pie_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_pie_attrs *dst = (tc_pie_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_PIE_TARGET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_TUPDATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->tupdate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_ALPHA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->alpha = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_BETA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->beta = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_ECN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_BYTEMODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->bytemode = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_PIE_DQ_RATE_ESTIMATOR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dq_rate_estimator = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_qfq_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_qfq_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.weight.has_value())
		ynl_attr_put_u32(nlh, TCA_QFQ_WEIGHT, obj.weight.value());
	if (obj.lmax.has_value())
		ynl_attr_put_u32(nlh, TCA_QFQ_LMAX, obj.lmax.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_qfq_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_qfq_attrs *dst = (tc_qfq_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_QFQ_WEIGHT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->weight = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_QFQ_LMAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lmax = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_red_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_red_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_RED_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.stab.size() > 0)
		ynl_attr_put(nlh, TCA_RED_STAB, obj.stab.data(), obj.stab.size());
	if (obj.max_p.has_value())
		ynl_attr_put_u32(nlh, TCA_RED_MAX_P, obj.max_p.value());
	if (obj.flags.has_value())
		ynl_attr_put(nlh, TCA_RED_FLAGS, &(*obj.flags), sizeof(struct nla_bitfield32));
	if (obj.early_drop_block.has_value())
		ynl_attr_put_u32(nlh, TCA_RED_EARLY_DROP_BLOCK, obj.early_drop_block.value());
	if (obj.mark_block.has_value())
		ynl_attr_put_u32(nlh, TCA_RED_MARK_BLOCK, obj.mark_block.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_red_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_red_attrs *dst = (tc_red_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_RED_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_RED_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stab.assign(data, data + len);
		} else if (type == TCA_RED_MAX_P) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->max_p = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_RED_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			memcpy(&dst->flags, ynl_attr_data(attr), sizeof(struct nla_bitfield32));
		} else if (type == TCA_RED_EARLY_DROP_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->early_drop_block = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_RED_MARK_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mark_block = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_tbf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_tbf_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_TBF_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.rtab.size() > 0)
		ynl_attr_put(nlh, TCA_TBF_RTAB, obj.rtab.data(), obj.rtab.size());
	if (obj.ptab.size() > 0)
		ynl_attr_put(nlh, TCA_TBF_PTAB, obj.ptab.data(), obj.ptab.size());
	if (obj.rate64.has_value())
		ynl_attr_put_u64(nlh, TCA_TBF_RATE64, obj.rate64.value());
	if (obj.prate64.has_value())
		ynl_attr_put_u64(nlh, TCA_TBF_PRATE64, obj.prate64.value());
	if (obj.burst.has_value())
		ynl_attr_put_u32(nlh, TCA_TBF_BURST, obj.burst.value());
	if (obj.pburst.has_value())
		ynl_attr_put_u32(nlh, TCA_TBF_PBURST, obj.pburst.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_tbf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_tbf_attrs *dst = (tc_tbf_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_TBF_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_TBF_RTAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rtab.assign(data, data + len);
		} else if (type == TCA_TBF_PTAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ptab.assign(data, data + len);
		} else if (type == TCA_TBF_RATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_TBF_PRATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->prate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_TBF_BURST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->burst = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TBF_PBURST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pburst = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_ematch_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_ematch_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tree_hdr.size() > 0)
		ynl_attr_put(nlh, TCA_EMATCH_TREE_HDR, obj.tree_hdr.data(), obj.tree_hdr.size());
	if (obj.tree_list.size() > 0)
		ynl_attr_put(nlh, TCA_EMATCH_TREE_LIST, obj.tree_list.data(), obj.tree_list.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_ematch_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_ematch_attrs *dst = (tc_ematch_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_EMATCH_TREE_HDR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tree_hdr.assign(data, data + len);
		} else if (type == TCA_EMATCH_TREE_LIST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tree_list.assign(data, data + len);
		}
	}

	return 0;
}

int tc_police_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_police_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tbf.size() > 0)
		ynl_attr_put(nlh, TCA_POLICE_TBF, obj.tbf.data(), obj.tbf.size());
	if (obj.rate.size() > 0)
		ynl_attr_put(nlh, TCA_POLICE_RATE, obj.rate.data(), obj.rate.size());
	if (obj.peakrate.size() > 0)
		ynl_attr_put(nlh, TCA_POLICE_PEAKRATE, obj.peakrate.data(), obj.peakrate.size());
	if (obj.avrate.has_value())
		ynl_attr_put_u32(nlh, TCA_POLICE_AVRATE, obj.avrate.value());
	if (obj.result.has_value())
		ynl_attr_put_u32(nlh, TCA_POLICE_RESULT, obj.result.value());
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_POLICE_TM, obj.tm.data(), obj.tm.size());
	if (obj.rate64.has_value())
		ynl_attr_put_u64(nlh, TCA_POLICE_RATE64, obj.rate64.value());
	if (obj.peakrate64.has_value())
		ynl_attr_put_u64(nlh, TCA_POLICE_PEAKRATE64, obj.peakrate64.value());
	if (obj.pktrate64.has_value())
		ynl_attr_put_u64(nlh, TCA_POLICE_PKTRATE64, obj.pktrate64.value());
	if (obj.pktburst64.has_value())
		ynl_attr_put_u64(nlh, TCA_POLICE_PKTBURST64, obj.pktburst64.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_police_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_police_attrs *dst = (tc_police_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_POLICE_TBF) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tbf.assign(data, data + len);
		} else if (type == TCA_POLICE_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate.assign(data, data + len);
		} else if (type == TCA_POLICE_PEAKRATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->peakrate.assign(data, data + len);
		} else if (type == TCA_POLICE_AVRATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->avrate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_POLICE_RESULT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->result = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_POLICE_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_POLICE_RATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_POLICE_PEAKRATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->peakrate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_POLICE_PKTRATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pktrate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_POLICE_PKTBURST64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pktburst64 = (__u64)ynl_attr_get_u64(attr);
		}
	}

	return 0;
}

int tc_flower_key_mpls_opt_attrs_put(struct nlmsghdr *nlh,
				     unsigned int attr_type,
				     const tc_flower_key_mpls_opt_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.lse_depth.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_OPT_LSE_DEPTH, obj.lse_depth.value());
	if (obj.lse_ttl.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_OPT_LSE_TTL, obj.lse_ttl.value());
	if (obj.lse_bos.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_OPT_LSE_BOS, obj.lse_bos.value());
	if (obj.lse_tc.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_OPT_LSE_TC, obj.lse_tc.value());
	if (obj.lse_label.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_MPLS_OPT_LSE_LABEL, obj.lse_label.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_mpls_opt_attrs_parse(struct ynl_parse_arg *yarg,
				       const struct nlattr *nested)
{
	tc_flower_key_mpls_opt_attrs *dst = (tc_flower_key_mpls_opt_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_MPLS_OPT_LSE_DEPTH) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lse_depth = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_OPT_LSE_TTL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lse_ttl = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_OPT_LSE_BOS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lse_bos = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_OPT_LSE_TC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lse_tc = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_OPT_LSE_LABEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->lse_label = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_flower_key_cfm_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				const tc_flower_key_cfm_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.md_level.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_CFM_MD_LEVEL, obj.md_level.value());
	if (obj.opcode.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_CFM_OPCODE, obj.opcode.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_cfm_attrs_parse(struct ynl_parse_arg *yarg,
				  const struct nlattr *nested)
{
	tc_flower_key_cfm_attrs *dst = (tc_flower_key_cfm_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_CFM_MD_LEVEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->md_level = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_CFM_OPCODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->opcode = (__u8)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_netem_loss_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_netem_loss_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.gi.size() > 0)
		ynl_attr_put(nlh, NETEM_LOSS_GI, obj.gi.data(), obj.gi.size());
	if (obj.ge.size() > 0)
		ynl_attr_put(nlh, NETEM_LOSS_GE, obj.ge.data(), obj.ge.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_netem_loss_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_netem_loss_attrs *dst = (tc_netem_loss_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == NETEM_LOSS_GI) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->gi.assign(data, data + len);
		} else if (type == NETEM_LOSS_GE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ge.assign(data, data + len);
		}
	}

	return 0;
}

int tc_taprio_sched_entry_put(struct nlmsghdr *nlh, unsigned int attr_type,
			      const tc_taprio_sched_entry&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.index.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_SCHED_ENTRY_INDEX, obj.index.value());
	if (obj.cmd.has_value())
		ynl_attr_put_u8(nlh, TCA_TAPRIO_SCHED_ENTRY_CMD, obj.cmd.value());
	if (obj.gate_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_SCHED_ENTRY_GATE_MASK, obj.gate_mask.value());
	if (obj.interval.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_SCHED_ENTRY_INTERVAL, obj.interval.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_taprio_sched_entry_parse(struct ynl_parse_arg *yarg,
				const struct nlattr *nested)
{
	tc_taprio_sched_entry *dst = (tc_taprio_sched_entry *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_TAPRIO_SCHED_ENTRY_INDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->index = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TAPRIO_SCHED_ENTRY_CMD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->cmd = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_TAPRIO_SCHED_ENTRY_GATE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->gate_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TAPRIO_SCHED_ENTRY_INTERVAL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->interval = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_taprio_tc_entry_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				 const tc_taprio_tc_entry_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.index.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_TC_ENTRY_INDEX, obj.index.value());
	if (obj.max_sdu.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_TC_ENTRY_MAX_SDU, obj.max_sdu.value());
	if (obj.fp.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_TC_ENTRY_FP, obj.fp.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_taprio_tc_entry_attrs_parse(struct ynl_parse_arg *yarg,
				   const struct nlattr *nested)
{
	tc_taprio_tc_entry_attrs *dst = (tc_taprio_tc_entry_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_TAPRIO_TC_ENTRY_INDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->index = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TAPRIO_TC_ENTRY_MAX_SDU) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->max_sdu = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TAPRIO_TC_ENTRY_FP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fp = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_cake_tin_stats_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				const tc_cake_tin_stats_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.sent_packets.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_SENT_PACKETS, obj.sent_packets.value());
	if (obj.sent_bytes64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_TIN_STATS_SENT_BYTES64, obj.sent_bytes64.value());
	if (obj.dropped_packets.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_DROPPED_PACKETS, obj.dropped_packets.value());
	if (obj.dropped_bytes64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_TIN_STATS_DROPPED_BYTES64, obj.dropped_bytes64.value());
	if (obj.acks_dropped_packets.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_ACKS_DROPPED_PACKETS, obj.acks_dropped_packets.value());
	if (obj.acks_dropped_bytes64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_TIN_STATS_ACKS_DROPPED_BYTES64, obj.acks_dropped_bytes64.value());
	if (obj.ecn_marked_packets.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_ECN_MARKED_PACKETS, obj.ecn_marked_packets.value());
	if (obj.ecn_marked_bytes64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_TIN_STATS_ECN_MARKED_BYTES64, obj.ecn_marked_bytes64.value());
	if (obj.backlog_packets.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_BACKLOG_PACKETS, obj.backlog_packets.value());
	if (obj.backlog_bytes.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_BACKLOG_BYTES, obj.backlog_bytes.value());
	if (obj.threshold_rate64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_TIN_STATS_THRESHOLD_RATE64, obj.threshold_rate64.value());
	if (obj.target_us.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_TARGET_US, obj.target_us.value());
	if (obj.interval_us.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_INTERVAL_US, obj.interval_us.value());
	if (obj.way_indirect_hits.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_WAY_INDIRECT_HITS, obj.way_indirect_hits.value());
	if (obj.way_misses.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_WAY_MISSES, obj.way_misses.value());
	if (obj.way_collisions.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_WAY_COLLISIONS, obj.way_collisions.value());
	if (obj.peak_delay_us.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_PEAK_DELAY_US, obj.peak_delay_us.value());
	if (obj.avg_delay_us.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_AVG_DELAY_US, obj.avg_delay_us.value());
	if (obj.base_delay_us.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_BASE_DELAY_US, obj.base_delay_us.value());
	if (obj.sparse_flows.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_SPARSE_FLOWS, obj.sparse_flows.value());
	if (obj.bulk_flows.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_BULK_FLOWS, obj.bulk_flows.value());
	if (obj.unresponsive_flows.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_UNRESPONSIVE_FLOWS, obj.unresponsive_flows.value());
	if (obj.max_skblen.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_MAX_SKBLEN, obj.max_skblen.value());
	if (obj.flow_quantum.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_TIN_STATS_FLOW_QUANTUM, obj.flow_quantum.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_cake_tin_stats_attrs_parse(struct ynl_parse_arg *yarg,
				  const struct nlattr *nested, __u32 idx)
{
	tc_cake_tin_stats_attrs *dst = (tc_cake_tin_stats_attrs *)yarg->data;
	const struct nlattr *attr;

	dst->idx = idx;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CAKE_TIN_STATS_SENT_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sent_packets = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_SENT_BYTES64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sent_bytes64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_TIN_STATS_DROPPED_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dropped_packets = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_DROPPED_BYTES64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dropped_bytes64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_TIN_STATS_ACKS_DROPPED_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->acks_dropped_packets = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_ACKS_DROPPED_BYTES64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->acks_dropped_bytes64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_TIN_STATS_ECN_MARKED_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn_marked_packets = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_ECN_MARKED_BYTES64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn_marked_bytes64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_TIN_STATS_BACKLOG_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->backlog_packets = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_BACKLOG_BYTES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->backlog_bytes = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_THRESHOLD_RATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->threshold_rate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_TIN_STATS_TARGET_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->target_us = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_INTERVAL_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->interval_us = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_WAY_INDIRECT_HITS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->way_indirect_hits = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_WAY_MISSES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->way_misses = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_WAY_COLLISIONS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->way_collisions = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_PEAK_DELAY_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->peak_delay_us = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_AVG_DELAY_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->avg_delay_us = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_BASE_DELAY_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->base_delay_us = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_SPARSE_FLOWS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sparse_flows = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_BULK_FLOWS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->bulk_flows = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_UNRESPONSIVE_FLOWS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->unresponsive_flows = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_MAX_SKBLEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->max_skblen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_TIN_STATS_FLOW_QUANTUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flow_quantum = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_flower_key_enc_opt_geneve_attrs_put(struct nlmsghdr *nlh,
					   unsigned int attr_type,
					   const tc_flower_key_enc_opt_geneve_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.class_.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_ENC_OPT_GENEVE_CLASS, obj.class_.value());
	if (obj.type.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_OPT_GENEVE_TYPE, obj.type.value());
	if (obj.data.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ENC_OPT_GENEVE_DATA, obj.data.data(), obj.data.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_enc_opt_geneve_attrs_parse(struct ynl_parse_arg *yarg,
					     const struct nlattr *nested)
{
	tc_flower_key_enc_opt_geneve_attrs *dst = (tc_flower_key_enc_opt_geneve_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_ENC_OPT_GENEVE_CLASS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->class_ = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPT_GENEVE_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->type = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPT_GENEVE_DATA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->data.assign(data, data + len);
		}
	}

	return 0;
}

int tc_flower_key_enc_opt_vxlan_attrs_put(struct nlmsghdr *nlh,
					  unsigned int attr_type,
					  const tc_flower_key_enc_opt_vxlan_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.gbp.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_OPT_VXLAN_GBP, obj.gbp.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_enc_opt_vxlan_attrs_parse(struct ynl_parse_arg *yarg,
					    const struct nlattr *nested)
{
	tc_flower_key_enc_opt_vxlan_attrs *dst = (tc_flower_key_enc_opt_vxlan_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_ENC_OPT_VXLAN_GBP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->gbp = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_flower_key_enc_opt_erspan_attrs_put(struct nlmsghdr *nlh,
					   unsigned int attr_type,
					   const tc_flower_key_enc_opt_erspan_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.ver.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_OPT_ERSPAN_VER, obj.ver.value());
	if (obj.index.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_OPT_ERSPAN_INDEX, obj.index.value());
	if (obj.dir.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_OPT_ERSPAN_DIR, obj.dir.value());
	if (obj.hwid.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_OPT_ERSPAN_HWID, obj.hwid.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_enc_opt_erspan_attrs_parse(struct ynl_parse_arg *yarg,
					     const struct nlattr *nested)
{
	tc_flower_key_enc_opt_erspan_attrs *dst = (tc_flower_key_enc_opt_erspan_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_ENC_OPT_ERSPAN_VER) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ver = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPT_ERSPAN_INDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->index = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPT_ERSPAN_DIR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dir = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPT_ERSPAN_HWID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->hwid = (__u8)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_flower_key_enc_opt_gtp_attrs_put(struct nlmsghdr *nlh,
					unsigned int attr_type,
					const tc_flower_key_enc_opt_gtp_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.pdu_type.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_OPT_GTP_PDU_TYPE, obj.pdu_type.value());
	if (obj.qfi.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_OPT_GTP_QFI, obj.qfi.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_enc_opt_gtp_attrs_parse(struct ynl_parse_arg *yarg,
					  const struct nlattr *nested)
{
	tc_flower_key_enc_opt_gtp_attrs *dst = (tc_flower_key_enc_opt_gtp_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_ENC_OPT_GTP_PDU_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pdu_type = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPT_GTP_QFI) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->qfi = (__u8)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_tca_gred_vq_entry_attrs_put(struct nlmsghdr *nlh,
				   unsigned int attr_type,
				   const tc_tca_gred_vq_entry_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.dp.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_DP, obj.dp.value());
	if (obj.stat_bytes.has_value())
		ynl_attr_put_u64(nlh, TCA_GRED_VQ_STAT_BYTES, obj.stat_bytes.value());
	if (obj.stat_packets.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_PACKETS, obj.stat_packets.value());
	if (obj.stat_backlog.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_BACKLOG, obj.stat_backlog.value());
	if (obj.stat_prob_drop.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_PROB_DROP, obj.stat_prob_drop.value());
	if (obj.stat_prob_mark.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_PROB_MARK, obj.stat_prob_mark.value());
	if (obj.stat_forced_drop.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_FORCED_DROP, obj.stat_forced_drop.value());
	if (obj.stat_forced_mark.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_FORCED_MARK, obj.stat_forced_mark.value());
	if (obj.stat_pdrop.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_PDROP, obj.stat_pdrop.value());
	if (obj.stat_other.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_STAT_OTHER, obj.stat_other.value());
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_VQ_FLAGS, obj.flags.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_tca_gred_vq_entry_attrs_parse(struct ynl_parse_arg *yarg,
				     const struct nlattr *nested)
{
	tc_tca_gred_vq_entry_attrs *dst = (tc_tca_gred_vq_entry_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_GRED_VQ_DP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dp = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_BYTES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_bytes = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_GRED_VQ_STAT_PACKETS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_packets = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_BACKLOG) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_backlog = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_PROB_DROP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_prob_drop = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_PROB_MARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_prob_mark = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_FORCED_DROP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_forced_drop = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_FORCED_MARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_forced_mark = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_PDROP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_pdrop = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_STAT_OTHER) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stat_other = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_act_bpf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_act_bpf_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_ACT_BPF_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_ACT_BPF_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.ops_len.has_value())
		ynl_attr_put_u16(nlh, TCA_ACT_BPF_OPS_LEN, obj.ops_len.value());
	if (obj.ops.size() > 0)
		ynl_attr_put(nlh, TCA_ACT_BPF_OPS, obj.ops.data(), obj.ops.size());
	if (obj.fd.has_value())
		ynl_attr_put_u32(nlh, TCA_ACT_BPF_FD, obj.fd.value());
	if (obj.name.size() > 0)
		ynl_attr_put_str(nlh, TCA_ACT_BPF_NAME, obj.name.data());
	if (obj.tag.size() > 0)
		ynl_attr_put(nlh, TCA_ACT_BPF_TAG, obj.tag.data(), obj.tag.size());
	if (obj.id.size() > 0)
		ynl_attr_put(nlh, TCA_ACT_BPF_ID, obj.id.data(), obj.id.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_bpf_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested)
{
	tc_act_bpf_attrs *dst = (tc_act_bpf_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_ACT_BPF_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_ACT_BPF_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_ACT_BPF_OPS_LEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ops_len = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_ACT_BPF_OPS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ops.assign(data, data + len);
		} else if (type == TCA_ACT_BPF_FD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fd = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_ACT_BPF_NAME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->name.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_ACT_BPF_TAG) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tag.assign(data, data + len);
		} else if (type == TCA_ACT_BPF_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->id.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_connmark_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			      const tc_act_connmark_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_CONNMARK_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_CONNMARK_TM, obj.tm.data(), obj.tm.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_connmark_attrs_parse(struct ynl_parse_arg *yarg,
				const struct nlattr *nested)
{
	tc_act_connmark_attrs *dst = (tc_act_connmark_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CONNMARK_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_CONNMARK_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_csum_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_csum_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_CSUM_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_CSUM_TM, obj.tm.data(), obj.tm.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_csum_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_act_csum_attrs *dst = (tc_act_csum_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CSUM_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_CSUM_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_ct_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_act_ct_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_CT_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_CT_TM, obj.tm.data(), obj.tm.size());
	if (obj.action.has_value())
		ynl_attr_put_u16(nlh, TCA_CT_ACTION, obj.action.value());
	if (obj.zone.has_value())
		ynl_attr_put_u16(nlh, TCA_CT_ZONE, obj.zone.value());
	if (obj.mark.has_value())
		ynl_attr_put_u32(nlh, TCA_CT_MARK, obj.mark.value());
	if (obj.mark_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_CT_MARK_MASK, obj.mark_mask.value());
	if (obj.labels.size() > 0)
		ynl_attr_put(nlh, TCA_CT_LABELS, obj.labels.data(), obj.labels.size());
	if (obj.labels_mask.size() > 0)
		ynl_attr_put(nlh, TCA_CT_LABELS_MASK, obj.labels_mask.data(), obj.labels_mask.size());
	if (obj.nat_ipv4_min.has_value())
		ynl_attr_put_u32(nlh, TCA_CT_NAT_IPV4_MIN, obj.nat_ipv4_min.value());
	if (obj.nat_ipv4_max.has_value())
		ynl_attr_put_u32(nlh, TCA_CT_NAT_IPV4_MAX, obj.nat_ipv4_max.value());
	if (obj.nat_ipv6_min.size() > 0)
		ynl_attr_put(nlh, TCA_CT_NAT_IPV6_MIN, obj.nat_ipv6_min.data(), obj.nat_ipv6_min.size());
	if (obj.nat_ipv6_max.size() > 0)
		ynl_attr_put(nlh, TCA_CT_NAT_IPV6_MAX, obj.nat_ipv6_max.data(), obj.nat_ipv6_max.size());
	if (obj.nat_port_min.has_value())
		ynl_attr_put_u16(nlh, TCA_CT_NAT_PORT_MIN, obj.nat_port_min.value());
	if (obj.nat_port_max.has_value())
		ynl_attr_put_u16(nlh, TCA_CT_NAT_PORT_MAX, obj.nat_port_max.value());
	if (obj.helper_name.size() > 0)
		ynl_attr_put_str(nlh, TCA_CT_HELPER_NAME, obj.helper_name.data());
	if (obj.helper_family.has_value())
		ynl_attr_put_u8(nlh, TCA_CT_HELPER_FAMILY, obj.helper_family.value());
	if (obj.helper_proto.has_value())
		ynl_attr_put_u8(nlh, TCA_CT_HELPER_PROTO, obj.helper_proto.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_ct_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_act_ct_attrs *dst = (tc_act_ct_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CT_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_CT_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_CT_ACTION) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->action = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_CT_ZONE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->zone = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_CT_MARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mark = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CT_MARK_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mark_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CT_LABELS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->labels.assign(data, data + len);
		} else if (type == TCA_CT_LABELS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->labels_mask.assign(data, data + len);
		} else if (type == TCA_CT_NAT_IPV4_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nat_ipv4_min = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CT_NAT_IPV4_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nat_ipv4_max = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CT_NAT_IPV6_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->nat_ipv6_min.assign(data, data + len);
		} else if (type == TCA_CT_NAT_IPV6_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->nat_ipv6_max.assign(data, data + len);
		} else if (type == TCA_CT_NAT_PORT_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nat_port_min = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_CT_NAT_PORT_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nat_port_max = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_CT_HELPER_NAME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->helper_name.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_CT_HELPER_FAMILY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->helper_family = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_CT_HELPER_PROTO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->helper_proto = (__u8)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_act_ctinfo_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_ctinfo_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_CTINFO_TM, obj.tm.data(), obj.tm.size());
	if (obj.act.size() > 0)
		ynl_attr_put(nlh, TCA_CTINFO_ACT, obj.act.data(), obj.act.size());
	if (obj.zone.has_value())
		ynl_attr_put_u16(nlh, TCA_CTINFO_ZONE, obj.zone.value());
	if (obj.parms_dscp_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_CTINFO_PARMS_DSCP_MASK, obj.parms_dscp_mask.value());
	if (obj.parms_dscp_statemask.has_value())
		ynl_attr_put_u32(nlh, TCA_CTINFO_PARMS_DSCP_STATEMASK, obj.parms_dscp_statemask.value());
	if (obj.parms_cpmark_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_CTINFO_PARMS_CPMARK_MASK, obj.parms_cpmark_mask.value());
	if (obj.stats_dscp_set.has_value())
		ynl_attr_put_u64(nlh, TCA_CTINFO_STATS_DSCP_SET, obj.stats_dscp_set.value());
	if (obj.stats_dscp_error.has_value())
		ynl_attr_put_u64(nlh, TCA_CTINFO_STATS_DSCP_ERROR, obj.stats_dscp_error.value());
	if (obj.stats_cpmark_set.has_value())
		ynl_attr_put_u64(nlh, TCA_CTINFO_STATS_CPMARK_SET, obj.stats_cpmark_set.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_ctinfo_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_act_ctinfo_attrs *dst = (tc_act_ctinfo_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CTINFO_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_CTINFO_ACT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->act.assign(data, data + len);
		} else if (type == TCA_CTINFO_ZONE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->zone = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_CTINFO_PARMS_DSCP_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->parms_dscp_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CTINFO_PARMS_DSCP_STATEMASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->parms_dscp_statemask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CTINFO_PARMS_CPMARK_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->parms_cpmark_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CTINFO_STATS_DSCP_SET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stats_dscp_set = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CTINFO_STATS_DSCP_ERROR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stats_dscp_error = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CTINFO_STATS_CPMARK_SET) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->stats_cpmark_set = (__u64)ynl_attr_get_u64(attr);
		}
	}

	return 0;
}

int tc_act_gact_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_gact_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_GACT_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_GACT_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.prob.size() > 0)
		ynl_attr_put(nlh, TCA_GACT_PROB, obj.prob.data(), obj.prob.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_gact_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_act_gact_attrs *dst = (tc_act_gact_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_GACT_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_GACT_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_GACT_PROB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->prob.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_gate_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_gate_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_GATE_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_GATE_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.priority.has_value())
		ynl_attr_put_s32(nlh, TCA_GATE_PRIORITY, obj.priority.value());
	if (obj.entry_list.size() > 0)
		ynl_attr_put(nlh, TCA_GATE_ENTRY_LIST, obj.entry_list.data(), obj.entry_list.size());
	if (obj.base_time.has_value())
		ynl_attr_put_u64(nlh, TCA_GATE_BASE_TIME, obj.base_time.value());
	if (obj.cycle_time.has_value())
		ynl_attr_put_u64(nlh, TCA_GATE_CYCLE_TIME, obj.cycle_time.value());
	if (obj.cycle_time_ext.has_value())
		ynl_attr_put_u64(nlh, TCA_GATE_CYCLE_TIME_EXT, obj.cycle_time_ext.value());
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_GATE_FLAGS, obj.flags.value());
	if (obj.clockid.has_value())
		ynl_attr_put_s32(nlh, TCA_GATE_CLOCKID, obj.clockid.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_gate_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_act_gate_attrs *dst = (tc_act_gate_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_GATE_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_GATE_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_GATE_PRIORITY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->priority = (__s32)ynl_attr_get_s32(attr);
		} else if (type == TCA_GATE_ENTRY_LIST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->entry_list.assign(data, data + len);
		} else if (type == TCA_GATE_BASE_TIME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->base_time = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_GATE_CYCLE_TIME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->cycle_time = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_GATE_CYCLE_TIME_EXT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->cycle_time_ext = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_GATE_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GATE_CLOCKID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->clockid = (__s32)ynl_attr_get_s32(attr);
		}
	}

	return 0;
}

int tc_act_ife_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_act_ife_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_IFE_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_IFE_TM, obj.tm.data(), obj.tm.size());
	if (obj.dmac.size() > 0)
		ynl_attr_put(nlh, TCA_IFE_DMAC, obj.dmac.data(), obj.dmac.size());
	if (obj.smac.size() > 0)
		ynl_attr_put(nlh, TCA_IFE_SMAC, obj.smac.data(), obj.smac.size());
	if (obj.type.has_value())
		ynl_attr_put_u16(nlh, TCA_IFE_TYPE, obj.type.value());
	if (obj.metalst.size() > 0)
		ynl_attr_put(nlh, TCA_IFE_METALST, obj.metalst.data(), obj.metalst.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_ife_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested)
{
	tc_act_ife_attrs *dst = (tc_act_ife_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_IFE_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_IFE_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_IFE_DMAC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->dmac.assign(data, data + len);
		} else if (type == TCA_IFE_SMAC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->smac.assign(data, data + len);
		} else if (type == TCA_IFE_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->type = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_IFE_METALST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->metalst.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_mirred_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_mirred_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_MIRRED_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_MIRRED_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.blockid.size() > 0)
		ynl_attr_put(nlh, TCA_MIRRED_BLOCKID, obj.blockid.data(), obj.blockid.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_mirred_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_act_mirred_attrs *dst = (tc_act_mirred_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_MIRRED_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_MIRRED_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_MIRRED_BLOCKID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->blockid.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_mpls_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_mpls_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_MPLS_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_MPLS_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.proto.has_value())
		ynl_attr_put_u16(nlh, TCA_MPLS_PROTO, obj.proto.value());
	if (obj.label.has_value())
		ynl_attr_put_u32(nlh, TCA_MPLS_LABEL, obj.label.value());
	if (obj.tc.has_value())
		ynl_attr_put_u8(nlh, TCA_MPLS_TC, obj.tc.value());
	if (obj.ttl.has_value())
		ynl_attr_put_u8(nlh, TCA_MPLS_TTL, obj.ttl.value());
	if (obj.bos.has_value())
		ynl_attr_put_u8(nlh, TCA_MPLS_BOS, obj.bos.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_mpls_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_act_mpls_attrs *dst = (tc_act_mpls_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_MPLS_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_MPLS_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_MPLS_PROTO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->proto = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_MPLS_LABEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->label = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_MPLS_TC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->tc = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_MPLS_TTL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ttl = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_MPLS_BOS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->bos = (__u8)ynl_attr_get_u8(attr);
		}
	}

	return 0;
}

int tc_act_nat_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			 const tc_act_nat_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_NAT_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_NAT_TM, obj.tm.data(), obj.tm.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_nat_attrs_parse(struct ynl_parse_arg *yarg,
			   const struct nlattr *nested)
{
	tc_act_nat_attrs *dst = (tc_act_nat_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_NAT_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_NAT_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_pedit_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			   const tc_act_pedit_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_PEDIT_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_PEDIT_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.parms_ex.size() > 0)
		ynl_attr_put(nlh, TCA_PEDIT_PARMS_EX, obj.parms_ex.data(), obj.parms_ex.size());
	if (obj.keys_ex.size() > 0)
		ynl_attr_put(nlh, TCA_PEDIT_KEYS_EX, obj.keys_ex.data(), obj.keys_ex.size());
	if (obj.key_ex.size() > 0)
		ynl_attr_put(nlh, TCA_PEDIT_KEY_EX, obj.key_ex.data(), obj.key_ex.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_pedit_attrs_parse(struct ynl_parse_arg *yarg,
			     const struct nlattr *nested)
{
	tc_act_pedit_attrs *dst = (tc_act_pedit_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_PEDIT_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_PEDIT_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_PEDIT_PARMS_EX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms_ex.assign(data, data + len);
		} else if (type == TCA_PEDIT_KEYS_EX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->keys_ex.assign(data, data + len);
		} else if (type == TCA_PEDIT_KEY_EX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ex.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_sample_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_sample_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_SAMPLE_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_SAMPLE_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.rate.has_value())
		ynl_attr_put_u32(nlh, TCA_SAMPLE_RATE, obj.rate.value());
	if (obj.trunc_size.has_value())
		ynl_attr_put_u32(nlh, TCA_SAMPLE_TRUNC_SIZE, obj.trunc_size.value());
	if (obj.psample_group.has_value())
		ynl_attr_put_u32(nlh, TCA_SAMPLE_PSAMPLE_GROUP, obj.psample_group.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_sample_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_act_sample_attrs *dst = (tc_act_sample_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_SAMPLE_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_SAMPLE_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_SAMPLE_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rate = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_SAMPLE_TRUNC_SIZE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->trunc_size = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_SAMPLE_PSAMPLE_GROUP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->psample_group = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_act_simple_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_simple_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_DEF_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_DEF_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.data.size() > 0)
		ynl_attr_put(nlh, TCA_DEF_DATA, obj.data.data(), obj.data.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_simple_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_act_simple_attrs *dst = (tc_act_simple_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_DEF_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_DEF_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_DEF_DATA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->data.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_skbedit_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			     const tc_act_skbedit_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_SKBEDIT_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_SKBEDIT_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.priority.has_value())
		ynl_attr_put_u32(nlh, TCA_SKBEDIT_PRIORITY, obj.priority.value());
	if (obj.queue_mapping.has_value())
		ynl_attr_put_u16(nlh, TCA_SKBEDIT_QUEUE_MAPPING, obj.queue_mapping.value());
	if (obj.mark.has_value())
		ynl_attr_put_u32(nlh, TCA_SKBEDIT_MARK, obj.mark.value());
	if (obj.ptype.has_value())
		ynl_attr_put_u16(nlh, TCA_SKBEDIT_PTYPE, obj.ptype.value());
	if (obj.mask.has_value())
		ynl_attr_put_u32(nlh, TCA_SKBEDIT_MASK, obj.mask.value());
	if (obj.flags.has_value())
		ynl_attr_put_u64(nlh, TCA_SKBEDIT_FLAGS, obj.flags.value());
	if (obj.queue_mapping_max.has_value())
		ynl_attr_put_u16(nlh, TCA_SKBEDIT_QUEUE_MAPPING_MAX, obj.queue_mapping_max.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_skbedit_attrs_parse(struct ynl_parse_arg *yarg,
			       const struct nlattr *nested)
{
	tc_act_skbedit_attrs *dst = (tc_act_skbedit_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_SKBEDIT_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_SKBEDIT_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_SKBEDIT_PRIORITY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->priority = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_SKBEDIT_QUEUE_MAPPING) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->queue_mapping = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_SKBEDIT_MARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mark = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_SKBEDIT_PTYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ptype = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_SKBEDIT_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_SKBEDIT_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_SKBEDIT_QUEUE_MAPPING_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->queue_mapping_max = (__u16)ynl_attr_get_u16(attr);
		}
	}

	return 0;
}

int tc_act_skbmod_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_act_skbmod_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_SKBMOD_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_SKBMOD_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.dmac.size() > 0)
		ynl_attr_put(nlh, TCA_SKBMOD_DMAC, obj.dmac.data(), obj.dmac.size());
	if (obj.smac.size() > 0)
		ynl_attr_put(nlh, TCA_SKBMOD_SMAC, obj.smac.data(), obj.smac.size());
	if (obj.etype.size() > 0)
		ynl_attr_put(nlh, TCA_SKBMOD_ETYPE, obj.etype.data(), obj.etype.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_skbmod_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_act_skbmod_attrs *dst = (tc_act_skbmod_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_SKBMOD_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_SKBMOD_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_SKBMOD_DMAC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->dmac.assign(data, data + len);
		} else if (type == TCA_SKBMOD_SMAC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->smac.assign(data, data + len);
		} else if (type == TCA_SKBMOD_ETYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->etype.assign(data, data + len);
		}
	}

	return 0;
}

int tc_act_tunnel_key_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				const tc_act_tunnel_key_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_TUNNEL_KEY_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_TUNNEL_KEY_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.enc_ipv4_src.has_value())
		ynl_attr_put_u32(nlh, TCA_TUNNEL_KEY_ENC_IPV4_SRC, obj.enc_ipv4_src.value());
	if (obj.enc_ipv4_dst.has_value())
		ynl_attr_put_u32(nlh, TCA_TUNNEL_KEY_ENC_IPV4_DST, obj.enc_ipv4_dst.value());
	if (obj.enc_ipv6_src.size() > 0)
		ynl_attr_put(nlh, TCA_TUNNEL_KEY_ENC_IPV6_SRC, obj.enc_ipv6_src.data(), obj.enc_ipv6_src.size());
	if (obj.enc_ipv6_dst.size() > 0)
		ynl_attr_put(nlh, TCA_TUNNEL_KEY_ENC_IPV6_DST, obj.enc_ipv6_dst.data(), obj.enc_ipv6_dst.size());
	if (obj.enc_key_id.has_value())
		ynl_attr_put_u64(nlh, TCA_TUNNEL_KEY_ENC_KEY_ID, obj.enc_key_id.value());
	if (obj.enc_dst_port.has_value())
		ynl_attr_put_u16(nlh, TCA_TUNNEL_KEY_ENC_DST_PORT, obj.enc_dst_port.value());
	if (obj.no_csum.has_value())
		ynl_attr_put_u8(nlh, TCA_TUNNEL_KEY_NO_CSUM, obj.no_csum.value());
	if (obj.enc_opts.size() > 0)
		ynl_attr_put(nlh, TCA_TUNNEL_KEY_ENC_OPTS, obj.enc_opts.data(), obj.enc_opts.size());
	if (obj.enc_tos.has_value())
		ynl_attr_put_u8(nlh, TCA_TUNNEL_KEY_ENC_TOS, obj.enc_tos.value());
	if (obj.enc_ttl.has_value())
		ynl_attr_put_u8(nlh, TCA_TUNNEL_KEY_ENC_TTL, obj.enc_ttl.value());
	if (obj.no_frag)
		ynl_attr_put(nlh, TCA_TUNNEL_KEY_NO_FRAG, NULL, 0);
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_tunnel_key_attrs_parse(struct ynl_parse_arg *yarg,
				  const struct nlattr *nested)
{
	tc_act_tunnel_key_attrs *dst = (tc_act_tunnel_key_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_TUNNEL_KEY_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_TUNNEL_KEY_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_TUNNEL_KEY_ENC_IPV4_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->enc_ipv4_src = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TUNNEL_KEY_ENC_IPV4_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->enc_ipv4_dst = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TUNNEL_KEY_ENC_IPV6_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->enc_ipv6_src.assign(data, data + len);
		} else if (type == TCA_TUNNEL_KEY_ENC_IPV6_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->enc_ipv6_dst.assign(data, data + len);
		} else if (type == TCA_TUNNEL_KEY_ENC_KEY_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->enc_key_id = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_TUNNEL_KEY_ENC_DST_PORT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->enc_dst_port = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_TUNNEL_KEY_NO_CSUM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->no_csum = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_TUNNEL_KEY_ENC_OPTS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->enc_opts.assign(data, data + len);
		} else if (type == TCA_TUNNEL_KEY_ENC_TOS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->enc_tos = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_TUNNEL_KEY_ENC_TTL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->enc_ttl = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_TUNNEL_KEY_NO_FRAG) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
		}
	}

	return 0;
}

int tc_act_vlan_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_act_vlan_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.tm.size() > 0)
		ynl_attr_put(nlh, TCA_VLAN_TM, obj.tm.data(), obj.tm.size());
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_VLAN_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.push_vlan_id.has_value())
		ynl_attr_put_u16(nlh, TCA_VLAN_PUSH_VLAN_ID, obj.push_vlan_id.value());
	if (obj.push_vlan_protocol.has_value())
		ynl_attr_put_u16(nlh, TCA_VLAN_PUSH_VLAN_PROTOCOL, obj.push_vlan_protocol.value());
	if (obj.push_vlan_priority.has_value())
		ynl_attr_put_u8(nlh, TCA_VLAN_PUSH_VLAN_PRIORITY, obj.push_vlan_priority.value());
	if (obj.push_eth_dst.size() > 0)
		ynl_attr_put(nlh, TCA_VLAN_PUSH_ETH_DST, obj.push_eth_dst.data(), obj.push_eth_dst.size());
	if (obj.push_eth_src.size() > 0)
		ynl_attr_put(nlh, TCA_VLAN_PUSH_ETH_SRC, obj.push_eth_src.data(), obj.push_eth_src.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_vlan_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_act_vlan_attrs *dst = (tc_act_vlan_attrs *)yarg->data;
	const struct nlattr *attr;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_VLAN_TM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tm.assign(data, data + len);
		} else if (type == TCA_VLAN_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_VLAN_PUSH_VLAN_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->push_vlan_id = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_VLAN_PUSH_VLAN_PROTOCOL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->push_vlan_protocol = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_VLAN_PUSH_VLAN_PRIORITY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->push_vlan_priority = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_VLAN_PUSH_ETH_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->push_eth_dst.assign(data, data + len);
		} else if (type == TCA_VLAN_PUSH_ETH_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->push_eth_src.assign(data, data + len);
		}
	}

	return 0;
}

int tc_flow_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		      const tc_flow_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.keys.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_KEYS, obj.keys.value());
	if (obj.mode.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_MODE, obj.mode.value());
	if (obj.baseclass.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_BASECLASS, obj.baseclass.value());
	if (obj.rshift.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_RSHIFT, obj.rshift.value());
	if (obj.addend.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_ADDEND, obj.addend.value());
	if (obj.mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_MASK, obj.mask.value());
	if (obj.xor_.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_XOR, obj.xor_.value());
	if (obj.divisor.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_DIVISOR, obj.divisor.value());
	if (obj.act.size() > 0)
		ynl_attr_put(nlh, TCA_FLOW_ACT, obj.act.data(), obj.act.size());
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_FLOW_POLICE, obj.police.value());
	if (obj.ematches.size() > 0)
		ynl_attr_put(nlh, TCA_FLOW_EMATCHES, obj.ematches.data(), obj.ematches.size());
	if (obj.perturb.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOW_PERTURB, obj.perturb.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flow_attrs_parse(struct ynl_parse_arg *yarg,
			const struct nlattr *nested)
{
	tc_flow_attrs *dst = (tc_flow_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOW_KEYS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->keys = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_MODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mode = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_BASECLASS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->baseclass = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_RSHIFT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rshift = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_ADDEND) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->addend = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_XOR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->xor_ = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_DIVISOR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->divisor = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOW_ACT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->act.assign(data, data + len);
		} else if (type == TCA_FLOW_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOW_EMATCHES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ematches.assign(data, data + len);
		} else if (type == TCA_FLOW_PERTURB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->perturb = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_netem_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_netem_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.corr.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_CORR, obj.corr.data(), obj.corr.size());
	if (obj.delay_dist.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_DELAY_DIST, obj.delay_dist.data(), obj.delay_dist.size());
	if (obj.reorder.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_REORDER, obj.reorder.data(), obj.reorder.size());
	if (obj.corrupt.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_CORRUPT, obj.corrupt.data(), obj.corrupt.size());
	if (obj.loss.has_value())
		tc_netem_loss_attrs_put(nlh, TCA_NETEM_LOSS, obj.loss.value());
	if (obj.rate.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_RATE, obj.rate.data(), obj.rate.size());
	if (obj.ecn.has_value())
		ynl_attr_put_u32(nlh, TCA_NETEM_ECN, obj.ecn.value());
	if (obj.rate64.has_value())
		ynl_attr_put_u64(nlh, TCA_NETEM_RATE64, obj.rate64.value());
	if (obj.pad.has_value())
		ynl_attr_put_u32(nlh, TCA_NETEM_PAD, obj.pad.value());
	if (obj.latency64.has_value())
		ynl_attr_put_s64(nlh, TCA_NETEM_LATENCY64, obj.latency64.value());
	if (obj.jitter64.has_value())
		ynl_attr_put_s64(nlh, TCA_NETEM_JITTER64, obj.jitter64.value());
	if (obj.slot.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_SLOT, obj.slot.data(), obj.slot.size());
	if (obj.slot_dist.size() > 0)
		ynl_attr_put(nlh, TCA_NETEM_SLOT_DIST, obj.slot_dist.data(), obj.slot_dist.size());
	if (obj.prng_seed.has_value())
		ynl_attr_put_u64(nlh, TCA_NETEM_PRNG_SEED, obj.prng_seed.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_netem_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested)
{
	tc_netem_attrs *dst = (tc_netem_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_NETEM_CORR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->corr.assign(data, data + len);
		} else if (type == TCA_NETEM_DELAY_DIST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->delay_dist.assign(data, data + len);
		} else if (type == TCA_NETEM_REORDER) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->reorder.assign(data, data + len);
		} else if (type == TCA_NETEM_CORRUPT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->corrupt.assign(data, data + len);
		} else if (type == TCA_NETEM_LOSS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_netem_loss_attrs_nest;
			parg.data = &dst->loss.emplace();
			if (tc_netem_loss_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_NETEM_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate.assign(data, data + len);
		} else if (type == TCA_NETEM_ECN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ecn = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_NETEM_RATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->rate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_NETEM_PAD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pad = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_NETEM_LATENCY64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->latency64 = (__s64)ynl_attr_get_s64(attr);
		} else if (type == TCA_NETEM_JITTER64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->jitter64 = (__s64)ynl_attr_get_s64(attr);
		} else if (type == TCA_NETEM_SLOT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->slot.assign(data, data + len);
		} else if (type == TCA_NETEM_SLOT_DIST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->slot_dist.assign(data, data + len);
		} else if (type == TCA_NETEM_PRNG_SEED) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->prng_seed = (__u64)ynl_attr_get_u64(attr);
		}
	}

	return 0;
}

int tc_cake_stats_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			    const tc_cake_stats_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.capacity_estimate64.has_value())
		ynl_attr_put_u64(nlh, TCA_CAKE_STATS_CAPACITY_ESTIMATE64, obj.capacity_estimate64.value());
	if (obj.memory_limit.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_MEMORY_LIMIT, obj.memory_limit.value());
	if (obj.memory_used.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_MEMORY_USED, obj.memory_used.value());
	if (obj.avg_netoff.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_AVG_NETOFF, obj.avg_netoff.value());
	if (obj.min_netlen.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_MIN_NETLEN, obj.min_netlen.value());
	if (obj.max_netlen.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_MAX_NETLEN, obj.max_netlen.value());
	if (obj.min_adjlen.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_MIN_ADJLEN, obj.min_adjlen.value());
	if (obj.max_adjlen.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_MAX_ADJLEN, obj.max_adjlen.value());
	array = ynl_attr_nest_start(nlh, TCA_CAKE_STATS_TIN_STATS);
	for (unsigned int i = 0; i < obj.tin_stats.size(); i++)
		tc_cake_tin_stats_attrs_put(nlh, i, obj.tin_stats[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.deficit.has_value())
		ynl_attr_put_s32(nlh, TCA_CAKE_STATS_DEFICIT, obj.deficit.value());
	if (obj.cobalt_count.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_COBALT_COUNT, obj.cobalt_count.value());
	if (obj.dropping.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_DROPPING, obj.dropping.value());
	if (obj.drop_next_us.has_value())
		ynl_attr_put_s32(nlh, TCA_CAKE_STATS_DROP_NEXT_US, obj.drop_next_us.value());
	if (obj.p_drop.has_value())
		ynl_attr_put_u32(nlh, TCA_CAKE_STATS_P_DROP, obj.p_drop.value());
	if (obj.blue_timer_us.has_value())
		ynl_attr_put_s32(nlh, TCA_CAKE_STATS_BLUE_TIMER_US, obj.blue_timer_us.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_cake_stats_attrs_parse(struct ynl_parse_arg *yarg,
			      const struct nlattr *nested)
{
	tc_cake_stats_attrs *dst = (tc_cake_stats_attrs *)yarg->data;
	const struct nlattr *attr_tin_stats;
	unsigned int n_tin_stats = 0;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	int i;

	parg.ys = yarg->ys;

	if (dst->tin_stats.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (cake-stats-attrs.tin-stats)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CAKE_STATS_CAPACITY_ESTIMATE64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->capacity_estimate64 = (__u64)ynl_attr_get_u64(attr);
		} else if (type == TCA_CAKE_STATS_MEMORY_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->memory_limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_MEMORY_USED) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->memory_used = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_AVG_NETOFF) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->avg_netoff = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_MIN_NETLEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->min_netlen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_MAX_NETLEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->max_netlen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_MIN_ADJLEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->min_adjlen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_MAX_ADJLEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->max_adjlen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_TIN_STATS) {
			const struct nlattr *attr2;

			attr_tin_stats = attr;
		} else if (type == TCA_CAKE_STATS_DEFICIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->deficit = (__s32)ynl_attr_get_s32(attr);
		} else if (type == TCA_CAKE_STATS_COBALT_COUNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->cobalt_count = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_DROPPING) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->dropping = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_DROP_NEXT_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->drop_next_us = (__s32)ynl_attr_get_s32(attr);
		} else if (type == TCA_CAKE_STATS_P_DROP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->p_drop = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_CAKE_STATS_BLUE_TIMER_US) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->blue_timer_us = (__s32)ynl_attr_get_s32(attr);
		}
	}

	if (n_tin_stats) {
		dst->tin_stats.resize(n_tin_stats);
		i = 0;
		parg.rsp_policy = &tc_cake_tin_stats_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_tin_stats) {
			parg.data = &dst->tin_stats[i];
			if (tc_cake_tin_stats_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_flower_key_enc_opts_attrs_put(struct nlmsghdr *nlh,
				     unsigned int attr_type,
				     const tc_flower_key_enc_opts_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.geneve.has_value())
		tc_flower_key_enc_opt_geneve_attrs_put(nlh, TCA_FLOWER_KEY_ENC_OPTS_GENEVE, obj.geneve.value());
	if (obj.vxlan.has_value())
		tc_flower_key_enc_opt_vxlan_attrs_put(nlh, TCA_FLOWER_KEY_ENC_OPTS_VXLAN, obj.vxlan.value());
	if (obj.erspan.has_value())
		tc_flower_key_enc_opt_erspan_attrs_put(nlh, TCA_FLOWER_KEY_ENC_OPTS_ERSPAN, obj.erspan.value());
	if (obj.gtp.has_value())
		tc_flower_key_enc_opt_gtp_attrs_put(nlh, TCA_FLOWER_KEY_ENC_OPTS_GTP, obj.gtp.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_key_enc_opts_attrs_parse(struct ynl_parse_arg *yarg,
				       const struct nlattr *nested)
{
	tc_flower_key_enc_opts_attrs *dst = (tc_flower_key_enc_opts_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_KEY_ENC_OPTS_GENEVE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_enc_opt_geneve_attrs_nest;
			parg.data = &dst->geneve.emplace();
			if (tc_flower_key_enc_opt_geneve_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_KEY_ENC_OPTS_VXLAN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_enc_opt_vxlan_attrs_nest;
			parg.data = &dst->vxlan.emplace();
			if (tc_flower_key_enc_opt_vxlan_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_KEY_ENC_OPTS_ERSPAN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_enc_opt_erspan_attrs_nest;
			parg.data = &dst->erspan.emplace();
			if (tc_flower_key_enc_opt_erspan_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_KEY_ENC_OPTS_GTP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_enc_opt_gtp_attrs_nest;
			parg.data = &dst->gtp.emplace();
			if (tc_flower_key_enc_opt_gtp_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		}
	}

	return 0;
}

int tc_tca_gred_vq_list_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
				  const tc_tca_gred_vq_list_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	for (unsigned int i = 0; i < obj.entry.size(); i++)
		tc_tca_gred_vq_entry_attrs_put(nlh, TCA_GRED_VQ_ENTRY, obj.entry[i]);
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_tca_gred_vq_list_attrs_parse(struct ynl_parse_arg *yarg,
				    const struct nlattr *nested)
{
	tc_tca_gred_vq_list_attrs *dst = (tc_tca_gred_vq_list_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_entry = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->entry.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (tca-gred-vq-list-attrs.entry)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_GRED_VQ_ENTRY) {
			n_entry++;
		}
	}

	if (n_entry) {
		dst->entry.resize(n_entry);
		i = 0;
		parg.rsp_policy = &tc_tca_gred_vq_entry_attrs_nest;
		ynl_attr_for_each_nested(attr, nested) {
			if (ynl_attr_type(attr) == TCA_GRED_VQ_ENTRY) {
				parg.data = &dst->entry[i];
				if (tc_tca_gred_vq_entry_attrs_parse(&parg, attr))
					return YNL_PARSE_CB_ERROR;
				i++;
			}
		}
	}

	return 0;
}

int tc_taprio_sched_entry_list_put(struct nlmsghdr *nlh,
				   unsigned int attr_type,
				   const tc_taprio_sched_entry_list&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	for (unsigned int i = 0; i < obj.entry.size(); i++)
		tc_taprio_sched_entry_put(nlh, TCA_TAPRIO_SCHED_ENTRY, obj.entry[i]);
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_taprio_sched_entry_list_parse(struct ynl_parse_arg *yarg,
				     const struct nlattr *nested)
{
	tc_taprio_sched_entry_list *dst = (tc_taprio_sched_entry_list *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_entry = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->entry.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (taprio-sched-entry-list.entry)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_TAPRIO_SCHED_ENTRY) {
			n_entry++;
		}
	}

	if (n_entry) {
		dst->entry.resize(n_entry);
		i = 0;
		parg.rsp_policy = &tc_taprio_sched_entry_nest;
		ynl_attr_for_each_nested(attr, nested) {
			if (ynl_attr_type(attr) == TCA_TAPRIO_SCHED_ENTRY) {
				parg.data = &dst->entry[i];
				if (tc_taprio_sched_entry_parse(&parg, attr))
					return YNL_PARSE_CB_ERROR;
				i++;
			}
		}
	}

	return 0;
}

int tc_act_options_msg_put(struct nlmsghdr *nlh, unsigned int attr_type,
			   const tc_act_options_msg&  obj)
{
	if (obj.bpf.has_value())
		tc_act_bpf_attrs_put(nlh, TCA_ACT_OPTIONS, obj.bpf.value());
	if (obj.connmark.has_value())
		tc_act_connmark_attrs_put(nlh, TCA_ACT_OPTIONS, obj.connmark.value());
	if (obj.csum.has_value())
		tc_act_csum_attrs_put(nlh, TCA_ACT_OPTIONS, obj.csum.value());
	if (obj.ct.has_value())
		tc_act_ct_attrs_put(nlh, TCA_ACT_OPTIONS, obj.ct.value());
	if (obj.ctinfo.has_value())
		tc_act_ctinfo_attrs_put(nlh, TCA_ACT_OPTIONS, obj.ctinfo.value());
	if (obj.gact.has_value())
		tc_act_gact_attrs_put(nlh, TCA_ACT_OPTIONS, obj.gact.value());
	if (obj.gate.has_value())
		tc_act_gate_attrs_put(nlh, TCA_ACT_OPTIONS, obj.gate.value());
	if (obj.ife.has_value())
		tc_act_ife_attrs_put(nlh, TCA_ACT_OPTIONS, obj.ife.value());
	if (obj.mirred.has_value())
		tc_act_mirred_attrs_put(nlh, TCA_ACT_OPTIONS, obj.mirred.value());
	if (obj.mpls.has_value())
		tc_act_mpls_attrs_put(nlh, TCA_ACT_OPTIONS, obj.mpls.value());
	if (obj.nat.has_value())
		tc_act_nat_attrs_put(nlh, TCA_ACT_OPTIONS, obj.nat.value());
	if (obj.pedit.has_value())
		tc_act_pedit_attrs_put(nlh, TCA_ACT_OPTIONS, obj.pedit.value());
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_ACT_OPTIONS, obj.police.value());
	if (obj.sample.has_value())
		tc_act_sample_attrs_put(nlh, TCA_ACT_OPTIONS, obj.sample.value());
	if (obj.simple.has_value())
		tc_act_simple_attrs_put(nlh, TCA_ACT_OPTIONS, obj.simple.value());
	if (obj.skbedit.has_value())
		tc_act_skbedit_attrs_put(nlh, TCA_ACT_OPTIONS, obj.skbedit.value());
	if (obj.skbmod.has_value())
		tc_act_skbmod_attrs_put(nlh, TCA_ACT_OPTIONS, obj.skbmod.value());
	if (obj.tunnel_key.has_value())
		tc_act_tunnel_key_attrs_put(nlh, TCA_ACT_OPTIONS, obj.tunnel_key.value());
	if (obj.vlan.has_value())
		tc_act_vlan_attrs_put(nlh, TCA_ACT_OPTIONS, obj.vlan.value());

	return 0;
}

int tc_act_options_msg_parse(struct ynl_parse_arg *yarg,
			     const std::string& sel,
			     const struct nlattr *nested)
{
	tc_act_options_msg *dst = static_cast<tc_act_options_msg *>(yarg->data);
	const struct nlattr *attr = nested;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	if (sel != "bpf") {
		parg.rsp_policy = &tc_act_bpf_attrs_nest;
		parg.data = &dst->bpf.emplace();
		if (tc_act_bpf_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "connmark") {
		parg.rsp_policy = &tc_act_connmark_attrs_nest;
		parg.data = &dst->connmark.emplace();
		if (tc_act_connmark_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "csum") {
		parg.rsp_policy = &tc_act_csum_attrs_nest;
		parg.data = &dst->csum.emplace();
		if (tc_act_csum_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "ct") {
		parg.rsp_policy = &tc_act_ct_attrs_nest;
		parg.data = &dst->ct.emplace();
		if (tc_act_ct_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "ctinfo") {
		parg.rsp_policy = &tc_act_ctinfo_attrs_nest;
		parg.data = &dst->ctinfo.emplace();
		if (tc_act_ctinfo_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "gact") {
		parg.rsp_policy = &tc_act_gact_attrs_nest;
		parg.data = &dst->gact.emplace();
		if (tc_act_gact_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "gate") {
		parg.rsp_policy = &tc_act_gate_attrs_nest;
		parg.data = &dst->gate.emplace();
		if (tc_act_gate_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "ife") {
		parg.rsp_policy = &tc_act_ife_attrs_nest;
		parg.data = &dst->ife.emplace();
		if (tc_act_ife_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "mirred") {
		parg.rsp_policy = &tc_act_mirred_attrs_nest;
		parg.data = &dst->mirred.emplace();
		if (tc_act_mirred_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "mpls") {
		parg.rsp_policy = &tc_act_mpls_attrs_nest;
		parg.data = &dst->mpls.emplace();
		if (tc_act_mpls_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "nat") {
		parg.rsp_policy = &tc_act_nat_attrs_nest;
		parg.data = &dst->nat.emplace();
		if (tc_act_nat_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "pedit") {
		parg.rsp_policy = &tc_act_pedit_attrs_nest;
		parg.data = &dst->pedit.emplace();
		if (tc_act_pedit_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "police") {
		parg.rsp_policy = &tc_police_attrs_nest;
		parg.data = &dst->police.emplace();
		if (tc_police_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "sample") {
		parg.rsp_policy = &tc_act_sample_attrs_nest;
		parg.data = &dst->sample.emplace();
		if (tc_act_sample_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "simple") {
		parg.rsp_policy = &tc_act_simple_attrs_nest;
		parg.data = &dst->simple.emplace();
		if (tc_act_simple_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "skbedit") {
		parg.rsp_policy = &tc_act_skbedit_attrs_nest;
		parg.data = &dst->skbedit.emplace();
		if (tc_act_skbedit_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "skbmod") {
		parg.rsp_policy = &tc_act_skbmod_attrs_nest;
		parg.data = &dst->skbmod.emplace();
		if (tc_act_skbmod_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "tunnel_key") {
		parg.rsp_policy = &tc_act_tunnel_key_attrs_nest;
		parg.data = &dst->tunnel_key.emplace();
		if (tc_act_tunnel_key_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "vlan") {
		parg.rsp_policy = &tc_act_vlan_attrs_nest;
		parg.data = &dst->vlan.emplace();
		if (tc_act_vlan_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	}
	return 0;
}

int tc_tca_stats_app_msg_put(struct nlmsghdr *nlh, unsigned int attr_type,
			     const tc_tca_stats_app_msg&  obj)
{
	if (obj.cake.has_value())
		tc_cake_stats_attrs_put(nlh, TCA_XSTATS, obj.cake.value());
	if (obj.choke.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.choke.data(), obj.choke.size());
	if (obj.codel.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.codel.data(), obj.codel.size());
	if (obj.dualpi2.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.dualpi2.data(), obj.dualpi2.size());
	if (obj.fq.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.fq.data(), obj.fq.size());
	if (obj.fq_codel.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.fq_codel.data(), obj.fq_codel.size());
	if (obj.fq_pie.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.fq_pie.data(), obj.fq_pie.size());
	if (obj.hhf.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.hhf.data(), obj.hhf.size());
	if (obj.pie.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.pie.data(), obj.pie.size());
	if (obj.red.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.red.data(), obj.red.size());
	if (obj.sfb.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.sfb.data(), obj.sfb.size());
	if (obj.sfq.size() > 0)
		ynl_attr_put(nlh, TCA_XSTATS, obj.sfq.data(), obj.sfq.size());

	return 0;
}

int tc_tca_stats_app_msg_parse(struct ynl_parse_arg *yarg,
			       const std::string& sel,
			       const struct nlattr *nested)
{
	tc_tca_stats_app_msg *dst = static_cast<tc_tca_stats_app_msg *>(yarg->data);
	const struct nlattr *attr = nested;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	if (sel != "cake") {
		parg.rsp_policy = &tc_cake_stats_attrs_nest;
		parg.data = &dst->cake.emplace();
		if (tc_cake_stats_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "choke") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->choke.assign(data, data + len);
	} else if (sel != "codel") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->codel.assign(data, data + len);
	} else if (sel != "dualpi2") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->dualpi2.assign(data, data + len);
	} else if (sel != "fq") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->fq.assign(data, data + len);
	} else if (sel != "fq_codel") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->fq_codel.assign(data, data + len);
	} else if (sel != "fq_pie") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->fq_pie.assign(data, data + len);
	} else if (sel != "hhf") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->hhf.assign(data, data + len);
	} else if (sel != "pie") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->pie.assign(data, data + len);
	} else if (sel != "red") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->red.assign(data, data + len);
	} else if (sel != "sfb") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->sfb.assign(data, data + len);
	} else if (sel != "sfq") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->sfq.assign(data, data + len);
	}
	return 0;
}

int tc_tca_stats_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			   const tc_tca_stats_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.basic.size() > 0)
		ynl_attr_put(nlh, TCA_STATS_BASIC, obj.basic.data(), obj.basic.size());
	if (obj.rate_est.size() > 0)
		ynl_attr_put(nlh, TCA_STATS_RATE_EST, obj.rate_est.data(), obj.rate_est.size());
	if (obj.queue.size() > 0)
		ynl_attr_put(nlh, TCA_STATS_QUEUE, obj.queue.data(), obj.queue.size());
	if (obj.app.has_value())
		tc_tca_stats_app_msg_put(nlh, TCA_STATS_APP, obj.app.value());
	if (obj.rate_est64.size() > 0)
		ynl_attr_put(nlh, TCA_STATS_RATE_EST64, obj.rate_est64.data(), obj.rate_est64.size());
	if (obj.basic_hw.size() > 0)
		ynl_attr_put(nlh, TCA_STATS_BASIC_HW, obj.basic_hw.data(), obj.basic_hw.size());
	if (obj.pkt64.has_value())
		ynl_attr_put_u64(nlh, TCA_STATS_PKT64, obj.pkt64.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_tca_stats_attrs_parse(struct ynl_parse_arg *yarg,
			     const struct nlattr *nested,
			     const std::string& _sel_kind)
{
	tc_tca_stats_attrs *dst = (tc_tca_stats_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_STATS_BASIC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->basic.assign(data, data + len);
		} else if (type == TCA_STATS_RATE_EST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate_est.assign(data, data + len);
		} else if (type == TCA_STATS_QUEUE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->queue.assign(data, data + len);
		} else if (type == TCA_STATS_APP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_app_msg_nest;
			parg.data = &dst->app;
			if (_sel_kind.empty())
				return ynl_submsg_failed(yarg, "app", "kind");
			if (tc_tca_stats_app_msg_parse(&parg, _sel_kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STATS_RATE_EST64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate_est64.assign(data, data + len);
		} else if (type == TCA_STATS_BASIC_HW) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->basic_hw.assign(data, data + len);
		} else if (type == TCA_STATS_PKT64) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->pkt64 = (__u64)ynl_attr_get_u64(attr);
		}
	}

	return 0;
}

int tc_gred_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		      const tc_gred_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.parms.size() > 0)
		ynl_attr_put(nlh, TCA_GRED_PARMS, obj.parms.data(), obj.parms.size());
	if (obj.stab.size() > 0)
		ynl_attr_put(nlh, TCA_GRED_STAB, obj.stab.data(), obj.stab.size());
	if (obj.dps.size() > 0)
		ynl_attr_put(nlh, TCA_GRED_DPS, obj.dps.data(), obj.dps.size());
	if (obj.max_p.size() > 0)
		ynl_attr_put(nlh, TCA_GRED_MAX_P, obj.max_p.data(), obj.max_p.size());
	if (obj.limit.has_value())
		ynl_attr_put_u32(nlh, TCA_GRED_LIMIT, obj.limit.value());
	if (obj.vq_list.has_value())
		tc_tca_gred_vq_list_attrs_put(nlh, TCA_GRED_VQ_LIST, obj.vq_list.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_gred_attrs_parse(struct ynl_parse_arg *yarg,
			const struct nlattr *nested)
{
	tc_gred_attrs *dst = (tc_gred_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_GRED_PARMS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->parms.assign(data, data + len);
		} else if (type == TCA_GRED_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stab.assign(data, data + len);
		} else if (type == TCA_GRED_DPS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->dps.assign(data, data + len);
		} else if (type == TCA_GRED_MAX_P) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->max_p.assign(data, data + len);
		} else if (type == TCA_GRED_LIMIT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->limit = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_GRED_VQ_LIST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_gred_vq_list_attrs_nest;
			parg.data = &dst->vq_list.emplace();
			if (tc_tca_gred_vq_list_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		}
	}

	return 0;
}

int tc_taprio_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_taprio_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.priomap.size() > 0)
		ynl_attr_put(nlh, TCA_TAPRIO_ATTR_PRIOMAP, obj.priomap.data(), obj.priomap.size());
	if (obj.sched_entry_list.has_value())
		tc_taprio_sched_entry_list_put(nlh, TCA_TAPRIO_ATTR_SCHED_ENTRY_LIST, obj.sched_entry_list.value());
	if (obj.sched_base_time.has_value())
		ynl_attr_put_s64(nlh, TCA_TAPRIO_ATTR_SCHED_BASE_TIME, obj.sched_base_time.value());
	if (obj.sched_single_entry.has_value())
		tc_taprio_sched_entry_put(nlh, TCA_TAPRIO_ATTR_SCHED_SINGLE_ENTRY, obj.sched_single_entry.value());
	if (obj.sched_clockid.has_value())
		ynl_attr_put_s32(nlh, TCA_TAPRIO_ATTR_SCHED_CLOCKID, obj.sched_clockid.value());
	if (obj.admin_sched.size() > 0)
		ynl_attr_put(nlh, TCA_TAPRIO_ATTR_ADMIN_SCHED, obj.admin_sched.data(), obj.admin_sched.size());
	if (obj.sched_cycle_time.has_value())
		ynl_attr_put_s64(nlh, TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME, obj.sched_cycle_time.value());
	if (obj.sched_cycle_time_extension.has_value())
		ynl_attr_put_s64(nlh, TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME_EXTENSION, obj.sched_cycle_time_extension.value());
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_ATTR_FLAGS, obj.flags.value());
	if (obj.txtime_delay.has_value())
		ynl_attr_put_u32(nlh, TCA_TAPRIO_ATTR_TXTIME_DELAY, obj.txtime_delay.value());
	if (obj.tc_entry.has_value())
		tc_taprio_tc_entry_attrs_put(nlh, TCA_TAPRIO_ATTR_TC_ENTRY, obj.tc_entry.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_taprio_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_taprio_attrs *dst = (tc_taprio_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_TAPRIO_ATTR_PRIOMAP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->priomap.assign(data, data + len);
		} else if (type == TCA_TAPRIO_ATTR_SCHED_ENTRY_LIST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_taprio_sched_entry_list_nest;
			parg.data = &dst->sched_entry_list.emplace();
			if (tc_taprio_sched_entry_list_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_TAPRIO_ATTR_SCHED_BASE_TIME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sched_base_time = (__s64)ynl_attr_get_s64(attr);
		} else if (type == TCA_TAPRIO_ATTR_SCHED_SINGLE_ENTRY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_taprio_sched_entry_nest;
			parg.data = &dst->sched_single_entry.emplace();
			if (tc_taprio_sched_entry_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_TAPRIO_ATTR_SCHED_CLOCKID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sched_clockid = (__s32)ynl_attr_get_s32(attr);
		} else if (type == TCA_TAPRIO_ATTR_ADMIN_SCHED) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->admin_sched.assign(data, data + len);
		} else if (type == TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sched_cycle_time = (__s64)ynl_attr_get_s64(attr);
		} else if (type == TCA_TAPRIO_ATTR_SCHED_CYCLE_TIME_EXTENSION) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->sched_cycle_time_extension = (__s64)ynl_attr_get_s64(attr);
		} else if (type == TCA_TAPRIO_ATTR_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TAPRIO_ATTR_TXTIME_DELAY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->txtime_delay = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_TAPRIO_ATTR_TC_ENTRY) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_taprio_tc_entry_attrs_nest;
			parg.data = &dst->tc_entry.emplace();
			if (tc_taprio_tc_entry_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		}
	}

	return 0;
}

int tc_act_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_act_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_ACT_KIND, obj.kind.data());
	if (obj.options.has_value())
		tc_act_options_msg_put(nlh, TCA_ACT_OPTIONS, obj.options.value());
	if (obj.index.has_value())
		ynl_attr_put_u32(nlh, TCA_ACT_INDEX, obj.index.value());
	if (obj.stats.has_value())
		tc_tca_stats_attrs_put(nlh, TCA_ACT_STATS, obj.stats.value());
	if (obj.cookie.size() > 0)
		ynl_attr_put(nlh, TCA_ACT_COOKIE, obj.cookie.data(), obj.cookie.size());
	if (obj.flags.has_value())
		ynl_attr_put(nlh, TCA_ACT_FLAGS, &(*obj.flags), sizeof(struct nla_bitfield32));
	if (obj.hw_stats.has_value())
		ynl_attr_put(nlh, TCA_ACT_HW_STATS, &(*obj.hw_stats), sizeof(struct nla_bitfield32));
	if (obj.used_hw_stats.has_value())
		ynl_attr_put(nlh, TCA_ACT_USED_HW_STATS, &(*obj.used_hw_stats), sizeof(struct nla_bitfield32));
	if (obj.in_hw_count.has_value())
		ynl_attr_put_u32(nlh, TCA_ACT_IN_HW_COUNT, obj.in_hw_count.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_act_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested,
		       __u32 idx)
{
	tc_act_attrs *dst = (tc_act_attrs *)yarg->data;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	dst->idx = idx;

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_ACT_KIND) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->kind.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_ACT_OPTIONS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_act_options_msg_nest;
			parg.data = &dst->options;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "options", "kind");
			if (tc_act_options_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_ACT_INDEX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->index = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_ACT_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_attrs_nest;
			parg.data = &dst->stats.emplace();
			if (tc_tca_stats_attrs_parse(&parg, attr, dst->kind))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_ACT_COOKIE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->cookie.assign(data, data + len);
		} else if (type == TCA_ACT_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			memcpy(&dst->flags, ynl_attr_data(attr), sizeof(struct nla_bitfield32));
		} else if (type == TCA_ACT_HW_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			memcpy(&dst->hw_stats, ynl_attr_data(attr), sizeof(struct nla_bitfield32));
		} else if (type == TCA_ACT_USED_HW_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			memcpy(&dst->used_hw_stats, ynl_attr_data(attr), sizeof(struct nla_bitfield32));
		} else if (type == TCA_ACT_IN_HW_COUNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->in_hw_count = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return 0;
}

int tc_basic_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_basic_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_BASIC_CLASSID, obj.classid.value());
	if (obj.ematches.has_value())
		tc_ematch_attrs_put(nlh, TCA_BASIC_EMATCHES, obj.ematches.value());
	array = ynl_attr_nest_start(nlh, TCA_BASIC_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_BASIC_POLICE, obj.police.value());
	if (obj.pcnt.size() > 0)
		ynl_attr_put(nlh, TCA_BASIC_PCNT, obj.pcnt.data(), obj.pcnt.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_basic_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested)
{
	tc_basic_attrs *dst = (tc_basic_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (basic-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_BASIC_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_BASIC_EMATCHES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_ematch_attrs_nest;
			parg.data = &dst->ematches.emplace();
			if (tc_ematch_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_BASIC_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_BASIC_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_BASIC_PCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->pcnt.assign(data, data + len);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_bpf_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_bpf_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	array = ynl_attr_nest_start(nlh, TCA_BPF_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_BPF_POLICE, obj.police.value());
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_BPF_CLASSID, obj.classid.value());
	if (obj.ops_len.has_value())
		ynl_attr_put_u16(nlh, TCA_BPF_OPS_LEN, obj.ops_len.value());
	if (obj.ops.size() > 0)
		ynl_attr_put(nlh, TCA_BPF_OPS, obj.ops.data(), obj.ops.size());
	if (obj.fd.has_value())
		ynl_attr_put_u32(nlh, TCA_BPF_FD, obj.fd.value());
	if (obj.name.size() > 0)
		ynl_attr_put_str(nlh, TCA_BPF_NAME, obj.name.data());
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_BPF_FLAGS, obj.flags.value());
	if (obj.flags_gen.has_value())
		ynl_attr_put_u32(nlh, TCA_BPF_FLAGS_GEN, obj.flags_gen.value());
	if (obj.tag.size() > 0)
		ynl_attr_put(nlh, TCA_BPF_TAG, obj.tag.data(), obj.tag.size());
	if (obj.id.has_value())
		ynl_attr_put_u32(nlh, TCA_BPF_ID, obj.id.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_bpf_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_bpf_attrs *dst = (tc_bpf_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (bpf-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_BPF_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_BPF_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_BPF_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_BPF_OPS_LEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ops_len = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_BPF_OPS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ops.assign(data, data + len);
		} else if (type == TCA_BPF_FD) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fd = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_BPF_NAME) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->name.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_BPF_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_BPF_FLAGS_GEN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags_gen = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_BPF_TAG) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->tag.assign(data, data + len);
		} else if (type == TCA_BPF_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->id = (__u32)ynl_attr_get_u32(attr);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_cgroup_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_cgroup_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	array = ynl_attr_nest_start(nlh, TCA_CGROUP_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_CGROUP_POLICE, obj.police.value());
	if (obj.ematches.size() > 0)
		ynl_attr_put(nlh, TCA_CGROUP_EMATCHES, obj.ematches.data(), obj.ematches.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_cgroup_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_cgroup_attrs *dst = (tc_cgroup_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (cgroup-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_CGROUP_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_CGROUP_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_CGROUP_EMATCHES) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->ematches.assign(data, data + len);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_flower_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			const tc_flower_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_CLASSID, obj.classid.value());
	if (obj.indev.size() > 0)
		ynl_attr_put_str(nlh, TCA_FLOWER_INDEV, obj.indev.data());
	array = ynl_attr_nest_start(nlh, TCA_FLOWER_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.key_eth_dst.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ETH_DST, obj.key_eth_dst.data(), obj.key_eth_dst.size());
	if (obj.key_eth_dst_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ETH_DST_MASK, obj.key_eth_dst_mask.data(), obj.key_eth_dst_mask.size());
	if (obj.key_eth_src.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ETH_SRC, obj.key_eth_src.data(), obj.key_eth_src.size());
	if (obj.key_eth_src_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ETH_SRC_MASK, obj.key_eth_src_mask.data(), obj.key_eth_src_mask.size());
	if (obj.key_eth_type.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_ETH_TYPE, obj.key_eth_type.value());
	if (obj.key_ip_proto.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_IP_PROTO, obj.key_ip_proto.value());
	if (obj.key_ipv4_src.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_IPV4_SRC, obj.key_ipv4_src.value());
	if (obj.key_ipv4_src_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_IPV4_SRC_MASK, obj.key_ipv4_src_mask.value());
	if (obj.key_ipv4_dst.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_IPV4_DST, obj.key_ipv4_dst.value());
	if (obj.key_ipv4_dst_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_IPV4_DST_MASK, obj.key_ipv4_dst_mask.value());
	if (obj.key_ipv6_src.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_IPV6_SRC, obj.key_ipv6_src.data(), obj.key_ipv6_src.size());
	if (obj.key_ipv6_src_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_IPV6_SRC_MASK, obj.key_ipv6_src_mask.data(), obj.key_ipv6_src_mask.size());
	if (obj.key_ipv6_dst.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_IPV6_DST, obj.key_ipv6_dst.data(), obj.key_ipv6_dst.size());
	if (obj.key_ipv6_dst_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_IPV6_DST_MASK, obj.key_ipv6_dst_mask.data(), obj.key_ipv6_dst_mask.size());
	if (obj.key_tcp_src.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_TCP_SRC, obj.key_tcp_src.value());
	if (obj.key_tcp_dst.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_TCP_DST, obj.key_tcp_dst.value());
	if (obj.key_udp_src.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_UDP_SRC, obj.key_udp_src.value());
	if (obj.key_udp_dst.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_UDP_DST, obj.key_udp_dst.value());
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_FLAGS, obj.flags.value());
	if (obj.key_vlan_id.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_VLAN_ID, obj.key_vlan_id.value());
	if (obj.key_vlan_prio.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_VLAN_PRIO, obj.key_vlan_prio.value());
	if (obj.key_vlan_eth_type.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_VLAN_ETH_TYPE, obj.key_vlan_eth_type.value());
	if (obj.key_enc_key_id.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_KEY_ID, obj.key_enc_key_id.value());
	if (obj.key_enc_ipv4_src.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_IPV4_SRC, obj.key_enc_ipv4_src.value());
	if (obj.key_enc_ipv4_src_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_IPV4_SRC_MASK, obj.key_enc_ipv4_src_mask.value());
	if (obj.key_enc_ipv4_dst.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_IPV4_DST, obj.key_enc_ipv4_dst.value());
	if (obj.key_enc_ipv4_dst_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_IPV4_DST_MASK, obj.key_enc_ipv4_dst_mask.value());
	if (obj.key_enc_ipv6_src.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ENC_IPV6_SRC, obj.key_enc_ipv6_src.data(), obj.key_enc_ipv6_src.size());
	if (obj.key_enc_ipv6_src_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ENC_IPV6_SRC_MASK, obj.key_enc_ipv6_src_mask.data(), obj.key_enc_ipv6_src_mask.size());
	if (obj.key_enc_ipv6_dst.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ENC_IPV6_DST, obj.key_enc_ipv6_dst.data(), obj.key_enc_ipv6_dst.size());
	if (obj.key_enc_ipv6_dst_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ENC_IPV6_DST_MASK, obj.key_enc_ipv6_dst_mask.data(), obj.key_enc_ipv6_dst_mask.size());
	if (obj.key_tcp_src_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_TCP_SRC_MASK, obj.key_tcp_src_mask.value());
	if (obj.key_tcp_dst_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_TCP_DST_MASK, obj.key_tcp_dst_mask.value());
	if (obj.key_udp_src_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_UDP_SRC_MASK, obj.key_udp_src_mask.value());
	if (obj.key_udp_dst_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_UDP_DST_MASK, obj.key_udp_dst_mask.value());
	if (obj.key_sctp_src_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_SCTP_SRC_MASK, obj.key_sctp_src_mask.value());
	if (obj.key_sctp_dst_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_SCTP_DST_MASK, obj.key_sctp_dst_mask.value());
	if (obj.key_sctp_src.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_SCTP_SRC, obj.key_sctp_src.value());
	if (obj.key_sctp_dst.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_SCTP_DST, obj.key_sctp_dst.value());
	if (obj.key_enc_udp_src_port.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_ENC_UDP_SRC_PORT, obj.key_enc_udp_src_port.value());
	if (obj.key_enc_udp_src_port_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_ENC_UDP_SRC_PORT_MASK, obj.key_enc_udp_src_port_mask.value());
	if (obj.key_enc_udp_dst_port.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_ENC_UDP_DST_PORT, obj.key_enc_udp_dst_port.value());
	if (obj.key_enc_udp_dst_port_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_ENC_UDP_DST_PORT_MASK, obj.key_enc_udp_dst_port_mask.value());
	if (obj.key_flags.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_FLAGS, obj.key_flags.value());
	if (obj.key_flags_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_FLAGS_MASK, obj.key_flags_mask.value());
	if (obj.key_icmpv4_code.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV4_CODE, obj.key_icmpv4_code.value());
	if (obj.key_icmpv4_code_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV4_CODE_MASK, obj.key_icmpv4_code_mask.value());
	if (obj.key_icmpv4_type.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV4_TYPE, obj.key_icmpv4_type.value());
	if (obj.key_icmpv4_type_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV4_TYPE_MASK, obj.key_icmpv4_type_mask.value());
	if (obj.key_icmpv6_code.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV6_CODE, obj.key_icmpv6_code.value());
	if (obj.key_icmpv6_code_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV6_CODE_MASK, obj.key_icmpv6_code_mask.value());
	if (obj.key_icmpv6_type.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV6_TYPE, obj.key_icmpv6_type.value());
	if (obj.key_icmpv6_type_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ICMPV6_TYPE_MASK, obj.key_icmpv6_type_mask.value());
	if (obj.key_arp_sip.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ARP_SIP, obj.key_arp_sip.value());
	if (obj.key_arp_sip_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ARP_SIP_MASK, obj.key_arp_sip_mask.value());
	if (obj.key_arp_tip.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ARP_TIP, obj.key_arp_tip.value());
	if (obj.key_arp_tip_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ARP_TIP_MASK, obj.key_arp_tip_mask.value());
	if (obj.key_arp_op.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ARP_OP, obj.key_arp_op.value());
	if (obj.key_arp_op_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ARP_OP_MASK, obj.key_arp_op_mask.value());
	if (obj.key_arp_sha.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ARP_SHA, obj.key_arp_sha.data(), obj.key_arp_sha.size());
	if (obj.key_arp_sha_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ARP_SHA_MASK, obj.key_arp_sha_mask.data(), obj.key_arp_sha_mask.size());
	if (obj.key_arp_tha.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ARP_THA, obj.key_arp_tha.data(), obj.key_arp_tha.size());
	if (obj.key_arp_tha_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_ARP_THA_MASK, obj.key_arp_tha_mask.data(), obj.key_arp_tha_mask.size());
	if (obj.key_mpls_ttl.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_TTL, obj.key_mpls_ttl.value());
	if (obj.key_mpls_bos.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_BOS, obj.key_mpls_bos.value());
	if (obj.key_mpls_tc.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_MPLS_TC, obj.key_mpls_tc.value());
	if (obj.key_mpls_label.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_MPLS_LABEL, obj.key_mpls_label.value());
	if (obj.key_tcp_flags.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_TCP_FLAGS, obj.key_tcp_flags.value());
	if (obj.key_tcp_flags_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_TCP_FLAGS_MASK, obj.key_tcp_flags_mask.value());
	if (obj.key_ip_tos.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_IP_TOS, obj.key_ip_tos.value());
	if (obj.key_ip_tos_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_IP_TOS_MASK, obj.key_ip_tos_mask.value());
	if (obj.key_ip_ttl.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_IP_TTL, obj.key_ip_ttl.value());
	if (obj.key_ip_ttl_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_IP_TTL_MASK, obj.key_ip_ttl_mask.value());
	if (obj.key_cvlan_id.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_CVLAN_ID, obj.key_cvlan_id.value());
	if (obj.key_cvlan_prio.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_CVLAN_PRIO, obj.key_cvlan_prio.value());
	if (obj.key_cvlan_eth_type.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_CVLAN_ETH_TYPE, obj.key_cvlan_eth_type.value());
	if (obj.key_enc_ip_tos.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_IP_TOS, obj.key_enc_ip_tos.value());
	if (obj.key_enc_ip_tos_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_IP_TOS_MASK, obj.key_enc_ip_tos_mask.value());
	if (obj.key_enc_ip_ttl.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_IP_TTL, obj.key_enc_ip_ttl.value());
	if (obj.key_enc_ip_ttl_mask.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_ENC_IP_TTL_MASK, obj.key_enc_ip_ttl_mask.value());
	if (obj.key_enc_opts.has_value())
		tc_flower_key_enc_opts_attrs_put(nlh, TCA_FLOWER_KEY_ENC_OPTS, obj.key_enc_opts.value());
	if (obj.key_enc_opts_mask.has_value())
		tc_flower_key_enc_opts_attrs_put(nlh, TCA_FLOWER_KEY_ENC_OPTS_MASK, obj.key_enc_opts_mask.value());
	if (obj.in_hw_count.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_IN_HW_COUNT, obj.in_hw_count.value());
	if (obj.key_port_src_min.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_PORT_SRC_MIN, obj.key_port_src_min.value());
	if (obj.key_port_src_max.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_PORT_SRC_MAX, obj.key_port_src_max.value());
	if (obj.key_port_dst_min.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_PORT_DST_MIN, obj.key_port_dst_min.value());
	if (obj.key_port_dst_max.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_PORT_DST_MAX, obj.key_port_dst_max.value());
	if (obj.key_ct_state.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_CT_STATE, obj.key_ct_state.value());
	if (obj.key_ct_state_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_CT_STATE_MASK, obj.key_ct_state_mask.value());
	if (obj.key_ct_zone.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_CT_ZONE, obj.key_ct_zone.value());
	if (obj.key_ct_zone_mask.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_CT_ZONE_MASK, obj.key_ct_zone_mask.value());
	if (obj.key_ct_mark.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_CT_MARK, obj.key_ct_mark.value());
	if (obj.key_ct_mark_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_CT_MARK_MASK, obj.key_ct_mark_mask.value());
	if (obj.key_ct_labels.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_CT_LABELS, obj.key_ct_labels.data(), obj.key_ct_labels.size());
	if (obj.key_ct_labels_mask.size() > 0)
		ynl_attr_put(nlh, TCA_FLOWER_KEY_CT_LABELS_MASK, obj.key_ct_labels_mask.data(), obj.key_ct_labels_mask.size());
	if (obj.key_mpls_opts.has_value())
		tc_flower_key_mpls_opt_attrs_put(nlh, TCA_FLOWER_KEY_MPLS_OPTS, obj.key_mpls_opts.value());
	if (obj.key_hash.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_HASH, obj.key_hash.value());
	if (obj.key_hash_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_HASH_MASK, obj.key_hash_mask.value());
	if (obj.key_num_of_vlans.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_KEY_NUM_OF_VLANS, obj.key_num_of_vlans.value());
	if (obj.key_pppoe_sid.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_PPPOE_SID, obj.key_pppoe_sid.value());
	if (obj.key_ppp_proto.has_value())
		ynl_attr_put_u16(nlh, TCA_FLOWER_KEY_PPP_PROTO, obj.key_ppp_proto.value());
	if (obj.key_l2tpv3_sid.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_L2TPV3_SID, obj.key_l2tpv3_sid.value());
	if (obj.l2_miss.has_value())
		ynl_attr_put_u8(nlh, TCA_FLOWER_L2_MISS, obj.l2_miss.value());
	if (obj.key_cfm.has_value())
		tc_flower_key_cfm_attrs_put(nlh, TCA_FLOWER_KEY_CFM, obj.key_cfm.value());
	if (obj.key_spi.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_SPI, obj.key_spi.value());
	if (obj.key_spi_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_SPI_MASK, obj.key_spi_mask.value());
	if (obj.key_enc_flags.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_FLAGS, obj.key_enc_flags.value());
	if (obj.key_enc_flags_mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FLOWER_KEY_ENC_FLAGS_MASK, obj.key_enc_flags_mask.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_flower_attrs_parse(struct ynl_parse_arg *yarg,
			  const struct nlattr *nested)
{
	tc_flower_attrs *dst = (tc_flower_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (flower-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FLOWER_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_INDEV) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->indev.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_FLOWER_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_FLOWER_KEY_ETH_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_eth_dst.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ETH_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_eth_dst_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ETH_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_eth_src.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ETH_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_eth_src_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ETH_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_eth_type = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_IP_PROTO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ip_proto = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_IPV4_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ipv4_src = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_IPV4_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ipv4_src_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_IPV4_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ipv4_dst = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_IPV4_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ipv4_dst_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_IPV6_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ipv6_src.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_IPV6_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ipv6_src_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_IPV6_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ipv6_dst.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_IPV6_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ipv6_dst_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_TCP_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_tcp_src = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_TCP_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_tcp_dst = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_UDP_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_udp_src = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_UDP_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_udp_dst = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_VLAN_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_vlan_id = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_VLAN_PRIO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_vlan_prio = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_VLAN_ETH_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_vlan_eth_type = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_KEY_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_key_id = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV4_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ipv4_src = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV4_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ipv4_src_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV4_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ipv4_dst = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV4_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ipv4_dst_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV6_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_enc_ipv6_src.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV6_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_enc_ipv6_src_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV6_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_enc_ipv6_dst.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ENC_IPV6_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_enc_ipv6_dst_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_TCP_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_tcp_src_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_TCP_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_tcp_dst_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_UDP_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_udp_src_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_UDP_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_udp_dst_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_SCTP_SRC_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_sctp_src_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_SCTP_DST_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_sctp_dst_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_SCTP_SRC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_sctp_src = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_SCTP_DST) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_sctp_dst = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_UDP_SRC_PORT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_udp_src_port = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_UDP_SRC_PORT_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_udp_src_port_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_UDP_DST_PORT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_udp_dst_port = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_UDP_DST_PORT_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_udp_dst_port_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_FLAGS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_flags_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV4_CODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv4_code = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV4_CODE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv4_code_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV4_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv4_type = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV4_TYPE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv4_type_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV6_CODE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv6_code = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV6_CODE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv6_code_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV6_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv6_type = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ICMPV6_TYPE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_icmpv6_type_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_SIP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_arp_sip = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_SIP_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_arp_sip_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_TIP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_arp_tip = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_TIP_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_arp_tip_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_OP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_arp_op = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_OP_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_arp_op_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ARP_SHA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_arp_sha.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ARP_SHA_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_arp_sha_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ARP_THA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_arp_tha.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_ARP_THA_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_arp_tha_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_MPLS_TTL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_mpls_ttl = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_BOS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_mpls_bos = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_TC) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_mpls_tc = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_MPLS_LABEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_mpls_label = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_TCP_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_tcp_flags = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_TCP_FLAGS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_tcp_flags_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_IP_TOS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ip_tos = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_IP_TOS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ip_tos_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_IP_TTL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ip_ttl = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_IP_TTL_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ip_ttl_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_CVLAN_ID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_cvlan_id = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_CVLAN_PRIO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_cvlan_prio = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_CVLAN_ETH_TYPE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_cvlan_eth_type = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IP_TOS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ip_tos = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IP_TOS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ip_tos_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IP_TTL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ip_ttl = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_IP_TTL_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_ip_ttl_mask = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_OPTS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_enc_opts_attrs_nest;
			parg.data = &dst->key_enc_opts.emplace();
			if (tc_flower_key_enc_opts_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_KEY_ENC_OPTS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_enc_opts_attrs_nest;
			parg.data = &dst->key_enc_opts_mask.emplace();
			if (tc_flower_key_enc_opts_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_IN_HW_COUNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->in_hw_count = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_PORT_SRC_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_port_src_min = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_PORT_SRC_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_port_src_max = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_PORT_DST_MIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_port_dst_min = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_PORT_DST_MAX) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_port_dst_max = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_CT_STATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ct_state = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_CT_STATE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ct_state_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_CT_ZONE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ct_zone = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_CT_ZONE_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ct_zone_mask = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_CT_MARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ct_mark = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_CT_MARK_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ct_mark_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_CT_LABELS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ct_labels.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_CT_LABELS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->key_ct_labels_mask.assign(data, data + len);
		} else if (type == TCA_FLOWER_KEY_MPLS_OPTS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_mpls_opt_attrs_nest;
			parg.data = &dst->key_mpls_opts.emplace();
			if (tc_flower_key_mpls_opt_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_KEY_HASH) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_hash = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_HASH_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_hash_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_NUM_OF_VLANS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_num_of_vlans = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_PPPOE_SID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_pppoe_sid = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_PPP_PROTO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_ppp_proto = (__u16)ynl_attr_get_u16(attr);
		} else if (type == TCA_FLOWER_KEY_L2TPV3_SID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_l2tpv3_sid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_L2_MISS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->l2_miss = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_FLOWER_KEY_CFM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_flower_key_cfm_attrs_nest;
			parg.data = &dst->key_cfm.emplace();
			if (tc_flower_key_cfm_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FLOWER_KEY_SPI) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_spi = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_SPI_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_spi_mask = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FLOWER_KEY_ENC_FLAGS_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->key_enc_flags_mask = (__u32)ynl_attr_get_u32(attr);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_fw_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		    const tc_fw_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_FW_CLASSID, obj.classid.value());
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_FW_POLICE, obj.police.value());
	if (obj.indev.size() > 0)
		ynl_attr_put_str(nlh, TCA_FW_INDEV, obj.indev.data());
	array = ynl_attr_nest_start(nlh, TCA_FW_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.mask.has_value())
		ynl_attr_put_u32(nlh, TCA_FW_MASK, obj.mask.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_fw_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_fw_attrs *dst = (tc_fw_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (fw-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_FW_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_FW_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_FW_INDEV) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->indev.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_FW_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_FW_MASK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->mask = (__u32)ynl_attr_get_u32(attr);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_matchall_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
			  const tc_matchall_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_MATCHALL_CLASSID, obj.classid.value());
	array = ynl_attr_nest_start(nlh, TCA_MATCHALL_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_MATCHALL_FLAGS, obj.flags.value());
	if (obj.pcnt.size() > 0)
		ynl_attr_put(nlh, TCA_MATCHALL_PCNT, obj.pcnt.data(), obj.pcnt.size());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_matchall_attrs_parse(struct ynl_parse_arg *yarg,
			    const struct nlattr *nested)
{
	tc_matchall_attrs *dst = (tc_matchall_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (matchall-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_MATCHALL_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_MATCHALL_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_MATCHALL_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_MATCHALL_PCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->pcnt.assign(data, data + len);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_route_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_route_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_ROUTE4_CLASSID, obj.classid.value());
	if (obj.to.has_value())
		ynl_attr_put_u32(nlh, TCA_ROUTE4_TO, obj.to.value());
	if (obj.from.has_value())
		ynl_attr_put_u32(nlh, TCA_ROUTE4_FROM, obj.from.value());
	if (obj.iif.has_value())
		ynl_attr_put_u32(nlh, TCA_ROUTE4_IIF, obj.iif.value());
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_ROUTE4_POLICE, obj.police.value());
	array = ynl_attr_nest_start(nlh, TCA_ROUTE4_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_route_attrs_parse(struct ynl_parse_arg *yarg,
			 const struct nlattr *nested)
{
	tc_route_attrs *dst = (tc_route_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (route-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_ROUTE4_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_ROUTE4_TO) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->to = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_ROUTE4_FROM) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->from = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_ROUTE4_IIF) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->iif = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_ROUTE4_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_ROUTE4_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_u32_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_u32_attrs&  obj)
{
	struct nlattr *array;
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.classid.has_value())
		ynl_attr_put_u32(nlh, TCA_U32_CLASSID, obj.classid.value());
	if (obj.hash.has_value())
		ynl_attr_put_u32(nlh, TCA_U32_HASH, obj.hash.value());
	if (obj.link.has_value())
		ynl_attr_put_u32(nlh, TCA_U32_LINK, obj.link.value());
	if (obj.divisor.has_value())
		ynl_attr_put_u32(nlh, TCA_U32_DIVISOR, obj.divisor.value());
	if (obj.sel.size() > 0)
		ynl_attr_put(nlh, TCA_U32_SEL, obj.sel.data(), obj.sel.size());
	if (obj.police.has_value())
		tc_police_attrs_put(nlh, TCA_U32_POLICE, obj.police.value());
	array = ynl_attr_nest_start(nlh, TCA_U32_ACT);
	for (unsigned int i = 0; i < obj.act.size(); i++)
		tc_act_attrs_put(nlh, i, obj.act[i]);
	ynl_attr_nest_end(nlh, array);
	if (obj.indev.size() > 0)
		ynl_attr_put_str(nlh, TCA_U32_INDEV, obj.indev.data());
	if (obj.pcnt.size() > 0)
		ynl_attr_put(nlh, TCA_U32_PCNT, obj.pcnt.data(), obj.pcnt.size());
	if (obj.mark.size() > 0)
		ynl_attr_put(nlh, TCA_U32_MARK, obj.mark.data(), obj.mark.size());
	if (obj.flags.has_value())
		ynl_attr_put_u32(nlh, TCA_U32_FLAGS, obj.flags.value());
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_u32_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_u32_attrs *dst = (tc_u32_attrs *)yarg->data;
	const struct nlattr *attr_act;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	unsigned int n_act = 0;
	int i;

	parg.ys = yarg->ys;

	if (dst->act.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (u32-attrs.act)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_U32_CLASSID) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->classid = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_U32_HASH) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->hash = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_U32_LINK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->link = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_U32_DIVISOR) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->divisor = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_U32_SEL) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->sel.assign(data, data + len);
		} else if (type == TCA_U32_POLICE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_police_attrs_nest;
			parg.data = &dst->police.emplace();
			if (tc_police_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_U32_ACT) {
			const struct nlattr *attr2;

			attr_act = attr;
		} else if (type == TCA_U32_INDEV) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->indev.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_U32_PCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->pcnt.assign(data, data + len);
		} else if (type == TCA_U32_MARK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->mark.assign(data, data + len);
		} else if (type == TCA_U32_FLAGS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->flags = (__u32)ynl_attr_get_u32(attr);
		}
	}

	if (n_act) {
		dst->act.resize(n_act);
		i = 0;
		parg.rsp_policy = &tc_act_attrs_nest;
		ynl_attr_for_each_nested(attr, attr_act) {
			parg.data = &dst->act[i];
			if (tc_act_attrs_parse(&parg, attr, ynl_attr_type(attr)))
				return YNL_PARSE_CB_ERROR;
			i++;
		}
	}

	return 0;
}

int tc_ets_attrs_put(struct nlmsghdr *nlh, unsigned int attr_type,
		     const tc_ets_attrs&  obj)
{
	struct nlattr *nest;

	nest = ynl_attr_nest_start(nlh, attr_type);
	if (obj.nbands.has_value())
		ynl_attr_put_u8(nlh, TCA_ETS_NBANDS, obj.nbands.value());
	if (obj.nstrict.has_value())
		ynl_attr_put_u8(nlh, TCA_ETS_NSTRICT, obj.nstrict.value());
	if (obj.quanta)
		tc_ets_attrs_put(nlh, TCA_ETS_QUANTA, *obj.quanta);
	for (unsigned int i = 0; i < obj.quanta_band.size(); i++)
		ynl_attr_put_u32(nlh, TCA_ETS_QUANTA_BAND, obj.quanta_band[i]);
	if (obj.priomap)
		tc_ets_attrs_put(nlh, TCA_ETS_PRIOMAP, *obj.priomap);
	for (unsigned int i = 0; i < obj.priomap_band.size(); i++)
		ynl_attr_put_u8(nlh, TCA_ETS_PRIOMAP_BAND, obj.priomap_band[i]);
	ynl_attr_nest_end(nlh, nest);

	return 0;
}

int tc_ets_attrs_parse(struct ynl_parse_arg *yarg, const struct nlattr *nested)
{
	tc_ets_attrs *dst = (tc_ets_attrs *)yarg->data;
	unsigned int n_priomap_band = 0;
	unsigned int n_quanta_band = 0;
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	int i;

	parg.ys = yarg->ys;

	if (dst->priomap_band.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (ets-attrs.priomap-band)");
	if (dst->quanta_band.size() > 0)
		return ynl_error_parse(yarg, "attribute already present (ets-attrs.quanta-band)");

	ynl_attr_for_each_nested(attr, nested) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_ETS_NBANDS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nbands = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_ETS_NSTRICT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->nstrict = (__u8)ynl_attr_get_u8(attr);
		} else if (type == TCA_ETS_QUANTA) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_ets_attrs_nest;
			dst->quanta = std::make_unique<tc_ets_attrs>();
			parg.data = dst->quanta.get();
			if (tc_ets_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_ETS_QUANTA_BAND) {
			n_quanta_band++;
		} else if (type == TCA_ETS_PRIOMAP) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_ets_attrs_nest;
			dst->priomap = std::make_unique<tc_ets_attrs>();
			parg.data = dst->priomap.get();
			if (tc_ets_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_ETS_PRIOMAP_BAND) {
			n_priomap_band++;
		}
	}

	if (n_priomap_band) {
		dst->priomap_band.resize(n_priomap_band);
		i = 0;
		ynl_attr_for_each_nested(attr, nested) {
			if (ynl_attr_type(attr) == TCA_ETS_PRIOMAP_BAND) {
				dst->priomap_band[i] = ynl_attr_get_u8(attr);
				i++;
			}
		}
	}
	if (n_quanta_band) {
		dst->quanta_band.resize(n_quanta_band);
		i = 0;
		ynl_attr_for_each_nested(attr, nested) {
			if (ynl_attr_type(attr) == TCA_ETS_QUANTA_BAND) {
				dst->quanta_band[i] = ynl_attr_get_u32(attr);
				i++;
			}
		}
	}

	return 0;
}

int tc_options_msg_put(struct nlmsghdr *nlh, unsigned int attr_type,
		       const tc_options_msg&  obj)
{
	if (obj.basic.has_value())
		tc_basic_attrs_put(nlh, TCA_OPTIONS, obj.basic.value());
	if (obj.bpf.has_value())
		tc_bpf_attrs_put(nlh, TCA_OPTIONS, obj.bpf.value());
	if (obj.bfifo.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.bfifo.data(), obj.bfifo.size());
	if (obj.cake.has_value())
		tc_cake_attrs_put(nlh, TCA_OPTIONS, obj.cake.value());
	if (obj.cbs.has_value())
		tc_cbs_attrs_put(nlh, TCA_OPTIONS, obj.cbs.value());
	if (obj.cgroup.has_value())
		tc_cgroup_attrs_put(nlh, TCA_OPTIONS, obj.cgroup.value());
	if (obj.choke.has_value())
		tc_choke_attrs_put(nlh, TCA_OPTIONS, obj.choke.value());
	if (obj.clsact)
		ynl_attr_put(nlh, TCA_OPTIONS, NULL, 0);
	if (obj.codel.has_value())
		tc_codel_attrs_put(nlh, TCA_OPTIONS, obj.codel.value());
	if (obj.drr.has_value())
		tc_drr_attrs_put(nlh, TCA_OPTIONS, obj.drr.value());
	if (obj.dualpi2.has_value())
		tc_dualpi2_attrs_put(nlh, TCA_OPTIONS, obj.dualpi2.value());
	if (obj.etf.has_value())
		tc_etf_attrs_put(nlh, TCA_OPTIONS, obj.etf.value());
	if (obj.ets)
		tc_ets_attrs_put(nlh, TCA_OPTIONS, *obj.ets);
	if (obj.flow.has_value())
		tc_flow_attrs_put(nlh, TCA_OPTIONS, obj.flow.value());
	if (obj.flower.has_value())
		tc_flower_attrs_put(nlh, TCA_OPTIONS, obj.flower.value());
	if (obj.fq.has_value())
		tc_fq_attrs_put(nlh, TCA_OPTIONS, obj.fq.value());
	if (obj.fq_codel.has_value())
		tc_fq_codel_attrs_put(nlh, TCA_OPTIONS, obj.fq_codel.value());
	if (obj.fq_pie.has_value())
		tc_fq_pie_attrs_put(nlh, TCA_OPTIONS, obj.fq_pie.value());
	if (obj.fw.has_value())
		tc_fw_attrs_put(nlh, TCA_OPTIONS, obj.fw.value());
	if (obj.gred.has_value())
		tc_gred_attrs_put(nlh, TCA_OPTIONS, obj.gred.value());
	if (obj.hfsc.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.hfsc.data(), obj.hfsc.size());
	if (obj.hhf.has_value())
		tc_hhf_attrs_put(nlh, TCA_OPTIONS, obj.hhf.value());
	if (obj.htb.has_value())
		tc_htb_attrs_put(nlh, TCA_OPTIONS, obj.htb.value());
	if (obj.ingress)
		ynl_attr_put(nlh, TCA_OPTIONS, NULL, 0);
	if (obj.matchall.has_value())
		tc_matchall_attrs_put(nlh, TCA_OPTIONS, obj.matchall.value());
	if (obj.mq)
		ynl_attr_put(nlh, TCA_OPTIONS, NULL, 0);
	if (obj.mqprio.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.mqprio.data(), obj.mqprio.size());
	if (obj.multiq.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.multiq.data(), obj.multiq.size());
	if (obj.netem.has_value())
		tc_netem_attrs_put(nlh, TCA_OPTIONS, obj.netem.value());
	if (obj.pfifo.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.pfifo.data(), obj.pfifo.size());
	if (obj.pfifo_fast.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.pfifo_fast.data(), obj.pfifo_fast.size());
	if (obj.pfifo_head_drop.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.pfifo_head_drop.data(), obj.pfifo_head_drop.size());
	if (obj.pie.has_value())
		tc_pie_attrs_put(nlh, TCA_OPTIONS, obj.pie.value());
	if (obj.plug.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.plug.data(), obj.plug.size());
	if (obj.prio.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.prio.data(), obj.prio.size());
	if (obj.qfq.has_value())
		tc_qfq_attrs_put(nlh, TCA_OPTIONS, obj.qfq.value());
	if (obj.red.has_value())
		tc_red_attrs_put(nlh, TCA_OPTIONS, obj.red.value());
	if (obj.route.has_value())
		tc_route_attrs_put(nlh, TCA_OPTIONS, obj.route.value());
	if (obj.sfb.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.sfb.data(), obj.sfb.size());
	if (obj.sfq.size() > 0)
		ynl_attr_put(nlh, TCA_OPTIONS, obj.sfq.data(), obj.sfq.size());
	if (obj.taprio.has_value())
		tc_taprio_attrs_put(nlh, TCA_OPTIONS, obj.taprio.value());
	if (obj.tbf.has_value())
		tc_tbf_attrs_put(nlh, TCA_OPTIONS, obj.tbf.value());
	if (obj.u32.has_value())
		tc_u32_attrs_put(nlh, TCA_OPTIONS, obj.u32.value());

	return 0;
}

int tc_options_msg_parse(struct ynl_parse_arg *yarg, const std::string& sel,
			 const struct nlattr *nested)
{
	tc_options_msg *dst = static_cast<tc_options_msg *>(yarg->data);
	const struct nlattr *attr = nested;
	struct ynl_parse_arg parg;

	parg.ys = yarg->ys;

	if (sel != "basic") {
		parg.rsp_policy = &tc_basic_attrs_nest;
		parg.data = &dst->basic.emplace();
		if (tc_basic_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "bpf") {
		parg.rsp_policy = &tc_bpf_attrs_nest;
		parg.data = &dst->bpf.emplace();
		if (tc_bpf_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "bfifo") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->bfifo.assign(data, data + len);
	} else if (sel != "cake") {
		parg.rsp_policy = &tc_cake_attrs_nest;
		parg.data = &dst->cake.emplace();
		if (tc_cake_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "cbs") {
		parg.rsp_policy = &tc_cbs_attrs_nest;
		parg.data = &dst->cbs.emplace();
		if (tc_cbs_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "cgroup") {
		parg.rsp_policy = &tc_cgroup_attrs_nest;
		parg.data = &dst->cgroup.emplace();
		if (tc_cgroup_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "choke") {
		parg.rsp_policy = &tc_choke_attrs_nest;
		parg.data = &dst->choke.emplace();
		if (tc_choke_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "clsact") {
	} else if (sel != "codel") {
		parg.rsp_policy = &tc_codel_attrs_nest;
		parg.data = &dst->codel.emplace();
		if (tc_codel_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "drr") {
		parg.rsp_policy = &tc_drr_attrs_nest;
		parg.data = &dst->drr.emplace();
		if (tc_drr_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "dualpi2") {
		parg.rsp_policy = &tc_dualpi2_attrs_nest;
		parg.data = &dst->dualpi2.emplace();
		if (tc_dualpi2_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "etf") {
		parg.rsp_policy = &tc_etf_attrs_nest;
		parg.data = &dst->etf.emplace();
		if (tc_etf_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "ets") {
		parg.rsp_policy = &tc_ets_attrs_nest;
		dst->ets = std::make_unique<tc_ets_attrs>();
		parg.data = dst->ets.get();
		if (tc_ets_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "flow") {
		parg.rsp_policy = &tc_flow_attrs_nest;
		parg.data = &dst->flow.emplace();
		if (tc_flow_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "flower") {
		parg.rsp_policy = &tc_flower_attrs_nest;
		parg.data = &dst->flower.emplace();
		if (tc_flower_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "fq") {
		parg.rsp_policy = &tc_fq_attrs_nest;
		parg.data = &dst->fq.emplace();
		if (tc_fq_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "fq_codel") {
		parg.rsp_policy = &tc_fq_codel_attrs_nest;
		parg.data = &dst->fq_codel.emplace();
		if (tc_fq_codel_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "fq_pie") {
		parg.rsp_policy = &tc_fq_pie_attrs_nest;
		parg.data = &dst->fq_pie.emplace();
		if (tc_fq_pie_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "fw") {
		parg.rsp_policy = &tc_fw_attrs_nest;
		parg.data = &dst->fw.emplace();
		if (tc_fw_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "gred") {
		parg.rsp_policy = &tc_gred_attrs_nest;
		parg.data = &dst->gred.emplace();
		if (tc_gred_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "hfsc") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->hfsc.assign(data, data + len);
	} else if (sel != "hhf") {
		parg.rsp_policy = &tc_hhf_attrs_nest;
		parg.data = &dst->hhf.emplace();
		if (tc_hhf_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "htb") {
		parg.rsp_policy = &tc_htb_attrs_nest;
		parg.data = &dst->htb.emplace();
		if (tc_htb_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "ingress") {
	} else if (sel != "matchall") {
		parg.rsp_policy = &tc_matchall_attrs_nest;
		parg.data = &dst->matchall.emplace();
		if (tc_matchall_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "mq") {
	} else if (sel != "mqprio") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->mqprio.assign(data, data + len);
	} else if (sel != "multiq") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->multiq.assign(data, data + len);
	} else if (sel != "netem") {
		parg.rsp_policy = &tc_netem_attrs_nest;
		parg.data = &dst->netem.emplace();
		if (tc_netem_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "pfifo") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->pfifo.assign(data, data + len);
	} else if (sel != "pfifo_fast") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->pfifo_fast.assign(data, data + len);
	} else if (sel != "pfifo_head_drop") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->pfifo_head_drop.assign(data, data + len);
	} else if (sel != "pie") {
		parg.rsp_policy = &tc_pie_attrs_nest;
		parg.data = &dst->pie.emplace();
		if (tc_pie_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "plug") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->plug.assign(data, data + len);
	} else if (sel != "prio") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->prio.assign(data, data + len);
	} else if (sel != "qfq") {
		parg.rsp_policy = &tc_qfq_attrs_nest;
		parg.data = &dst->qfq.emplace();
		if (tc_qfq_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "red") {
		parg.rsp_policy = &tc_red_attrs_nest;
		parg.data = &dst->red.emplace();
		if (tc_red_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "route") {
		parg.rsp_policy = &tc_route_attrs_nest;
		parg.data = &dst->route.emplace();
		if (tc_route_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "sfb") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->sfb.assign(data, data + len);
	} else if (sel != "sfq") {
		unsigned int len = ynl_attr_data_len(attr);
		__u8 *data = (__u8*)ynl_attr_data(attr);
		dst->sfq.assign(data, data + len);
	} else if (sel != "taprio") {
		parg.rsp_policy = &tc_taprio_attrs_nest;
		parg.data = &dst->taprio.emplace();
		if (tc_taprio_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "tbf") {
		parg.rsp_policy = &tc_tbf_attrs_nest;
		parg.data = &dst->tbf.emplace();
		if (tc_tbf_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	} else if (sel != "u32") {
		parg.rsp_policy = &tc_u32_attrs_nest;
		parg.data = &dst->u32.emplace();
		if (tc_u32_attrs_parse(&parg, attr))
			return YNL_PARSE_CB_ERROR;
	}
	return 0;
}

/* ============== RTM_NEWQDISC ============== */
/* RTM_NEWQDISC - do */
int tc_newqdisc(ynl_cpp::ynl_socket& ys, tc_newqdisc_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_NEWQDISC, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_KIND, req.kind.data());
	if (req.options.has_value())
		tc_options_msg_put(nlh, TCA_OPTIONS, req.options.value());
	if (req.rate.size() > 0)
		ynl_attr_put(nlh, TCA_RATE, req.rate.data(), req.rate.size());
	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.ingress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_INGRESS_BLOCK, req.ingress_block.value());
	if (req.egress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_EGRESS_BLOCK, req.egress_block.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_DELQDISC ============== */
/* RTM_DELQDISC - do */
int tc_delqdisc(ynl_cpp::ynl_socket& ys, tc_delqdisc_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_DELQDISC, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_GETQDISC ============== */
/* RTM_GETQDISC - do */
int tc_getqdisc_rsp_parse(const struct nlmsghdr *nlh,
			  struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	tc_getqdisc_rsp *dst;
	void *hdr;

	dst = (tc_getqdisc_rsp*)yarg->data;
	parg.ys = yarg->ys;

	hdr = ynl_nlmsg_data_offset(nlh, sizeof(struct genlmsghdr));
	memcpy(&dst->_hdr, hdr, sizeof(struct tcmsg));

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_KIND) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->kind.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_OPTIONS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_options_msg_nest;
			parg.data = &dst->options;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "options", "kind");
			if (tc_options_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stats.assign(data, data + len);
		} else if (type == TCA_XSTATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_app_msg_nest;
			parg.data = &dst->xstats;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "xstats", "kind");
			if (tc_tca_stats_app_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate.assign(data, data + len);
		} else if (type == TCA_FCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fcnt = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_STATS2) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_attrs_nest;
			parg.data = &dst->stats2.emplace();
			if (tc_tca_stats_attrs_parse(&parg, attr, dst->kind))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stab_attrs_nest;
			parg.data = &dst->stab.emplace();
			if (tc_tca_stab_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_CHAIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->chain = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_INGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ingress_block = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_EGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->egress_block = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<tc_getqdisc_rsp>
tc_getqdisc(ynl_cpp::ynl_socket& ys, tc_getqdisc_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<tc_getqdisc_rsp> rsp;
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_GETQDISC, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;
	yrs.yarg.rsp_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.dump_invisible)
		ynl_attr_put(nlh, TCA_DUMP_INVISIBLE, NULL, 0);

	rsp.reset(new tc_getqdisc_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = tc_getqdisc_rsp_parse;
	yrs.rsp_cmd = 36;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* RTM_GETQDISC - dump */
std::unique_ptr<tc_getqdisc_list>
tc_getqdisc_dump(ynl_cpp::ynl_socket& ys, tc_getqdisc_req_dump& req)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	auto ret = std::make_unique<tc_getqdisc_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &tc_attrs_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void* {return &(static_cast<tc_getqdisc_list*>(arg)->objs.emplace_back());};
	yds.cb = tc_getqdisc_rsp_parse;
	yds.rsp_cmd = 36;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, RTM_GETQDISC, 1);
	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	if (req.dump_invisible)
		ynl_attr_put(nlh, TCA_DUMP_INVISIBLE, NULL, 0);

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* ============== RTM_NEWTCLASS ============== */
/* RTM_NEWTCLASS - do */
int tc_newtclass(ynl_cpp::ynl_socket& ys, tc_newtclass_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_NEWTCLASS, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_KIND, req.kind.data());
	if (req.options.has_value())
		tc_options_msg_put(nlh, TCA_OPTIONS, req.options.value());
	if (req.rate.size() > 0)
		ynl_attr_put(nlh, TCA_RATE, req.rate.data(), req.rate.size());
	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.ingress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_INGRESS_BLOCK, req.ingress_block.value());
	if (req.egress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_EGRESS_BLOCK, req.egress_block.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_DELTCLASS ============== */
/* RTM_DELTCLASS - do */
int tc_deltclass(ynl_cpp::ynl_socket& ys, tc_deltclass_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_DELTCLASS, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_GETTCLASS ============== */
/* RTM_GETTCLASS - do */
int tc_gettclass_rsp_parse(const struct nlmsghdr *nlh,
			   struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	tc_gettclass_rsp *dst;
	void *hdr;

	dst = (tc_gettclass_rsp*)yarg->data;
	parg.ys = yarg->ys;

	hdr = ynl_nlmsg_data_offset(nlh, sizeof(struct genlmsghdr));
	memcpy(&dst->_hdr, hdr, sizeof(struct tcmsg));

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_KIND) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->kind.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_OPTIONS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_options_msg_nest;
			parg.data = &dst->options;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "options", "kind");
			if (tc_options_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stats.assign(data, data + len);
		} else if (type == TCA_XSTATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_app_msg_nest;
			parg.data = &dst->xstats;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "xstats", "kind");
			if (tc_tca_stats_app_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate.assign(data, data + len);
		} else if (type == TCA_FCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fcnt = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_STATS2) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_attrs_nest;
			parg.data = &dst->stats2.emplace();
			if (tc_tca_stats_attrs_parse(&parg, attr, dst->kind))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stab_attrs_nest;
			parg.data = &dst->stab.emplace();
			if (tc_tca_stab_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_CHAIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->chain = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_INGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ingress_block = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_EGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->egress_block = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<tc_gettclass_rsp>
tc_gettclass(ynl_cpp::ynl_socket& ys, tc_gettclass_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<tc_gettclass_rsp> rsp;
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_GETTCLASS, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;
	yrs.yarg.rsp_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	rsp.reset(new tc_gettclass_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = tc_gettclass_rsp_parse;
	yrs.rsp_cmd = 40;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* ============== RTM_NEWTFILTER ============== */
/* RTM_NEWTFILTER - do */
int tc_newtfilter(ynl_cpp::ynl_socket& ys, tc_newtfilter_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_NEWTFILTER, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_KIND, req.kind.data());
	if (req.options.has_value())
		tc_options_msg_put(nlh, TCA_OPTIONS, req.options.value());
	if (req.rate.size() > 0)
		ynl_attr_put(nlh, TCA_RATE, req.rate.data(), req.rate.size());
	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.ingress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_INGRESS_BLOCK, req.ingress_block.value());
	if (req.egress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_EGRESS_BLOCK, req.egress_block.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_DELTFILTER ============== */
/* RTM_DELTFILTER - do */
int tc_deltfilter(ynl_cpp::ynl_socket& ys, tc_deltfilter_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_DELTFILTER, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_KIND, req.kind.data());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_GETTFILTER ============== */
/* RTM_GETTFILTER - do */
int tc_gettfilter_rsp_parse(const struct nlmsghdr *nlh,
			    struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	tc_gettfilter_rsp *dst;
	void *hdr;

	dst = (tc_gettfilter_rsp*)yarg->data;
	parg.ys = yarg->ys;

	hdr = ynl_nlmsg_data_offset(nlh, sizeof(struct genlmsghdr));
	memcpy(&dst->_hdr, hdr, sizeof(struct tcmsg));

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_KIND) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->kind.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_OPTIONS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_options_msg_nest;
			parg.data = &dst->options;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "options", "kind");
			if (tc_options_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stats.assign(data, data + len);
		} else if (type == TCA_XSTATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_app_msg_nest;
			parg.data = &dst->xstats;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "xstats", "kind");
			if (tc_tca_stats_app_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate.assign(data, data + len);
		} else if (type == TCA_FCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fcnt = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_STATS2) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_attrs_nest;
			parg.data = &dst->stats2.emplace();
			if (tc_tca_stats_attrs_parse(&parg, attr, dst->kind))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stab_attrs_nest;
			parg.data = &dst->stab.emplace();
			if (tc_tca_stab_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_CHAIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->chain = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_INGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ingress_block = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_EGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->egress_block = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<tc_gettfilter_rsp>
tc_gettfilter(ynl_cpp::ynl_socket& ys, tc_gettfilter_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<tc_gettfilter_rsp> rsp;
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_GETTFILTER, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;
	yrs.yarg.rsp_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_KIND, req.kind.data());

	rsp.reset(new tc_gettfilter_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = tc_gettfilter_rsp_parse;
	yrs.rsp_cmd = 44;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

/* RTM_GETTFILTER - dump */
std::unique_ptr<tc_gettfilter_list>
tc_gettfilter_dump(ynl_cpp::ynl_socket& ys, tc_gettfilter_req_dump& req)
{
	struct ynl_dump_no_alloc_state yds = {};
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	auto ret = std::make_unique<tc_gettfilter_list>();
	yds.yarg.ys = ys;
	yds.yarg.rsp_policy = &tc_attrs_nest;
	yds.yarg.data = ret.get();
	yds.alloc_cb = [](void* arg)->void* {return &(static_cast<tc_gettfilter_list*>(arg)->objs.emplace_back());};
	yds.cb = tc_gettfilter_rsp_parse;
	yds.rsp_cmd = 44;

	nlh = ynl_gemsg_start_dump(ys, ((struct ynl_sock*)ys)->family_id, RTM_GETTFILTER, 1);
	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.dump_flags.has_value())
		ynl_attr_put(nlh, TCA_DUMP_FLAGS, &(*req.dump_flags), sizeof(struct nla_bitfield32));

	err = ynl_exec_dump_no_alloc(ys, nlh, &yds);
	if (err < 0)
		return nullptr;

	return ret;
}

/* ============== RTM_NEWCHAIN ============== */
/* RTM_NEWCHAIN - do */
int tc_newchain(ynl_cpp::ynl_socket& ys, tc_newchain_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_NEWCHAIN, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.kind.size() > 0)
		ynl_attr_put_str(nlh, TCA_KIND, req.kind.data());
	if (req.options.has_value())
		tc_options_msg_put(nlh, TCA_OPTIONS, req.options.value());
	if (req.rate.size() > 0)
		ynl_attr_put(nlh, TCA_RATE, req.rate.data(), req.rate.size());
	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());
	if (req.ingress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_INGRESS_BLOCK, req.ingress_block.value());
	if (req.egress_block.has_value())
		ynl_attr_put_u32(nlh, TCA_EGRESS_BLOCK, req.egress_block.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_DELCHAIN ============== */
/* RTM_DELCHAIN - do */
int tc_delchain(ynl_cpp::ynl_socket& ys, tc_delchain_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_DELCHAIN, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return -1;

	return 0;
}

/* ============== RTM_GETCHAIN ============== */
/* RTM_GETCHAIN - do */
int tc_getchain_rsp_parse(const struct nlmsghdr *nlh,
			  struct ynl_parse_arg *yarg)
{
	const struct nlattr *attr;
	struct ynl_parse_arg parg;
	tc_getchain_rsp *dst;
	void *hdr;

	dst = (tc_getchain_rsp*)yarg->data;
	parg.ys = yarg->ys;

	hdr = ynl_nlmsg_data_offset(nlh, sizeof(struct genlmsghdr));
	memcpy(&dst->_hdr, hdr, sizeof(struct tcmsg));

	ynl_attr_for_each(attr, nlh, yarg->ys->family->hdr_len) {
		unsigned int type = ynl_attr_type(attr);

		if (type == TCA_KIND) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->kind.assign(ynl_attr_get_str(attr));
		} else if (type == TCA_OPTIONS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_options_msg_nest;
			parg.data = &dst->options;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "options", "kind");
			if (tc_options_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->stats.assign(data, data + len);
		} else if (type == TCA_XSTATS) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_app_msg_nest;
			parg.data = &dst->xstats;
			if (dst->kind.empty())
				return ynl_submsg_failed(yarg, "xstats", "kind");
			if (tc_tca_stats_app_msg_parse(&parg, dst->kind, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_RATE) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			unsigned int len = ynl_attr_data_len(attr);
			__u8 *data = (__u8*)ynl_attr_data(attr);
			dst->rate.assign(data, data + len);
		} else if (type == TCA_FCNT) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->fcnt = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_STATS2) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stats_attrs_nest;
			parg.data = &dst->stats2.emplace();
			if (tc_tca_stats_attrs_parse(&parg, attr, dst->kind))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_STAB) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;

			parg.rsp_policy = &tc_tca_stab_attrs_nest;
			parg.data = &dst->stab.emplace();
			if (tc_tca_stab_attrs_parse(&parg, attr))
				return YNL_PARSE_CB_ERROR;
		} else if (type == TCA_CHAIN) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->chain = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_INGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->ingress_block = (__u32)ynl_attr_get_u32(attr);
		} else if (type == TCA_EGRESS_BLOCK) {
			if (ynl_attr_validate(yarg, attr))
				return YNL_PARSE_CB_ERROR;
			dst->egress_block = (__u32)ynl_attr_get_u32(attr);
		}
	}

	return YNL_PARSE_CB_OK;
}

std::unique_ptr<tc_getchain_rsp>
tc_getchain(ynl_cpp::ynl_socket& ys, tc_getchain_req& req)
{
	struct ynl_req_state yrs = { .yarg = { .ys = ys, }, };
	std::unique_ptr<tc_getchain_rsp> rsp;
	struct nlmsghdr *nlh;
	size_t hdr_len;
	void *hdr;
	int err;

	nlh = ynl_gemsg_start_req(ys, ((struct ynl_sock*)ys)->family_id, RTM_GETCHAIN, 1);
	((struct ynl_sock*)ys)->req_policy = &tc_attrs_nest;
	yrs.yarg.rsp_policy = &tc_attrs_nest;

	hdr_len = sizeof(req._hdr);
	hdr = ynl_nlmsg_put_extra_header(nlh, hdr_len);
	memcpy(hdr, &req._hdr, hdr_len);

	if (req.chain.has_value())
		ynl_attr_put_u32(nlh, TCA_CHAIN, req.chain.value());

	rsp.reset(new tc_getchain_rsp());
	yrs.yarg.data = rsp.get();
	yrs.cb = tc_getchain_rsp_parse;
	yrs.rsp_cmd = 100;

	err = ynl_exec(ys, nlh, &yrs);
	if (err < 0)
		return nullptr;

	return rsp;
}

const struct ynl_family ynl_tc_family =  {
	.name		= "tc",
	.hdr_len	= sizeof(struct genlmsghdr),
};
const struct ynl_family& get_ynl_tc_family() {
	return ynl_tc_family;
};
} //namespace ynl_cpp

/* SPDX-License-Identifier: ((GPL-2.0 WITH Linux-syscall-note) OR BSD-3-Clause) */
/* Do not edit directly, auto-generated from: */
/*	 */
/* YNL-GEN user header */

#ifndef _LINUX_TC_GEN_H
#define _LINUX_TC_GEN_H

#include <linux/types.h>
#include <linux/netlink.h>
#include <stdlib.h>
#include <string.h>

#include <list>
#include <memory>
#include <optional>
#include <string>
#include <string_view>
#include <vector>

#include "ynl.hpp"

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

namespace ynl_cpp {
const struct ynl_family& get_ynl_tc_family();

/* Enums */
std::string_view tc_op_str(int op);
std::string_view tc_cls_flags_str(int value);
std::string_view tc_flower_key_ctrl_flags_str(int value);
std::string_view tc_dualpi2_drop_overload_str(tc_dualpi2_drop_overload value);
std::string_view tc_dualpi2_drop_early_str(tc_dualpi2_drop_early value);
std::string_view tc_dualpi2_ecn_mask_str(tc_dualpi2_ecn_mask value);
std::string_view tc_dualpi2_split_gso_str(tc_dualpi2_split_gso value);

/* Common nested types */
struct tc_tca_stab_attrs {
	std::vector<__u8> base;
	std::vector<__u8> data;
};

struct tc_cake_attrs {
	std::optional<__u64> base_rate64;
	std::optional<__u32> diffserv_mode;
	std::optional<__u32> atm;
	std::optional<__u32> flow_mode;
	std::optional<__u32> overhead;
	std::optional<__u32> rtt;
	std::optional<__u32> target;
	std::optional<__u32> autorate;
	std::optional<__u32> memory;
	std::optional<__u32> nat;
	std::optional<__u32> raw;
	std::optional<__u32> wash;
	std::optional<__u32> mpu;
	std::optional<__u32> ingress;
	std::optional<__u32> ack_filter;
	std::optional<__u32> split_gso;
	std::optional<__u32> fwmark;
};

struct tc_cbs_attrs {
	std::vector<__u8> parms;
};

struct tc_choke_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> stab;
	std::optional<__u32> max_p;
};

struct tc_codel_attrs {
	std::optional<__u32> target;
	std::optional<__u32> limit;
	std::optional<__u32> interval;
	std::optional<__u32> ecn;
	std::optional<__u32> ce_threshold;
};

struct tc_drr_attrs {
	std::optional<__u32> quantum;
};

struct tc_dualpi2_attrs {
	std::optional<__u32> limit;
	std::optional<__u32> memory_limit;
	std::optional<__u32> target;
	std::optional<__u32> tupdate;
	std::optional<__u32> alpha;
	std::optional<__u32> beta;
	std::optional<__u32> step_thresh_pkts;
	std::optional<__u32> step_thresh_us;
	std::optional<__u32> min_qlen_step;
	std::optional<__u8> coupling;
	std::optional<enum tc_dualpi2_drop_overload> drop_overload;
	std::optional<enum tc_dualpi2_drop_early> drop_early;
	std::optional<__u8> c_protection;
	std::optional<enum tc_dualpi2_ecn_mask> ecn_mask;
	std::optional<enum tc_dualpi2_split_gso> split_gso;
};

struct tc_etf_attrs {
	std::vector<__u8> parms;
};

struct tc_fq_attrs {
	std::optional<__u32> plimit;
	std::optional<__u32> flow_plimit;
	std::optional<__u32> quantum;
	std::optional<__u32> initial_quantum;
	std::optional<__u32> rate_enable;
	std::optional<__u32> flow_default_rate;
	std::optional<__u32> flow_max_rate;
	std::optional<__u32> buckets_log;
	std::optional<__u32> flow_refill_delay;
	std::optional<__u32> orphan_mask;
	std::optional<__u32> low_rate_threshold;
	std::optional<__u32> ce_threshold;
	std::optional<__u32> timer_slack;
	std::optional<__u32> horizon;
	std::optional<__u8> horizon_drop;
	std::vector<__u8> priomap;
	std::vector<__u8> weights;
};

struct tc_fq_codel_attrs {
	std::optional<__u32> target;
	std::optional<__u32> limit;
	std::optional<__u32> interval;
	std::optional<__u32> ecn;
	std::optional<__u32> flows;
	std::optional<__u32> quantum;
	std::optional<__u32> ce_threshold;
	std::optional<__u32> drop_batch_size;
	std::optional<__u32> memory_limit;
	std::optional<__u8> ce_threshold_selector;
	std::optional<__u8> ce_threshold_mask;
};

struct tc_fq_pie_attrs {
	std::optional<__u32> limit;
	std::optional<__u32> flows;
	std::optional<__u32> target;
	std::optional<__u32> tupdate;
	std::optional<__u32> alpha;
	std::optional<__u32> beta;
	std::optional<__u32> quantum;
	std::optional<__u32> memory_limit;
	std::optional<__u32> ecn_prob;
	std::optional<__u32> ecn;
	std::optional<__u32> bytemode;
	std::optional<__u32> dq_rate_estimator;
};

struct tc_hhf_attrs {
	std::optional<__u32> backlog_limit;
	std::optional<__u32> quantum;
	std::optional<__u32> hh_flows_limit;
	std::optional<__u32> reset_timeout;
	std::optional<__u32> admit_bytes;
	std::optional<__u32> evict_timeout;
	std::optional<__u32> non_hh_weight;
};

struct tc_htb_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> init;
	std::vector<__u8> ctab;
	std::vector<__u8> rtab;
	std::optional<__u32> direct_qlen;
	std::optional<__u64> rate64;
	std::optional<__u64> ceil64;
	bool offload{};
};

struct tc_pie_attrs {
	std::optional<__u32> target;
	std::optional<__u32> limit;
	std::optional<__u32> tupdate;
	std::optional<__u32> alpha;
	std::optional<__u32> beta;
	std::optional<__u32> ecn;
	std::optional<__u32> bytemode;
	std::optional<__u32> dq_rate_estimator;
};

struct tc_qfq_attrs {
	std::optional<__u32> weight;
	std::optional<__u32> lmax;
};

struct tc_red_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> stab;
	std::optional<__u32> max_p;
	std::optional<struct nla_bitfield32> flags;
	std::optional<__u32> early_drop_block;
	std::optional<__u32> mark_block;
};

struct tc_tbf_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> rtab;
	std::vector<__u8> ptab;
	std::optional<__u64> rate64;
	std::optional<__u64> prate64;
	std::optional<__u32> burst;
	std::optional<__u32> pburst;
};

struct tc_ematch_attrs {
	std::vector<__u8> tree_hdr;
	std::vector<__u8> tree_list;
};

struct tc_police_attrs {
	std::vector<__u8> tbf;
	std::vector<__u8> rate;
	std::vector<__u8> peakrate;
	std::optional<__u32> avrate;
	std::optional<__u32> result;
	std::vector<__u8> tm;
	std::optional<__u64> rate64;
	std::optional<__u64> peakrate64;
	std::optional<__u64> pktrate64;
	std::optional<__u64> pktburst64;
};

struct tc_flower_key_mpls_opt_attrs {
	std::optional<__u8> lse_depth;
	std::optional<__u8> lse_ttl;
	std::optional<__u8> lse_bos;
	std::optional<__u8> lse_tc;
	std::optional<__u32> lse_label;
};

struct tc_flower_key_cfm_attrs {
	std::optional<__u8> md_level;
	std::optional<__u8> opcode;
};

struct tc_netem_loss_attrs {
	std::vector<__u8> gi;
	std::vector<__u8> ge;
};

struct tc_taprio_sched_entry {
	std::optional<__u32> index;
	std::optional<__u8> cmd;
	std::optional<__u32> gate_mask;
	std::optional<__u32> interval;
};

struct tc_taprio_tc_entry_attrs {
	std::optional<__u32> index;
	std::optional<__u32> max_sdu;
	std::optional<__u32> fp;
};

struct tc_cake_tin_stats_attrs {
	std::optional<__u32> idx;
	std::optional<__u32> sent_packets;
	std::optional<__u64> sent_bytes64;
	std::optional<__u32> dropped_packets;
	std::optional<__u64> dropped_bytes64;
	std::optional<__u32> acks_dropped_packets;
	std::optional<__u64> acks_dropped_bytes64;
	std::optional<__u32> ecn_marked_packets;
	std::optional<__u64> ecn_marked_bytes64;
	std::optional<__u32> backlog_packets;
	std::optional<__u32> backlog_bytes;
	std::optional<__u64> threshold_rate64;
	std::optional<__u32> target_us;
	std::optional<__u32> interval_us;
	std::optional<__u32> way_indirect_hits;
	std::optional<__u32> way_misses;
	std::optional<__u32> way_collisions;
	std::optional<__u32> peak_delay_us;
	std::optional<__u32> avg_delay_us;
	std::optional<__u32> base_delay_us;
	std::optional<__u32> sparse_flows;
	std::optional<__u32> bulk_flows;
	std::optional<__u32> unresponsive_flows;
	std::optional<__u32> max_skblen;
	std::optional<__u32> flow_quantum;
};

struct tc_flower_key_enc_opt_geneve_attrs {
	std::optional<__u16> class_;
	std::optional<__u8> type;
	std::vector<__u8> data;
};

struct tc_flower_key_enc_opt_vxlan_attrs {
	std::optional<__u32> gbp;
};

struct tc_flower_key_enc_opt_erspan_attrs {
	std::optional<__u8> ver;
	std::optional<__u32> index;
	std::optional<__u8> dir;
	std::optional<__u8> hwid;
};

struct tc_flower_key_enc_opt_gtp_attrs {
	std::optional<__u8> pdu_type;
	std::optional<__u8> qfi;
};

struct tc_tca_gred_vq_entry_attrs {
	std::optional<__u32> dp;
	std::optional<__u64> stat_bytes;
	std::optional<__u32> stat_packets;
	std::optional<__u32> stat_backlog;
	std::optional<__u32> stat_prob_drop;
	std::optional<__u32> stat_prob_mark;
	std::optional<__u32> stat_forced_drop;
	std::optional<__u32> stat_forced_mark;
	std::optional<__u32> stat_pdrop;
	std::optional<__u32> stat_other;
	std::optional<__u32> flags;
};

struct tc_act_bpf_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__u16> ops_len;
	std::vector<__u8> ops;
	std::optional<__u32> fd;
	std::string name;
	std::vector<__u8> tag;
	std::vector<__u8> id;
};

struct tc_act_connmark_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> tm;
};

struct tc_act_csum_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> tm;
};

struct tc_act_ct_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> tm;
	std::optional<__u16> action;
	std::optional<__u16> zone;
	std::optional<__u32> mark;
	std::optional<__u32> mark_mask;
	std::vector<__u8> labels;
	std::vector<__u8> labels_mask;
	std::optional<__u32> nat_ipv4_min /* big-endian */;
	std::optional<__u32> nat_ipv4_max /* big-endian */;
	std::vector<__u8> nat_ipv6_min;
	std::vector<__u8> nat_ipv6_max;
	std::optional<__u16> nat_port_min /* big-endian */;
	std::optional<__u16> nat_port_max /* big-endian */;
	std::string helper_name;
	std::optional<__u8> helper_family;
	std::optional<__u8> helper_proto;
};

struct tc_act_ctinfo_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> act;
	std::optional<__u16> zone;
	std::optional<__u32> parms_dscp_mask;
	std::optional<__u32> parms_dscp_statemask;
	std::optional<__u32> parms_cpmark_mask;
	std::optional<__u64> stats_dscp_set;
	std::optional<__u64> stats_dscp_error;
	std::optional<__u64> stats_cpmark_set;
};

struct tc_act_gact_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::vector<__u8> prob;
};

struct tc_act_gate_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__s32> priority;
	std::vector<__u8> entry_list;
	std::optional<__u64> base_time;
	std::optional<__u64> cycle_time;
	std::optional<__u64> cycle_time_ext;
	std::optional<__u32> flags;
	std::optional<__s32> clockid;
};

struct tc_act_ife_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> tm;
	std::vector<__u8> dmac;
	std::vector<__u8> smac;
	std::optional<__u16> type;
	std::vector<__u8> metalst;
};

struct tc_act_mirred_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::vector<__u8> blockid;
};

struct tc_act_mpls_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__u16> proto /* big-endian */;
	std::optional<__u32> label;
	std::optional<__u8> tc;
	std::optional<__u8> ttl;
	std::optional<__u8> bos;
};

struct tc_act_nat_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> tm;
};

struct tc_act_pedit_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::vector<__u8> parms_ex;
	std::vector<__u8> keys_ex;
	std::vector<__u8> key_ex;
};

struct tc_act_sample_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__u32> rate;
	std::optional<__u32> trunc_size;
	std::optional<__u32> psample_group;
};

struct tc_act_simple_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::vector<__u8> data;
};

struct tc_act_skbedit_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__u32> priority;
	std::optional<__u16> queue_mapping;
	std::optional<__u32> mark;
	std::optional<__u16> ptype;
	std::optional<__u32> mask;
	std::optional<__u64> flags;
	std::optional<__u16> queue_mapping_max;
};

struct tc_act_skbmod_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::vector<__u8> dmac;
	std::vector<__u8> smac;
	std::vector<__u8> etype;
};

struct tc_act_tunnel_key_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__u32> enc_ipv4_src /* big-endian */;
	std::optional<__u32> enc_ipv4_dst /* big-endian */;
	std::vector<__u8> enc_ipv6_src;
	std::vector<__u8> enc_ipv6_dst;
	std::optional<__u64> enc_key_id /* big-endian */;
	std::optional<__u16> enc_dst_port /* big-endian */;
	std::optional<__u8> no_csum;
	std::vector<__u8> enc_opts;
	std::optional<__u8> enc_tos;
	std::optional<__u8> enc_ttl;
	bool no_frag{};
};

struct tc_act_vlan_attrs {
	std::vector<__u8> tm;
	std::vector<__u8> parms;
	std::optional<__u16> push_vlan_id;
	std::optional<__u16> push_vlan_protocol;
	std::optional<__u8> push_vlan_priority;
	std::vector<__u8> push_eth_dst;
	std::vector<__u8> push_eth_src;
};

struct tc_flow_attrs {
	std::optional<__u32> keys;
	std::optional<__u32> mode;
	std::optional<__u32> baseclass;
	std::optional<__u32> rshift;
	std::optional<__u32> addend;
	std::optional<__u32> mask;
	std::optional<__u32> xor_;
	std::optional<__u32> divisor;
	std::vector<__u8> act;
	std::optional<tc_police_attrs> police;
	std::vector<__u8> ematches;
	std::optional<__u32> perturb;
};

struct tc_netem_attrs {
	std::vector<__u8> corr;
	std::vector<__u8> delay_dist;
	std::vector<__u8> reorder;
	std::vector<__u8> corrupt;
	std::optional<tc_netem_loss_attrs> loss;
	std::vector<__u8> rate;
	std::optional<__u32> ecn;
	std::optional<__u64> rate64;
	std::optional<__u32> pad;
	std::optional<__s64> latency64;
	std::optional<__s64> jitter64;
	std::vector<__u8> slot;
	std::vector<__u8> slot_dist;
	std::optional<__u64> prng_seed;
};

struct tc_cake_stats_attrs {
	std::optional<__u64> capacity_estimate64;
	std::optional<__u32> memory_limit;
	std::optional<__u32> memory_used;
	std::optional<__u32> avg_netoff;
	std::optional<__u32> min_netlen;
	std::optional<__u32> max_netlen;
	std::optional<__u32> min_adjlen;
	std::optional<__u32> max_adjlen;
	std::vector<tc_cake_tin_stats_attrs> tin_stats;
	std::optional<__s32> deficit;
	std::optional<__u32> cobalt_count;
	std::optional<__u32> dropping;
	std::optional<__s32> drop_next_us;
	std::optional<__u32> p_drop;
	std::optional<__s32> blue_timer_us;
};

struct tc_flower_key_enc_opts_attrs {
	std::optional<tc_flower_key_enc_opt_geneve_attrs> geneve;
	std::optional<tc_flower_key_enc_opt_vxlan_attrs> vxlan;
	std::optional<tc_flower_key_enc_opt_erspan_attrs> erspan;
	std::optional<tc_flower_key_enc_opt_gtp_attrs> gtp;
};

struct tc_tca_gred_vq_list_attrs {
	std::vector<tc_tca_gred_vq_entry_attrs> entry;
};

struct tc_taprio_sched_entry_list {
	std::vector<tc_taprio_sched_entry> entry;
};

struct tc_act_options_msg {
	std::optional<tc_act_bpf_attrs> bpf;
	std::optional<tc_act_connmark_attrs> connmark;
	std::optional<tc_act_csum_attrs> csum;
	std::optional<tc_act_ct_attrs> ct;
	std::optional<tc_act_ctinfo_attrs> ctinfo;
	std::optional<tc_act_gact_attrs> gact;
	std::optional<tc_act_gate_attrs> gate;
	std::optional<tc_act_ife_attrs> ife;
	std::optional<tc_act_mirred_attrs> mirred;
	std::optional<tc_act_mpls_attrs> mpls;
	std::optional<tc_act_nat_attrs> nat;
	std::optional<tc_act_pedit_attrs> pedit;
	std::optional<tc_police_attrs> police;
	std::optional<tc_act_sample_attrs> sample;
	std::optional<tc_act_simple_attrs> simple;
	std::optional<tc_act_skbedit_attrs> skbedit;
	std::optional<tc_act_skbmod_attrs> skbmod;
	std::optional<tc_act_tunnel_key_attrs> tunnel_key;
	std::optional<tc_act_vlan_attrs> vlan;
};

struct tc_tca_stats_app_msg {
	std::optional<tc_cake_stats_attrs> cake;
	std::vector<__u8> choke;
	std::vector<__u8> codel;
	std::vector<__u8> dualpi2;
	std::vector<__u8> fq;
	std::vector<__u8> fq_codel;
	std::vector<__u8> fq_pie;
	std::vector<__u8> hhf;
	std::vector<__u8> pie;
	std::vector<__u8> red;
	std::vector<__u8> sfb;
	std::vector<__u8> sfq;
};

struct tc_tca_stats_attrs {
	std::vector<__u8> basic;
	std::vector<__u8> rate_est;
	std::vector<__u8> queue;
	std::optional<tc_tca_stats_app_msg> app;
	std::vector<__u8> rate_est64;
	std::vector<__u8> basic_hw;
	std::optional<__u64> pkt64;
};

struct tc_gred_attrs {
	std::vector<__u8> parms;
	std::vector<__u8> stab;
	std::vector<__u8> dps;
	std::vector<__u8> max_p;
	std::optional<__u32> limit;
	std::optional<tc_tca_gred_vq_list_attrs> vq_list;
};

struct tc_taprio_attrs {
	std::vector<__u8> priomap;
	std::optional<tc_taprio_sched_entry_list> sched_entry_list;
	std::optional<__s64> sched_base_time;
	std::optional<tc_taprio_sched_entry> sched_single_entry;
	std::optional<__s32> sched_clockid;
	std::vector<__u8> admin_sched;
	std::optional<__s64> sched_cycle_time;
	std::optional<__s64> sched_cycle_time_extension;
	std::optional<__u32> flags;
	std::optional<__u32> txtime_delay;
	std::optional<tc_taprio_tc_entry_attrs> tc_entry;
};

struct tc_act_attrs {
	std::optional<__u32> idx;
	std::string kind;
	std::optional<tc_act_options_msg> options;
	std::optional<__u32> index;
	std::optional<tc_tca_stats_attrs> stats;
	std::vector<__u8> cookie;
	std::optional<struct nla_bitfield32> flags;
	std::optional<struct nla_bitfield32> hw_stats;
	std::optional<struct nla_bitfield32> used_hw_stats;
	std::optional<__u32> in_hw_count;
};

struct tc_basic_attrs {
	std::optional<__u32> classid;
	std::optional<tc_ematch_attrs> ematches;
	std::vector<tc_act_attrs> act;
	std::optional<tc_police_attrs> police;
	std::vector<__u8> pcnt;
};

struct tc_bpf_attrs {
	std::vector<tc_act_attrs> act;
	std::optional<tc_police_attrs> police;
	std::optional<__u32> classid;
	std::optional<__u16> ops_len;
	std::vector<__u8> ops;
	std::optional<__u32> fd;
	std::string name;
	std::optional<__u32> flags;
	std::optional<__u32> flags_gen;
	std::vector<__u8> tag;
	std::optional<__u32> id;
};

struct tc_cgroup_attrs {
	std::vector<tc_act_attrs> act;
	std::optional<tc_police_attrs> police;
	std::vector<__u8> ematches;
};

struct tc_flower_attrs {
	std::optional<__u32> classid;
	std::string indev;
	std::vector<tc_act_attrs> act;
	std::vector<__u8> key_eth_dst;
	std::vector<__u8> key_eth_dst_mask;
	std::vector<__u8> key_eth_src;
	std::vector<__u8> key_eth_src_mask;
	std::optional<__u16> key_eth_type /* big-endian */;
	std::optional<__u8> key_ip_proto;
	std::optional<__u32> key_ipv4_src /* big-endian */;
	std::optional<__u32> key_ipv4_src_mask /* big-endian */;
	std::optional<__u32> key_ipv4_dst /* big-endian */;
	std::optional<__u32> key_ipv4_dst_mask /* big-endian */;
	std::vector<__u8> key_ipv6_src;
	std::vector<__u8> key_ipv6_src_mask;
	std::vector<__u8> key_ipv6_dst;
	std::vector<__u8> key_ipv6_dst_mask;
	std::optional<__u16> key_tcp_src /* big-endian */;
	std::optional<__u16> key_tcp_dst /* big-endian */;
	std::optional<__u16> key_udp_src /* big-endian */;
	std::optional<__u16> key_udp_dst /* big-endian */;
	std::optional<__u32> flags;
	std::optional<__u16> key_vlan_id /* big-endian */;
	std::optional<__u8> key_vlan_prio;
	std::optional<__u16> key_vlan_eth_type /* big-endian */;
	std::optional<__u32> key_enc_key_id /* big-endian */;
	std::optional<__u32> key_enc_ipv4_src /* big-endian */;
	std::optional<__u32> key_enc_ipv4_src_mask /* big-endian */;
	std::optional<__u32> key_enc_ipv4_dst /* big-endian */;
	std::optional<__u32> key_enc_ipv4_dst_mask /* big-endian */;
	std::vector<__u8> key_enc_ipv6_src;
	std::vector<__u8> key_enc_ipv6_src_mask;
	std::vector<__u8> key_enc_ipv6_dst;
	std::vector<__u8> key_enc_ipv6_dst_mask;
	std::optional<__u16> key_tcp_src_mask /* big-endian */;
	std::optional<__u16> key_tcp_dst_mask /* big-endian */;
	std::optional<__u16> key_udp_src_mask /* big-endian */;
	std::optional<__u16> key_udp_dst_mask /* big-endian */;
	std::optional<__u16> key_sctp_src_mask /* big-endian */;
	std::optional<__u16> key_sctp_dst_mask /* big-endian */;
	std::optional<__u16> key_sctp_src /* big-endian */;
	std::optional<__u16> key_sctp_dst /* big-endian */;
	std::optional<__u16> key_enc_udp_src_port /* big-endian */;
	std::optional<__u16> key_enc_udp_src_port_mask /* big-endian */;
	std::optional<__u16> key_enc_udp_dst_port /* big-endian */;
	std::optional<__u16> key_enc_udp_dst_port_mask /* big-endian */;
	std::optional<__u32> key_flags /* big-endian */;
	std::optional<__u32> key_flags_mask /* big-endian */;
	std::optional<__u8> key_icmpv4_code;
	std::optional<__u8> key_icmpv4_code_mask;
	std::optional<__u8> key_icmpv4_type;
	std::optional<__u8> key_icmpv4_type_mask;
	std::optional<__u8> key_icmpv6_code;
	std::optional<__u8> key_icmpv6_code_mask;
	std::optional<__u8> key_icmpv6_type;
	std::optional<__u8> key_icmpv6_type_mask;
	std::optional<__u32> key_arp_sip /* big-endian */;
	std::optional<__u32> key_arp_sip_mask /* big-endian */;
	std::optional<__u32> key_arp_tip /* big-endian */;
	std::optional<__u32> key_arp_tip_mask /* big-endian */;
	std::optional<__u8> key_arp_op;
	std::optional<__u8> key_arp_op_mask;
	std::vector<__u8> key_arp_sha;
	std::vector<__u8> key_arp_sha_mask;
	std::vector<__u8> key_arp_tha;
	std::vector<__u8> key_arp_tha_mask;
	std::optional<__u8> key_mpls_ttl;
	std::optional<__u8> key_mpls_bos;
	std::optional<__u8> key_mpls_tc;
	std::optional<__u32> key_mpls_label /* big-endian */;
	std::optional<__u16> key_tcp_flags /* big-endian */;
	std::optional<__u16> key_tcp_flags_mask /* big-endian */;
	std::optional<__u8> key_ip_tos;
	std::optional<__u8> key_ip_tos_mask;
	std::optional<__u8> key_ip_ttl;
	std::optional<__u8> key_ip_ttl_mask;
	std::optional<__u16> key_cvlan_id /* big-endian */;
	std::optional<__u8> key_cvlan_prio;
	std::optional<__u16> key_cvlan_eth_type /* big-endian */;
	std::optional<__u8> key_enc_ip_tos;
	std::optional<__u8> key_enc_ip_tos_mask;
	std::optional<__u8> key_enc_ip_ttl;
	std::optional<__u8> key_enc_ip_ttl_mask;
	std::optional<tc_flower_key_enc_opts_attrs> key_enc_opts;
	std::optional<tc_flower_key_enc_opts_attrs> key_enc_opts_mask;
	std::optional<__u32> in_hw_count;
	std::optional<__u16> key_port_src_min /* big-endian */;
	std::optional<__u16> key_port_src_max /* big-endian */;
	std::optional<__u16> key_port_dst_min /* big-endian */;
	std::optional<__u16> key_port_dst_max /* big-endian */;
	std::optional<__u16> key_ct_state;
	std::optional<__u16> key_ct_state_mask;
	std::optional<__u16> key_ct_zone;
	std::optional<__u16> key_ct_zone_mask;
	std::optional<__u32> key_ct_mark;
	std::optional<__u32> key_ct_mark_mask;
	std::vector<__u8> key_ct_labels;
	std::vector<__u8> key_ct_labels_mask;
	std::optional<tc_flower_key_mpls_opt_attrs> key_mpls_opts;
	std::optional<__u32> key_hash;
	std::optional<__u32> key_hash_mask;
	std::optional<__u8> key_num_of_vlans;
	std::optional<__u16> key_pppoe_sid /* big-endian */;
	std::optional<__u16> key_ppp_proto /* big-endian */;
	std::optional<__u32> key_l2tpv3_sid /* big-endian */;
	std::optional<__u8> l2_miss;
	std::optional<tc_flower_key_cfm_attrs> key_cfm;
	std::optional<__u32> key_spi /* big-endian */;
	std::optional<__u32> key_spi_mask /* big-endian */;
	std::optional<__u32> key_enc_flags /* big-endian */;
	std::optional<__u32> key_enc_flags_mask /* big-endian */;
};

struct tc_fw_attrs {
	std::optional<__u32> classid;
	std::optional<tc_police_attrs> police;
	std::string indev;
	std::vector<tc_act_attrs> act;
	std::optional<__u32> mask;
};

struct tc_matchall_attrs {
	std::optional<__u32> classid;
	std::vector<tc_act_attrs> act;
	std::optional<__u32> flags;
	std::vector<__u8> pcnt;
};

struct tc_route_attrs {
	std::optional<__u32> classid;
	std::optional<__u32> to;
	std::optional<__u32> from;
	std::optional<__u32> iif;
	std::optional<tc_police_attrs> police;
	std::vector<tc_act_attrs> act;
};

struct tc_u32_attrs {
	std::optional<__u32> classid;
	std::optional<__u32> hash;
	std::optional<__u32> link;
	std::optional<__u32> divisor;
	std::vector<__u8> sel;
	std::optional<tc_police_attrs> police;
	std::vector<tc_act_attrs> act;
	std::string indev;
	std::vector<__u8> pcnt;
	std::vector<__u8> mark;
	std::optional<__u32> flags;
};

struct tc_ets_attrs {
	std::optional<__u8> nbands;
	std::optional<__u8> nstrict;
	std::unique_ptr<tc_ets_attrs> quanta;
	std::vector<__u32> quanta_band;
	std::unique_ptr<tc_ets_attrs> priomap;
	std::vector<__u8> priomap_band;
};

struct tc_options_msg {
	std::optional<tc_basic_attrs> basic;
	std::optional<tc_bpf_attrs> bpf;
	std::vector<__u8> bfifo;
	std::optional<tc_cake_attrs> cake;
	std::optional<tc_cbs_attrs> cbs;
	std::optional<tc_cgroup_attrs> cgroup;
	std::optional<tc_choke_attrs> choke;
	bool clsact{};
	std::optional<tc_codel_attrs> codel;
	std::optional<tc_drr_attrs> drr;
	std::optional<tc_dualpi2_attrs> dualpi2;
	std::optional<tc_etf_attrs> etf;
	std::unique_ptr<tc_ets_attrs> ets;
	std::optional<tc_flow_attrs> flow;
	std::optional<tc_flower_attrs> flower;
	std::optional<tc_fq_attrs> fq;
	std::optional<tc_fq_codel_attrs> fq_codel;
	std::optional<tc_fq_pie_attrs> fq_pie;
	std::optional<tc_fw_attrs> fw;
	std::optional<tc_gred_attrs> gred;
	std::vector<__u8> hfsc;
	std::optional<tc_hhf_attrs> hhf;
	std::optional<tc_htb_attrs> htb;
	bool ingress{};
	std::optional<tc_matchall_attrs> matchall;
	bool mq{};
	std::vector<__u8> mqprio;
	std::vector<__u8> multiq;
	std::optional<tc_netem_attrs> netem;
	std::vector<__u8> pfifo;
	std::vector<__u8> pfifo_fast;
	std::vector<__u8> pfifo_head_drop;
	std::optional<tc_pie_attrs> pie;
	std::vector<__u8> plug;
	std::vector<__u8> prio;
	std::optional<tc_qfq_attrs> qfq;
	std::optional<tc_red_attrs> red;
	std::optional<tc_route_attrs> route;
	std::vector<__u8> sfb;
	std::vector<__u8> sfq;
	std::optional<tc_taprio_attrs> taprio;
	std::optional<tc_tbf_attrs> tbf;
	std::optional<tc_u32_attrs> u32;
};

/* ============== RTM_NEWQDISC ============== */
/* RTM_NEWQDISC - do */
struct tc_newqdisc_req {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> rate;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Create new tc qdisc.
 */
int tc_newqdisc(ynl_cpp::ynl_socket& ys, tc_newqdisc_req& req);

/* ============== RTM_DELQDISC ============== */
/* RTM_DELQDISC - do */
struct tc_delqdisc_req {
	struct tcmsg _hdr;
};

/*
 * Delete existing tc qdisc.
 */
int tc_delqdisc(ynl_cpp::ynl_socket& ys, tc_delqdisc_req& req);

/* ============== RTM_GETQDISC ============== */
/* RTM_GETQDISC - do */
struct tc_getqdisc_req {
	struct tcmsg _hdr;

	bool dump_invisible{};
};

struct tc_getqdisc_rsp {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> stats;
	std::optional<tc_tca_stats_app_msg> xstats;
	std::vector<__u8> rate;
	std::optional<__u32> fcnt;
	std::optional<tc_tca_stats_attrs> stats2;
	std::optional<tc_tca_stab_attrs> stab;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc qdisc information.
 */
std::unique_ptr<tc_getqdisc_rsp>
tc_getqdisc(ynl_cpp::ynl_socket& ys, tc_getqdisc_req& req);

/* RTM_GETQDISC - dump */
struct tc_getqdisc_req_dump {
	struct tcmsg _hdr;

	bool dump_invisible{};
};

struct tc_getqdisc_list {
	std::list<tc_getqdisc_rsp> objs;
};

std::unique_ptr<tc_getqdisc_list>
tc_getqdisc_dump(ynl_cpp::ynl_socket& ys, tc_getqdisc_req_dump& req);

/* ============== RTM_NEWTCLASS ============== */
/* RTM_NEWTCLASS - do */
struct tc_newtclass_req {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> rate;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc traffic class information.
 */
int tc_newtclass(ynl_cpp::ynl_socket& ys, tc_newtclass_req& req);

/* ============== RTM_DELTCLASS ============== */
/* RTM_DELTCLASS - do */
struct tc_deltclass_req {
	struct tcmsg _hdr;
};

/*
 * Get / dump tc traffic class information.
 */
int tc_deltclass(ynl_cpp::ynl_socket& ys, tc_deltclass_req& req);

/* ============== RTM_GETTCLASS ============== */
/* RTM_GETTCLASS - do */
struct tc_gettclass_req {
	struct tcmsg _hdr;
};

struct tc_gettclass_rsp {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> stats;
	std::optional<tc_tca_stats_app_msg> xstats;
	std::vector<__u8> rate;
	std::optional<__u32> fcnt;
	std::optional<tc_tca_stats_attrs> stats2;
	std::optional<tc_tca_stab_attrs> stab;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc traffic class information.
 */
std::unique_ptr<tc_gettclass_rsp>
tc_gettclass(ynl_cpp::ynl_socket& ys, tc_gettclass_req& req);

/* ============== RTM_NEWTFILTER ============== */
/* RTM_NEWTFILTER - do */
struct tc_newtfilter_req {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> rate;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc filter information.
 */
int tc_newtfilter(ynl_cpp::ynl_socket& ys, tc_newtfilter_req& req);

/* ============== RTM_DELTFILTER ============== */
/* RTM_DELTFILTER - do */
struct tc_deltfilter_req {
	struct tcmsg _hdr;

	std::optional<__u32> chain;
	std::string kind;
};

/*
 * Get / dump tc filter information.
 */
int tc_deltfilter(ynl_cpp::ynl_socket& ys, tc_deltfilter_req& req);

/* ============== RTM_GETTFILTER ============== */
/* RTM_GETTFILTER - do */
struct tc_gettfilter_req {
	struct tcmsg _hdr;

	std::optional<__u32> chain;
	std::string kind;
};

struct tc_gettfilter_rsp {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> stats;
	std::optional<tc_tca_stats_app_msg> xstats;
	std::vector<__u8> rate;
	std::optional<__u32> fcnt;
	std::optional<tc_tca_stats_attrs> stats2;
	std::optional<tc_tca_stab_attrs> stab;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc filter information.
 */
std::unique_ptr<tc_gettfilter_rsp>
tc_gettfilter(ynl_cpp::ynl_socket& ys, tc_gettfilter_req& req);

/* RTM_GETTFILTER - dump */
struct tc_gettfilter_req_dump {
	struct tcmsg _hdr;

	std::optional<__u32> chain;
	std::optional<struct nla_bitfield32> dump_flags;
};

struct tc_gettfilter_list {
	std::list<tc_gettfilter_rsp> objs;
};

std::unique_ptr<tc_gettfilter_list>
tc_gettfilter_dump(ynl_cpp::ynl_socket& ys, tc_gettfilter_req_dump& req);

/* ============== RTM_NEWCHAIN ============== */
/* RTM_NEWCHAIN - do */
struct tc_newchain_req {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> rate;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc chain information.
 */
int tc_newchain(ynl_cpp::ynl_socket& ys, tc_newchain_req& req);

/* ============== RTM_DELCHAIN ============== */
/* RTM_DELCHAIN - do */
struct tc_delchain_req {
	struct tcmsg _hdr;

	std::optional<__u32> chain;
};

/*
 * Get / dump tc chain information.
 */
int tc_delchain(ynl_cpp::ynl_socket& ys, tc_delchain_req& req);

/* ============== RTM_GETCHAIN ============== */
/* RTM_GETCHAIN - do */
struct tc_getchain_req {
	struct tcmsg _hdr;

	std::optional<__u32> chain;
};

struct tc_getchain_rsp {
	struct tcmsg _hdr;

	std::string kind;
	std::optional<tc_options_msg> options;
	std::vector<__u8> stats;
	std::optional<tc_tca_stats_app_msg> xstats;
	std::vector<__u8> rate;
	std::optional<__u32> fcnt;
	std::optional<tc_tca_stats_attrs> stats2;
	std::optional<tc_tca_stab_attrs> stab;
	std::optional<__u32> chain;
	std::optional<__u32> ingress_block;
	std::optional<__u32> egress_block;
};

/*
 * Get / dump tc chain information.
 */
std::unique_ptr<tc_getchain_rsp>
tc_getchain(ynl_cpp::ynl_socket& ys, tc_getchain_req& req);

} //namespace ynl_cpp
#endif /* _LINUX_TC_GEN_H */

/*
 *
 *      Filename: ch_dns_types.h
 *
 *        Author: shajf,csp001314@gmail.com
 *   Description: ---
 *        Create: 2018-04-25 12:10:01
 * Last Modified: 2018-04-25 12:10:01
 */

#ifndef CH_DNS_TYPES_H
#define CH_DNS_TYPES_H

typedef uint16_t ch_dns_rdata_type_t;

enum {
	dns_rdatatype_none = 0,
	dns_rdatatype_a = 1,
	dns_rdatatype_ns = 2,
	dns_rdatatype_md = 3,
	dns_rdatatype_mf = 4,
	dns_rdatatype_cname = 5,
	dns_rdatatype_soa = 6,
	dns_rdatatype_mb = 7,
	dns_rdatatype_mg = 8,
	dns_rdatatype_mr = 9,
	dns_rdatatype_null = 10,
	dns_rdatatype_wks = 11,
	dns_rdatatype_ptr = 12,
	dns_rdatatype_hinfo = 13,
	dns_rdatatype_minfo = 14,
	dns_rdatatype_mx = 15,
	dns_rdatatype_txt = 16,
	dns_rdatatype_rp = 17,
	dns_rdatatype_afsdb = 18,
	dns_rdatatype_x25 = 19,
	dns_rdatatype_isdn = 20,
	dns_rdatatype_rt = 21,
	dns_rdatatype_nsap = 22,
	dns_rdatatype_nsap_ptr = 23,
	dns_rdatatype_sig = 24,
	dns_rdatatype_key = 25,
	dns_rdatatype_px = 26,
	dns_rdatatype_gpos = 27,
	dns_rdatatype_aaaa = 28,
	dns_rdatatype_loc = 29,
	dns_rdatatype_nxt = 30,
	dns_rdatatype_srv = 33,
	dns_rdatatype_naptr = 35,
	dns_rdatatype_kx = 36,
	dns_rdatatype_cert = 37,
	dns_rdatatype_a6 = 38,
	dns_rdatatype_dname = 39,
	dns_rdatatype_sink = 40,
	dns_rdatatype_opt = 41,
	dns_rdatatype_apl = 42,
	dns_rdatatype_ds = 43,
	dns_rdatatype_sshfp = 44,
	dns_rdatatype_ipseckey = 45,
	dns_rdatatype_rrsig = 46,
	dns_rdatatype_nsec = 47,
	dns_rdatatype_dnskey = 48,
	dns_rdatatype_dhcid = 49,
	dns_rdatatype_nsec3 = 50,
	dns_rdatatype_nsec3param = 51,
	dns_rdatatype_tlsa = 52,
	dns_rdatatype_smimea = 53,
	dns_rdatatype_hip = 55,
	dns_rdatatype_ninfo = 56,
	dns_rdatatype_rkey = 57,
	dns_rdatatype_talink = 58,
	dns_rdatatype_cds = 59,
	dns_rdatatype_cdnskey = 60,
	dns_rdatatype_openpgpkey = 61,
	dns_rdatatype_csync = 62,
	dns_rdatatype_spf = 99,
	dns_rdatatype_unspec = 103,
	dns_rdatatype_nid = 104,
	dns_rdatatype_l32 = 105,
	dns_rdatatype_l64 = 106,
	dns_rdatatype_lp = 107,
	dns_rdatatype_eui48 = 108,
	dns_rdatatype_eui64 = 109,
	dns_rdatatype_tkey = 249,
	dns_rdatatype_tsig = 250,
	dns_rdatatype_uri = 256,
	dns_rdatatype_caa = 257,
	dns_rdatatype_avc = 258,
	dns_rdatatype_doa = 259,
	dns_rdatatype_ta = 32768,
	dns_rdatatype_dlv = 32769,
	dns_rdatatype_keydata = 65533,
	dns_rdatatype_ixfr = 251,
	dns_rdatatype_axfr = 252,
	dns_rdatatype_mailb = 253,
	dns_rdatatype_maila = 254,
	dns_rdatatype_any = 255
};

#define dns_rdatatype_none	((ch_dns_rdata_type_t)dns_rdatatype_none)
#define dns_rdatatype_a		((ch_dns_rdata_type_t)dns_rdatatype_a)
#define dns_rdatatype_ns	((ch_dns_rdata_type_t)dns_rdatatype_ns)
#define dns_rdatatype_md	((ch_dns_rdata_type_t)dns_rdatatype_md)
#define dns_rdatatype_mf	((ch_dns_rdata_type_t)dns_rdatatype_mf)
#define dns_rdatatype_cname	((ch_dns_rdata_type_t)dns_rdatatype_cname)
#define dns_rdatatype_soa	((ch_dns_rdata_type_t)dns_rdatatype_soa)
#define dns_rdatatype_mb	((ch_dns_rdata_type_t)dns_rdatatype_mb)
#define dns_rdatatype_mg	((ch_dns_rdata_type_t)dns_rdatatype_mg)
#define dns_rdatatype_mr	((ch_dns_rdata_type_t)dns_rdatatype_mr)
#define dns_rdatatype_null	((ch_dns_rdata_type_t)dns_rdatatype_null)
#define dns_rdatatype_wks	((ch_dns_rdata_type_t)dns_rdatatype_wks)
#define dns_rdatatype_ptr	((ch_dns_rdata_type_t)dns_rdatatype_ptr)
#define dns_rdatatype_hinfo	((ch_dns_rdata_type_t)dns_rdatatype_hinfo)
#define dns_rdatatype_minfo	((ch_dns_rdata_type_t)dns_rdatatype_minfo)
#define dns_rdatatype_mx	((ch_dns_rdata_type_t)dns_rdatatype_mx)
#define dns_rdatatype_txt	((ch_dns_rdata_type_t)dns_rdatatype_txt)
#define dns_rdatatype_rp	((ch_dns_rdata_type_t)dns_rdatatype_rp)
#define dns_rdatatype_afsdb	((ch_dns_rdata_type_t)dns_rdatatype_afsdb)
#define dns_rdatatype_x25	((ch_dns_rdata_type_t)dns_rdatatype_x25)
#define dns_rdatatype_isdn	((ch_dns_rdata_type_t)dns_rdatatype_isdn)
#define dns_rdatatype_rt	((ch_dns_rdata_type_t)dns_rdatatype_rt)
#define dns_rdatatype_nsap	((ch_dns_rdata_type_t)dns_rdatatype_nsap)
#define dns_rdatatype_nsap_ptr	((ch_dns_rdata_type_t)dns_rdatatype_nsap_ptr)
#define dns_rdatatype_sig	((ch_dns_rdata_type_t)dns_rdatatype_sig)
#define dns_rdatatype_key	((ch_dns_rdata_type_t)dns_rdatatype_key)
#define dns_rdatatype_px	((ch_dns_rdata_type_t)dns_rdatatype_px)
#define dns_rdatatype_gpos	((ch_dns_rdata_type_t)dns_rdatatype_gpos)
#define dns_rdatatype_aaaa	((ch_dns_rdata_type_t)dns_rdatatype_aaaa)
#define dns_rdatatype_loc	((ch_dns_rdata_type_t)dns_rdatatype_loc)
#define dns_rdatatype_nxt	((ch_dns_rdata_type_t)dns_rdatatype_nxt)
#define dns_rdatatype_srv	((ch_dns_rdata_type_t)dns_rdatatype_srv)
#define dns_rdatatype_naptr	((ch_dns_rdata_type_t)dns_rdatatype_naptr)
#define dns_rdatatype_kx	((ch_dns_rdata_type_t)dns_rdatatype_kx)
#define dns_rdatatype_cert	((ch_dns_rdata_type_t)dns_rdatatype_cert)
#define dns_rdatatype_a6	((ch_dns_rdata_type_t)dns_rdatatype_a6)
#define dns_rdatatype_dname	((ch_dns_rdata_type_t)dns_rdatatype_dname)
#define dns_rdatatype_sink	((ch_dns_rdata_type_t)dns_rdatatype_sink)
#define dns_rdatatype_opt	((ch_dns_rdata_type_t)dns_rdatatype_opt)
#define dns_rdatatype_apl	((ch_dns_rdata_type_t)dns_rdatatype_apl)
#define dns_rdatatype_ds	((ch_dns_rdata_type_t)dns_rdatatype_ds)
#define dns_rdatatype_sshfp	((ch_dns_rdata_type_t)dns_rdatatype_sshfp)
#define dns_rdatatype_ipseckey	((ch_dns_rdata_type_t)dns_rdatatype_ipseckey)
#define dns_rdatatype_rrsig	((ch_dns_rdata_type_t)dns_rdatatype_rrsig)
#define dns_rdatatype_nsec	((ch_dns_rdata_type_t)dns_rdatatype_nsec)
#define dns_rdatatype_dnskey	((ch_dns_rdata_type_t)dns_rdatatype_dnskey)
#define dns_rdatatype_dhcid	((ch_dns_rdata_type_t)dns_rdatatype_dhcid)
#define dns_rdatatype_nsec3	((ch_dns_rdata_type_t)dns_rdatatype_nsec3)
#define dns_rdatatype_nsec3param	((ch_dns_rdata_type_t)dns_rdatatype_nsec3param)
#define dns_rdata_type_tlsa	((ch_dns_rdata_type_t)ch_dns_rdata_type_tlsa)
#define dns_rdatatype_smimea	((ch_dns_rdata_type_t)dns_rdatatype_smimea)
#define dns_rdatatype_hip	((ch_dns_rdata_type_t)dns_rdatatype_hip)
#define dns_rdatatype_ninfo	((ch_dns_rdata_type_t)dns_rdatatype_ninfo)
#define dns_rdatatype_rkey	((ch_dns_rdata_type_t)dns_rdatatype_rkey)
#define dns_rdata_type_talink	((ch_dns_rdata_type_t)ch_dns_rdata_type_talink)
#define dns_rdatatype_cds	((ch_dns_rdata_type_t)dns_rdatatype_cds)
#define dns_rdatatype_cdnskey	((ch_dns_rdata_type_t)dns_rdatatype_cdnskey)
#define dns_rdatatype_openpgpkey	((ch_dns_rdata_type_t)dns_rdatatype_openpgpkey)
#define dns_rdatatype_csync	((ch_dns_rdata_type_t)dns_rdatatype_csync)
#define dns_rdatatype_spf	((ch_dns_rdata_type_t)dns_rdatatype_spf)
#define dns_rdatatype_unspec	((ch_dns_rdata_type_t)dns_rdatatype_unspec)
#define dns_rdatatype_nid	((ch_dns_rdata_type_t)dns_rdatatype_nid)
#define dns_rdatatype_l32	((ch_dns_rdata_type_t)dns_rdatatype_l32)
#define dns_rdatatype_l64	((ch_dns_rdata_type_t)dns_rdatatype_l64)
#define dns_rdatatype_lp	((ch_dns_rdata_type_t)dns_rdatatype_lp)
#define dns_rdatatype_eui48	((ch_dns_rdata_type_t)dns_rdatatype_eui48)
#define dns_rdatatype_eui64	((ch_dns_rdata_type_t)dns_rdatatype_eui64)
#define dns_rdata_type_tkey	((ch_dns_rdata_type_t)ch_dns_rdata_type_tkey)
#define dns_rdata_type_tsig	((ch_dns_rdata_type_t)ch_dns_rdata_type_tsig)
#define dns_rdatatype_uri	((ch_dns_rdata_type_t)dns_rdatatype_uri)
#define dns_rdatatype_caa	((ch_dns_rdata_type_t)dns_rdatatype_caa)
#define dns_rdatatype_avc	((ch_dns_rdata_type_t)dns_rdatatype_avc)
#define dns_rdatatype_doa	((ch_dns_rdata_type_t)dns_rdatatype_doa)
#define dns_rdata_type_ta	((ch_dns_rdata_type_t)ch_dns_rdata_type_ta)
#define dns_rdatatype_dlv	((ch_dns_rdata_type_t)dns_rdatatype_dlv)
#define dns_rdatatype_keydata	((ch_dns_rdata_type_t)dns_rdatatype_keydata)
#define dns_rdatatype_ixfr	((ch_dns_rdata_type_t)dns_rdatatype_ixfr)
#define dns_rdatatype_axfr	((ch_dns_rdata_type_t)dns_rdatatype_axfr)
#define dns_rdatatype_mailb	((ch_dns_rdata_type_t)dns_rdatatype_mailb)
#define dns_rdatatype_maila	((ch_dns_rdata_type_t)dns_rdatatype_maila)
#define dns_rdatatype_any	((ch_dns_rdata_type_t)dns_rdatatype_any)

#endif /*CH_DNS_TYPES_H*/

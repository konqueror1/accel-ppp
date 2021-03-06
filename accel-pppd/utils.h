#ifndef __UTILS_H
#define __UTILS_H

#include <netinet/in.h>
#include <stdint.h>

char *u_ip6str(const struct in6_addr *addr, char *buf);

void u_inet_ntoa(in_addr_t, char *str);
int u_readlong(long int *dst, const char *src, long int min, long int max);

size_t u_parse_spaces(const char *str);
size_t u_parse_endstr(const char *str);

size_t u_parse_u8(const char *str, uint8_t *val);
size_t u_parse_u16(const char *str, uint16_t *val);
size_t u_parse_u32(const char *str, uint32_t *val);

int u_parse_ip4addr(const char *src, struct in_addr *addr,
		    const char **err_msg);
size_t u_parse_ip6addr(const char *str, struct in6_addr *addr);
size_t u_parse_ip6cidr(const char *str, struct in6_addr *netp, uint8_t *plen);

int u_randbuf(void *buf, size_t buf_len, int *err);

#endif

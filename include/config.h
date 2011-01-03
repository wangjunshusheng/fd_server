/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.in by autoheader.  */
#ifndef _CONFIG_H_
#define _CONFIG_H_

#ifndef WIN32


/*
 * This file contains prototypes for config.h.in which autoheader
 * could not figure by itself. I.e. if you write your own test which
 * defines a macro you will probably have to put it here, but if you
 * use any standard test AC_* it will be detected by autoheader.
 */

/* #undef WIN32 */

/* Define to a string defining your target. ($target in configure.in) */
#define CPU_VENDOR_OS "x86_64-unknown-linux-gnu"


/* Define to the full path of the ifconfig program */
/* #undef IFCONFIG */

/* Define to the full path of the route program */
/* #undef ROUTE */

/* Define to the full path of the arp program */
/* #undef ARP */


/*
 * These four below should definately be done away with!!
 */

/* Define if your target OS is a BSD derivative */
/* #undef BSD */

/* Define if your target OS is Linux */
#define LINUX 1

/* Define if your target OS is SunOS 5.x */
/* #undef SOLARIS */

/* Define if your target OS is BSD/OS 4.x */
/* #undef BSDI */


/*
 * What are these???
 */

/* ? */
/* #undef USE_IFALIAS */

/* Define if you wish to use the bpf interface */
/* #undef USE_BPF */

/* Define if you wish to use the dlpi interface */
/* #undef USE_DLPI */

/* ? */
/* #undef USE_SOCKET */


/* Define if prototypes for malloc can be found in stdlib.h */
/* #undef STDLIB_MALLOC */

/* Define if your include files defines a prototype for sys_errlist[] */
/* #undef HAVE_SYS_ERRLIST */

/* This isn't used anywhere (that I could find) so I don't know what it means*/
/* #undef IFCONFIG_REQUIRES_DOWN_ADDRESS */

/* Define if your OS have broken cmsg fields in the msghdr struct (Linux) */
#define BROKEN_CMSG_FIELDS 1

/* Define if sockaddr structure has sa_len member */
/* #undef SA_LEN_IN_SOCKADDR */



/*
 * Provide a common way to refer to ints with specific size. (Is this
 * used everywhere?) The names used are {u_,}int{8,16,32,64}_t unless
 * they are defined in sys/types.h they are defined in ints.h using
 * the BIT macros. e.g. if int8_t isn't defined in sys/types.h int8_t
 * is typedef:ed to BIT8.
 *
 */

/* Define to a basic signed type that is  8 bits in size */
/* #undef BIT8 */

/* Define to a basic signed type that is 16 bits in size */
/* #undef BIT16 */

/* Define to a basic signed type that is 32 bits in size */
/* #undef BIT32 */

/* Define to a basic signed type that is 64 bits in size */
/* #undef BIT64 */

/* Define if sys/types.h defines this type */
/* #undef HAVE_int8_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_u_int8_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_int16_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_u_int16_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_int32_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_u_int32_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_int64_t */

/* Define if sys/types.h defines this type */
/* #undef HAVE_u_int64_t */






/* */
/* #undef ETHER_HEADER_USES_ETHER_ADDR */

/* */
/* #undef HAVE_DLIOCRAW */

/* */
/* #undef HAVE_ETHERADDRL */

/* */
/* #undef HAVE_ETHER_ADDR_LEN */

/* */
#define HAVE_MSGHDR_MSG_CONTROL 1

/* */
/* #undef HAVE_SIOCGARP */

/* */
/* #undef HAVE_SIOCGIFCONF */

/* */
/* #undef HAVE_SIOCGIFHWADDR */

/* */
/* #undef HAVE_arpreq */

/* */
/* #undef HAVE_caddr_t */

/* */
/* #undef HAVE_ether_header */

/* */
/* #undef HAVE_ethhdr */

/* */
/* #undef HAVE_ifnet */

/* */
/* #undef HAVE_in_addr */

/* */
/* #undef HAVE_sockaddr */

/* */
/* #undef HAVE_sockaddr_dl */

/* */
/* #undef HAVE_sockaddr_in */

/* */
/* #undef NEED_HAVE_sockaddr_dl */



/*
 * I have yet to figure out what all this need_* stuff is for, shouldn't
 * it suffice with using have_* ???
 */

/* */
/* #undef NEED_LINUX_SOCKIOS_H */

/* */
/* #undef NEED_NETINET_IF_ETHER_H */

/* */
/* #undef NEED_NETINET_IN_H */

/* */
/* #undef NEED_NET_ETHERNET_H */

/* */
/* #undef NEED_NET_IF_ARP_H */

/* */
/* #undef NEED_NET_IF_DL_H */

/* */
/* #undef NEED_NET_IF_H */

/* */
/* #undef NEED_SYS_BITYPES_H */

/* */
/* #undef NEED_SYS_DLPI_H */

/* */
/* #undef NEED_SYS_ETHERNET_H */

/* */
/* #undef NEED_SYS_SOCKETIO_H */

/* */
/* #undef NEED_SYS_SOCKET_H */

/* */
/* #undef NEED_SYS_SOCKIO_H */

/* */
/* #undef NEED_SYS_TYPES_H */

/* if we have the openssl with engine support */
/* #undef HAVE_SSL_ENGINE */
/* ... with Rainbow patches */
/* #undef HAVE_RAINBOW_PATCHES */
/* ... with Rainbow's libswift */
/* #undef HAVE_SWIFT */
/* ... with one of our HW checks */
/* #undef HAVE_LOCAL_ENGINE_SETUP */
/* #undef HAVE_SSL_HW_CHECK */
/* ... with patch to get cfg password from card */
/* #undef HAVE_ENGINE_GET_PASSWORD */
/* ... with our buffer patches */
/* #undef HAVE_SSL_BUFFER_CB */

/* */
/* #undef ISD_SYSTEM_VSN */

/* eventpoll */
/* #undef HAVE_KPOLL */

/* Have/use netfilter (a.k.a. iptables) */
/* #undef HAVE_NETFILTER */

/* Non-standard support for "non-local connect()" in Linux 2.4 */
/* #undef HAVE_NONLOCAL_CONNECT */

/* atomic asmebler op in asm/atomic.h ? */
/* #undef HAVE_ATOMIC_OPS */



/* Description */
/* #undef DARWIN */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the <malloc.h> header file. */
#define HAVE_MALLOC_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME ""

/* Define to the full name and version of this package. */
#define PACKAGE_STRING ""

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME ""

/* Define to the version of this package. */
#define PACKAGE_VERSION ""

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

#endif  /* WIN32 */
#endif /* _CONFIG_H_ */

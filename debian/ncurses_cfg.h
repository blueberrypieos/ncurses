#ifndef NC_CONFIG_H
#define NC_CONFIG_H
#define HAVE_LONG_FILE_NAMES 1
#define TERMINFO_DIRS "/usr/share/terminfo"
#define TERMINFO "/usr/share/terminfo"
#define HAVE_BIG_CORE 1
#define TERMPATH "/etc/termcap:/usr/share/misc/termcap"
#define USE_HOME_TERMINFO 1
#define USE_ROOT_ENVIRON 1
#define HAVE_REMOVE 1
#define HAVE_LANGINFO_CODESET 1
#define USE_WIDEC_SUPPORT 1
#define NCURSES_WIDECHAR 1
#define HAVE_BTOWC 1
#define HAVE_WCTOB 1
#define HAVE_MBTOWC 1
#define HAVE_MBLEN 1
#define NCURSES_EXT_FUNCS 1
#define NCURSES_NO_PADDING 1
#define HAVE_INTTYPES_H 1
#define HAVE_UNISTD_H 1
#define USE_SIGWINCH 1
#define USE_ASSUMED_COLOR 1
#define USE_HASHMAP 1
#define GCC_SCANFLIKE(fmt,var) __attribute__((format(scanf,fmt,var)))
#define GCC_PRINTFLIKE(fmt,var) __attribute__((format(printf,fmt,var)))
#define GCC_UNUSED __attribute__((unused))
#define GCC_NORETURN __attribute__((noreturn))
#define HAVE_GETTIMEOFDAY 1
#define HAVE_DIRENT_H 1
#define HAVE_REGEX_H_FUNCS 1
#define HAVE_FCNTL_H 1
#define HAVE_GETOPT_H 1
#define HAVE_LOCALE_H 1
#define HAVE_SYS_IOCTL_H 1
#define HAVE_SYS_PARAM_H 1
#define HAVE_SYS_TIME_H 1
#define HAVE_TTYENT_H 1
#define HAVE_WCTYPE_H 1
#define HAVE_SYS_TIME_SELECT 1
#define SIG_ATOMIC_T volatile sig_atomic_t
#define HAVE_GETCWD 1
#define HAVE_GETTTYNAM 1
#define HAVE_SELECT 1
#define HAVE_SETENV 1
#define HAVE_SIGACTION 1
#define HAVE_STRDUP 1
#define HAVE_STRSTR 1
#define HAVE_TCGETPGRP 1
#define HAVE_VSNPRINTF 1
#define HAVE_ISASCII 1
#define HAVE_NANOSLEEP 1
#define HAVE_VSSCANF 1
#define HAVE_SIZECHANGE 1
#define NCURSES_VERSION_STRING "6.0.20150808"
#define NCURSES_OSPEED_COMPAT 1
#include <ncurses_def.h>
#endif

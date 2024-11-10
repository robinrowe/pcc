/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* Using a.out ABI */
#undef AOUTABI

/* Define path to alternate assembler */
#undef ASSEMBLER

/* Using Classic 68k ABI */
#undef CLASSIC68K

/* Using COFF ABI */
#undef COFFABI

/* Define path to alternate compiler */
#undef COMPILER

/* Using ECOFF ABI */
#undef ECOFFABI

/* Using ELF ABI */
#undef ELFABI

/* Define to 1 if printf supports C99 size specifiers */
#undef HAVE_C99_FORMAT

/* Define to 1 if you have the `ffs' function. */
#undef HAVE_FFS

/* Define to 1 if you have the `getopt' function. */
#undef HAVE_GETOPT

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* Define to 1 if you have the <libgen.h> header file. */
#undef HAVE_LIBGEN_H

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to 1 if you have the `mkstemp' function. */
#undef HAVE_MKSTEMP

/* Define to 1 if you have the `snprintf' function. */
#undef HAVE_SNPRINTF

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#undef HAVE_STDLIB_H

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#undef HAVE_STRING_H

/* Define to 1 if you have the `strlcat' function. */
#undef HAVE_STRLCAT

/* Define to 1 if you have the `strlcpy' function. */
#undef HAVE_STRLCPY

/* Define to 1 if you have the `strtold' function. */
#undef HAVE_STRTOLD

/* Define to 1 if you have the <sys/stat.h> header file. */
#undef HAVE_SYS_STAT_H

/* Define to 1 if you have the <sys/types.h> header file. */
#undef HAVE_SYS_TYPES_H

/* Define to 1 if you have <sys/wait.h> that is POSIX.1 compatible. */
#undef HAVE_SYS_WAIT_H

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define to 1 if you have the `vfork' function. */
#undef HAVE_VFORK

/* Define to 1 if you have the `vsnprintf' function. */
#undef HAVE_VSNPRINTF

/* Define if host is BIG endian */
#undef HOST_BIG_ENDIAN

/* Define if host is LITTLE endian */
#undef HOST_LITTLE_ENDIAN

/* Define alternate standard lib directory */
#undef LIBDIR

/* Define path to alternate linker */
#undef LINKER

/* Using Mach-O ABI */
#undef MACHOABI

/* Define target Multi-Arch path */
#undef MULTIARCH_PATH

/* Define to the address where bug reports for this package should be sent. */
#undef PACKAGE_BUGREPORT

/* Define to the full name of this package. */
#undef PACKAGE_NAME

/* Define to the full name and version of this package. */
#undef PACKAGE_STRING

/* Define to the one symbol short name of this package. */
#undef PACKAGE_TARNAME

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#undef PACKAGE_VERSION

/* Major version no */
#undef PCC_MAJOR

/* Minor version no */
#undef PCC_MINOR

/* Minor minor version no */
#undef PCC_MINORMINOR

/* Using PE/COFF ABI */
#undef PECOFFABI

/* Define path to alternate preprocessor */
#undef PREPROCESSOR

/* Enable STABS debugging output */
#undef STABS

/* Enable DWARF debugging output */
#undef DWARF

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* Define alternate standard include directory */
#undef STDINC

/* Define if target defaults to BIG endian */
#undef TARGET_BIG_ENDIAN

/* Define if target defaults to LITTLE endian */
#undef TARGET_LITTLE_ENDIAN

/* Enable thread-local storage (TLS). */
#undef TLS

/* Version string */
#undef VERSSTR

/* Target string */
#undef TARGSTR

/* Size of wide-character type in chars */
#undef WCHAR_SIZE

/* Type to use for wide characters */
#undef WCHAR_TYPE

/* determine whether 16, 32 or 64 bit host */
#undef SIZEOF_INT_P

/* Compile for use of libvmf */
#undef LIBVMF

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#undef YYTEXT_POINTER

# 1 "source/CNN.cpp"
# 1 "source/CNN.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "source/CNN.cpp" 2
# 1 "source/CONV.h" 1
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
# 275 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
# 276 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
# 279 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 1 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 1 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3



namespace std {

  template<typename _Alloc>
    class allocator;







  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;
# 82 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
}
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 1 3
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3




namespace std {

  using ::ptrdiff_t;
  using ::size_t;

}
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 27 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 66 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned long _fsize_t;




  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
# 164 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pctype;
# 178 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__wctype;
# 193 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pwctype;
# 217 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  int iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalpha_l(wint_t _C,_locale_t _Locale);
  int iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswupper_l(wint_t _C,_locale_t _Locale);
  int iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswlower_l(wint_t _C,_locale_t _Locale);
  int iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswdigit_l(wint_t _C,_locale_t _Locale);
  int iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswspace_l(wint_t _C,_locale_t _Locale);
  int iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswpunct_l(wint_t _C,_locale_t _Locale);
  int iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalnum_l(wint_t _C,_locale_t _Locale);
  int iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswprint_l(wint_t _C,_locale_t _Locale);
  int iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswgraph_l(wint_t _C,_locale_t _Locale);
  int iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int iswascii(wint_t _C);
  int isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towlower_l(wint_t _C,_locale_t _Locale);
  int iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsym_l(wint_t _C,_locale_t _Locale);
  int is_wctype(wint_t _C,wctype_t _Type);


  int iswblank(wint_t _C);







  __attribute__ ((__dllimport__)) wchar_t * _wgetcwd(wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t * _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  wchar_t * _wgetdcwd_nolock(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) int _wchdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wmkdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wrmdir(const wchar_t *_Path);





  __attribute__ ((__dllimport__)) int _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int _wrename(const wchar_t *_NewFilename,const wchar_t *_OldFilename);
  __attribute__ ((__dllimport__)) wchar_t * _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;




  __attribute__ ((__dllimport__)) wchar_t * _wsetlocale(int _Category,const wchar_t *_Locale);





  __attribute__ ((__dllimport__)) intptr_t _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);
# 360 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned short _ino_t;

  typedef unsigned short ino_t;





  typedef unsigned int _dev_t;

  typedef unsigned int dev_t;







  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 412 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _stat32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };


  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };


  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };

  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };

  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
# 493 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) int _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
# 507 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *_cgetws(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wint_t _getwch(void);
  __attribute__ ((__dllimport__)) wint_t _getwche(void);
  __attribute__ ((__dllimport__)) wint_t _putwch(wchar_t _WCh);
  __attribute__ ((__dllimport__)) wint_t _ungetwch(wint_t _WCh);
  __attribute__ ((__dllimport__)) int _cputws(const wchar_t *_String);
  __attribute__ ((__dllimport__)) int _cwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int _cwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  wint_t _putwch_nolock(wchar_t _WCh);
  wint_t _getwch_nolock(void);
  wint_t _getwche_nolock(void);
  wint_t _ungetwch_nolock(wint_t _WCh);
# 540 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ ,size_t _SizeInWords,const wchar_t * __restrict__ _Format,_locale_t _Locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;

  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);






  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ _Dest,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 621 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);



  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 669 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  float wcstof( const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof (const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);

  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;




  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);





  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t * wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t * wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;





  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };





  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;



  wchar_t * _wctime(const time_t *_Time) ;
# 816 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef int mbstate_t;
  typedef wchar_t _Wint_t;

  wint_t btowc(int);
  size_t mbrlen(const char * __restrict__ _Ch,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbrtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbsrtowcs(wchar_t * __restrict__ _Dest,const char ** __restrict__ _PSrc,size_t _Count,mbstate_t * __restrict__ _State) ;
  size_t wcrtomb(char * __restrict__ _Dest,wchar_t _Source,mbstate_t * __restrict__ _State) ;
  size_t wcsrtombs(char * __restrict__ _Dest,const wchar_t ** __restrict__ _PSource,size_t _Count,mbstate_t * __restrict__ _State) ;
  int wctob(wint_t _WCh);


  wchar_t * wmemset(wchar_t *s, wchar_t c, size_t n);
                wchar_t * wmemchr(const wchar_t *s, wchar_t c, size_t n);
  int wmemcmp(const wchar_t *s1, const wchar_t *s2,size_t n);
  wchar_t * wmemcpy(wchar_t * __restrict__ s1,const wchar_t * __restrict__ s2,size_t n) ;
  wchar_t * wmemmove(wchar_t *s1, const wchar_t *s2, size_t n) ;
  int fwide(FILE *stream,int mode);
  int mbsinit(const mbstate_t *ps);
  __extension__ long long wcstoll(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);
  __extension__ unsigned long long wcstoull(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);


  void * memmove(void *_Dst,const void *_Src,size_t _MaxCount);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount) ;
# 876 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
}


#pragma pack(pop)


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 2 3
# 881 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3
# 47 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 64 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::mbstate_t;

}
# 138 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;



  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;





  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }


}







namespace __gnu_cxx {






  using ::wcstold;
# 257 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 2 3
# 69 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
namespace std {
# 89 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 110 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 132 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 238 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
}
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3

namespace std {
# 73 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;




  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 1 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3

#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 60 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 117 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx {
# 140 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
# 61 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 62 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3

namespace std {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));

}
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
# 36 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 36 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 68 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
namespace __gnu_cxx {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 193 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 416 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;

      template<typename _Up>
        struct _Wrap_type
 { };

      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);

      template<typename _Up>
        static __two __test(...);

    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };

  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };

}
# 64 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
# 32 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
# 32 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3




namespace __gnu_cxx {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
# 32 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
# 32 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3




namespace __gnu_cxx {
# 51 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 96 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
# 60 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
# 34 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 36 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 95 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
# 104 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3






namespace std {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 113 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 149 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 211 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 257 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
}
# 67 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 66 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3

namespace std {
# 84 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 111 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 135 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };


  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3



namespace std {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }
# 108 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 166 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

}
# 69 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
# 68 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
# 94 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 281 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 393 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 420 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 443 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 469 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 484 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 510 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 533 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 559 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 578 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 621 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 647 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 673 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }



}

namespace __gnu_cxx {
# 694 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 792 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
# 47 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3


namespace std {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
# 134 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 339 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 377 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 462 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 514 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 542 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 572 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 631 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 689 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 733 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 791 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
# 952 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;




                                                                  ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }



  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

}

namespace std {
# 1028 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1060 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1091 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;




                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1125 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;




                                                       ;
                                                       ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1165 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1202 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3








namespace __gnu_cxx {
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std {
# 229 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((wint_t)(0xFFFF)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 1 3
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
  };
# 75 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  int _configthreadlocale(int _Flag);
  char * setlocale(int _Category,const char *_Locale);
  __attribute__ ((__dllimport__)) struct lconv * localeconv(void);
  _locale_t _get_current_locale(void);
  _locale_t _create_locale(int _Category,const char *_Locale);
  void _free_locale(_locale_t _Locale);
  _locale_t __get_current_locale(void);
  _locale_t __create_locale(int _Category,const char *_Locale);
  void __free_locale(_locale_t _Locale);







}


#pragma pack(pop)
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 2 3








namespace std {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3



namespace std {

  typedef int* __c_locale;





  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, __null);
    char* __sav = __null;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }

}
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 2 3



extern "C" {
# 72 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __updatetlocinfo(void);
  pthreadmbcinfo __updatetmbcinfo(void);
# 100 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  __attribute__ ((__dllimport__)) int _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalpha(int _C);
  __attribute__ ((__dllimport__)) int _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isupper(int _C);
  __attribute__ ((__dllimport__)) int _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int islower(int _C);
  __attribute__ ((__dllimport__)) int _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isdigit(int _C);
  __attribute__ ((__dllimport__)) int _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isxdigit(int _C);
  __attribute__ ((__dllimport__)) int _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isspace(int _C);
  __attribute__ ((__dllimport__)) int _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int ispunct(int _C);
  __attribute__ ((__dllimport__)) int _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalnum(int _C);
  __attribute__ ((__dllimport__)) int _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isprint(int _C);
  __attribute__ ((__dllimport__)) int _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isgraph(int _C);
  __attribute__ ((__dllimport__)) int _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int iscntrl(int _C);
  __attribute__ ((__dllimport__)) int _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int toupper(int _C);
  __attribute__ ((__dllimport__)) int tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _toupper(int _C);
  __attribute__ ((__dllimport__)) int _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __isascii(int _C);
  __attribute__ ((__dllimport__)) int __toascii(int _C);
  __attribute__ ((__dllimport__)) int __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __iscsym(int _C);


int isblank(int _C);
# 193 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern int * __imp___mb_cur_max;
# 275 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
}
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 2 3
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
namespace std {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

namespace std {
# 54 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 1 3
# 34 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 1 3
# 30 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 1 3
# 70 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 2 3



extern "C" {




__attribute__ ((__dllimport__)) extern int * _errno(void);


errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
# 74 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 3
}
# 71 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 73 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3
# 340 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 374 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
# 401 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}







extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}
# 767 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
}
# 163 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 1 3
# 32 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3

namespace __gnu_cxx {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 1 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3




# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 1 3
# 48 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
# 34 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 1 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3


#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 92 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 2 3



namespace __gnu_cxx {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 2 3
# 49 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 2 3

namespace std {
# 59 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 204 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
}
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 1 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 1 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 36 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 2 3

namespace std {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   if (true)
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   if (false)
     {
       __out._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 46 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 1 3
# 60 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
namespace std {
# 99 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 1 3
# 60 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
namespace std {
# 97 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 2 3
# 50 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 1 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 33 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 2 3

namespace std {
# 103 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 140 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {



     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {



     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {



            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      basic_string()



      : _M_dataplus(_S_construct(size_type(), _CharT(), _Alloc()), _Alloc()){ }





      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 468 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 516 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 549 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 589 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 695 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 724 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 737 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 757 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 778 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }





      bool
      empty() const
      { return this->size() == 0; }
# 807 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 824 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 845 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 864 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 920 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
# 935 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 return this->append(__s, traits_type::length(__s));
      }
# 967 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 989 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 1045 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 1061 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 1073 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 1089 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1101 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1129 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1144 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1175 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1197 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1220 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1238 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1261 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1278 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1302 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1318 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1338 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1357 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1379 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1403 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1422 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1445 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1463 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1481 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1502 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1523 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1545 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                            ;
                                             ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1620 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct_aux_2(static_cast<size_type>(__beg),
        __end, __a); }

      static _CharT*
      _S_construct_aux_2(size_type __req, _CharT __c, const _Alloc& __a)
      { return _S_construct(__req, __c, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1701 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1711 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1721 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1753 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1766 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1780 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1797 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1810 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1825 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1838 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1855 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1868 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1883 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1896 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1915 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1929 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1944 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1957 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1976 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1990 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2005 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2019 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2036 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 2049 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2065 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2078 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2095 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2110 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2128 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2158 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2182 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2200 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2223 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2248 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
# 2260 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2331 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2377 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2414 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2451 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2488 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2525 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2562 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2579 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2597 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2620 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2638 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 53 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 1 3
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {





 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 if (true)
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {





 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 if (true)
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {





      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
# 239 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
                                             ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
                                             ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
                                              ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {

                           ;




       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
                                               ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {




      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 576 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   if (true)
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 56 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3


namespace std {
# 61 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale() throw();
# 125 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 135 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 150 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 163 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 175 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 204 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw();







    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
# 251 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 0 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once() throw();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 336 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 367 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);



    static __c_locale
    _S_get_c_locale();

    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 431 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const throw();
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 574 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 591 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 608 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 635 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 649 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 666 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 685 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 699 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const throw();

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 728 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 744 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 757 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3

namespace std {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      if (true)
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      if (false)
 {
   _M_impl->_M_remove_reference();
                          ;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      if (true)
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      if (false)
 {
   __tmp->_M_remove_reference();
                          ;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      if (true)
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      if (false)
 {
   delete [] __c;
                          ;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 815 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3
# 53 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
namespace std {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 206 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
  class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 262 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 337 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 368 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 400 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 426 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 443 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 455 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;



    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void) throw();


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init() throw();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 559 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 575 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 592 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 618 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 669 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 681 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    imbue(const locale& __loc) throw();
# 692 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 703 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 722 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static int
    xalloc() throw();
# 738 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 759 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 776 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base() throw ();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3








namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 233 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 348 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 373 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 400 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 426 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 440 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 458 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 474 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 485 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 505 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 521 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 531 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 552 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 567 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 578 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 590 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 603 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int
      sync() { return 0; }
# 625 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 641 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 663 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 676 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 700 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 718 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 744 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 759 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 1 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 799 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 2 3
# 44 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 1 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3




# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 1 3
# 13 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 13 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 166 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
  typedef wchar_t wctrans_t;
  wint_t towctrans(wint_t,wctrans_t);
  wctrans_t wctrans(const char *);
  wctype_t wctype(const char *);


}


#pragma pack(pop)
# 46 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 2 3
# 75 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
namespace std {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 42 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 3
namespace std {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = 1 << 0;
    static const mask lower = 1 << 1;
    static const mask alpha = 1 << 2;
    static const mask digit = 1 << 3;
    static const mask xdigit = 1 << 4;
    static const mask space = 1 << 5;
    static const mask print = 1 << 6;
    static const mask graph = (1 << 2) | (1 << 3) | (1 << 9);
    static const mask cntrl = 1 << 8;
    static const mask punct = 1 << 9;
    static const mask alnum = (1 << 2) | (1 << 3);
  };

}
# 43 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3






# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 1 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3




namespace std {
# 48 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }



}
# 50 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {
# 63 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 141 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 159 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 176 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 192 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 208 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 222 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 237 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 251 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 266 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 283 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 302 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 321 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 343 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 368 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 387 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 406 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 425 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 443 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 460 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 476 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 493 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 512 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 533 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 555 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 579 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 602 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 671 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 708 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 721 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 734 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 749 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 763 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 777 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 792 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 809 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 825 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 842 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 862 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 889 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 920 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 953 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1002 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1019 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1035 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1052 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1072 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1095 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1121 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1147 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1172 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1205 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1216 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();


      virtual
      ~ctype();
# 1240 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1259 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1277 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1295 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1312 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1329 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1345 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1362 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1382 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1404 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1427 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1453 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype() throw();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 1 3
# 37 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 3
namespace std {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return (_M_table[static_cast<unsigned char>(__c) ] & __m); }


  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }

}
# 1509 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1634 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1671 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1685 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1699 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1712 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1743 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1756 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1769 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1786 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1798 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1811 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1824 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1837 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
# 1907 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2245 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2266 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2284 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2326 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2389 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2414 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2462 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
# 2520 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 1 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3

namespace std {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     if (true)
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     if (false)
       {
  delete __tmp;
                         ;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      if (true)
 {
   _M_grouping_size = __np.grouping().size();
   __grouping = new char[_M_grouping_size];
   __np.grouping().copy(__grouping, _M_grouping_size);
   _M_grouping = __grouping;
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(_M_grouping[0]) > 0
        && (_M_grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));

   _M_truename_size = __np.truename().size();
   __truename = new _CharT[_M_truename_size];
   __np.truename().copy(__truename, _M_truename_size);
   _M_truename = __truename;

   _M_falsename_size = __np.falsename().size();
   __falsename = new _CharT[_M_falsename_size];
   __np.falsename().copy(__falsename, _M_falsename_size);
   _M_falsename = __falsename;

   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();

   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);
 }
      if (false)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
                          ;
 }
    }
# 135 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 729 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 965 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1026 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1151 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
# 1188 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2601 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3


namespace std {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 60 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 125 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 136 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
                          ;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 189 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 210 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 245 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 283 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 295 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 335 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 349 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 378 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 398 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 418 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 437 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 1 3
# 34 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
# 34 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 144 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 471 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3
# 45 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3


namespace std {
# 53 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 80 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 106 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 163 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 248 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 281 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 309 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 322 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      flush();
# 333 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      pos_type
      tellp();
# 344 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      seekp(pos_type);
# 356 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 375 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 394 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 404 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 425 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 446 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 488 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 538 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
# 582 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   if (true)
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   if (true)
     { _M_write(__s, __n); }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   if (true)
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   if (false)
     {
       __out._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 586 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3
# 40 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 1 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3




namespace std {
# 53 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 89 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 279 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      get();
# 293 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type& __c);
# 320 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      peek();
# 463 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      putback(char_type __c);
# 513 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      unget();
# 531 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int
      sync();
# 545 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      pos_type
      tellg();
# 560 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(pos_type);
# 576 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {

      bool _M_ok;

    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 667 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 680 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      operator bool() const
      { return _M_ok; }
    };
# 697 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 739 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 767 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 828 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
# 850 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
}



# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 1 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
# 39 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   if (true)
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::failbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          if (true)
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 512 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 854 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 2 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3

namespace std {
# 58 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;

}
# 1 "source/CONV.h" 2

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_push.h" 1 3
# 11 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 101 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 120 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __extension__ typedef long long fpos_t;
# 157 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) int _filbuf(FILE *_File);
  __attribute__ ((__dllimport__)) int _flsbuf(int _Ch,FILE *_File);



  __attribute__ ((__dllimport__)) FILE * _fsopen(const char *_Filename,const char *_Mode,int _ShFlag);

  void clearerr(FILE *_File);
  int fclose(FILE *_File);
  __attribute__ ((__dllimport__)) int _fcloseall(void);



  __attribute__ ((__dllimport__)) FILE * _fdopen(int _FileHandle,const char *_Mode);

  int feof(FILE *_File);
  int ferror(FILE *_File);
  int fflush(FILE *_File);
  int fgetc(FILE *_File);
  __attribute__ ((__dllimport__)) int _fgetchar(void);
  int fgetpos(FILE * __restrict__ _File ,fpos_t * __restrict__ _Pos);
  char * fgets(char * __restrict__ _Buf,int _MaxCount,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fileno(FILE *_File);



  __attribute__ ((__dllimport__)) char * _tempnam(const char *_DirName,const char *_FilePrefix);
  __attribute__ ((__dllimport__)) int _flushall(void);
  FILE * fopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode) ;
  FILE *fopen64(const char * __restrict__ filename,const char * __restrict__ mode);
  int fprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,...);
  int fputc(int _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) int _fputchar(int _Ch);
  int fputs(const char * __restrict__ _Str,FILE * __restrict__ _File);
  size_t fread(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  FILE * freopen(const char * __restrict__ _Filename,const char * __restrict__ _Mode,FILE * __restrict__ _File) ;
  int fscanf(FILE * __restrict__ _File,const char * __restrict__ _Format,...) ;
  int _fscanf_l(FILE * __restrict__ _File,const char * __restrict__ _Format,_locale_t locale,...) ;
  int fsetpos(FILE *_File,const fpos_t *_Pos);
  int fseek(FILE *_File,long _Offset,int _Origin);
  int fseeko64(FILE* stream, _off64_t offset, int whence);
  long ftell(FILE *_File);
  _off64_t ftello64(FILE * stream);
  __extension__ int _fseeki64(FILE *_File,long long _Offset,int _Origin);
  __extension__ long long _ftelli64(FILE *_File);
  size_t fwrite(const void * __restrict__ _Str,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  int getc(FILE *_File);
  int getchar(void);
  __attribute__ ((__dllimport__)) int _getmaxstdio(void);
  char * gets(char *_Buffer) ;
  int _getw(FILE *_File);


  void perror(const char *_ErrMsg);

  __attribute__ ((__dllimport__)) int _pclose(FILE *_File);
  __attribute__ ((__dllimport__)) FILE * _popen(const char *_Command,const char *_Mode);




  int printf(const char * __restrict__ _Format,...);
  int putc(int _Ch,FILE *_File);
  int putchar(int _Ch);
  int puts(const char *_Str);
  __attribute__ ((__dllimport__)) int _putw(int _Word,FILE *_File);


  int remove(const char *_Filename);
  int rename(const char *_OldFilename,const char *_NewFilename);
  __attribute__ ((__dllimport__)) int _unlink(const char *_Filename);

  int unlink(const char *_Filename) ;


  void rewind(FILE *_File);
  __attribute__ ((__dllimport__)) int _rmtmp(void);
  int scanf(const char * __restrict__ _Format,...) ;
  int _scanf_l(const char * __restrict__ format,_locale_t locale,... ) ;
  void setbuf(FILE * __restrict__ _File,char * __restrict__ _Buffer) ;
  __attribute__ ((__dllimport__)) int _setmaxstdio(int _Max);
  __attribute__ ((__dllimport__)) unsigned int _set_output_format(unsigned int _Format);
  __attribute__ ((__dllimport__)) unsigned int _get_output_format(void);
  unsigned int __mingw_set_output_format(unsigned int _Format);
  unsigned int __mingw_get_output_format(void);




  int setvbuf(FILE * __restrict__ _File,char * __restrict__ _Buf,int _Mode,size_t _Size);
  __attribute__ ((__dllimport__)) int _scprintf(const char * __restrict__ _Format,...);
  int sscanf(const char * __restrict__ _Src,const char * __restrict__ _Format,...) ;
  int _sscanf_l(const char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _snscanf(const char * __restrict__ _Src,size_t _MaxCount,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snscanf_l(const char * __restrict__ input,size_t length,const char * __restrict__ format,_locale_t locale,...) ;
  FILE * tmpfile(void) ;
  char * tmpnam(char *_Buffer);
  int ungetc(int _Ch,FILE *_File);
  int vfprintf(FILE * __restrict__ _File,const char * __restrict__ _Format,va_list _ArgList);
  int vprintf(const char * __restrict__ _Format,va_list _ArgList);


  extern
    __attribute__((__format__ (gnu_printf, 3, 0))) __attribute__ ((__nonnull__ (3)))
    int __mingw_vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,
      va_list _ArgList);
  extern
    __attribute__((__format__ (gnu_printf, 3, 4))) __attribute__ ((__nonnull__ (3)))
    int __mingw_snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
  extern
    __attribute__((__format__ (gnu_printf, 1, 2))) __attribute__ ((__nonnull__ (1)))
    int __mingw_printf(const char * __restrict__ , ... ) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 1, 0))) __attribute__ ((__nonnull__ (1)))
    int __mingw_vprintf (const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_fprintf (FILE * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vfprintf (FILE * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 3))) __attribute__ ((__nonnull__ (2)))
    int __mingw_sprintf (char * __restrict__ , const char * __restrict__ , ...) __attribute__ ((__nothrow__));
  extern
    __attribute__((__format__ (gnu_printf, 2, 0))) __attribute__ ((__nonnull__ (2)))
    int __mingw_vsprintf (char * __restrict__ , const char * __restrict__ , va_list) __attribute__ ((__nothrow__));

  __attribute__ ((__dllimport__)) int _snprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _snprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,...) ;
  __attribute__ ((__dllimport__)) int _vsnprintf(char * __restrict__ _Dest,size_t _Count,const char * __restrict__ _Format,va_list _Args) ;
  __attribute__ ((__dllimport__)) int _vsnprintf_l(char * __restrict__ buffer,size_t count,const char * __restrict__ format,_locale_t locale,va_list argptr) ;
  int sprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,...) ;
  int _sprintf_l(char * __restrict__ buffer,const char * __restrict__ format,_locale_t locale,...) ;
  int vsprintf(char * __restrict__ _Dest,const char * __restrict__ _Format,va_list _Args) ;







  int vsnprintf(char * __restrict__ _DstBuf,size_t _MaxCount,const char * __restrict__ _Format,va_list _ArgList) ;

  int snprintf(char * __restrict__ s, size_t n, const char * __restrict__ format, ...);
# 312 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  int vscanf(const char * __restrict__ Format, va_list argp);
  int vfscanf (FILE * __restrict__ fp, const char * __restrict__ Format,va_list argp);
  int vsscanf (const char * __restrict__ _Str,const char * __restrict__ Format,va_list argp);

  __attribute__ ((__dllimport__)) int _vscprintf(const char * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _set_printf_count_output(int _Value);
  __attribute__ ((__dllimport__)) int _get_printf_count_output(void);
# 475 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 3
  __attribute__ ((__dllimport__)) void _lock_file(FILE *_File);
  __attribute__ ((__dllimport__)) void _unlock_file(FILE *_File);
  __attribute__ ((__dllimport__)) int _fclose_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) int _fflush_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fread_nolock(void * __restrict__ _DstBuf,size_t _ElementSize,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _fseek_nolock(FILE *_File,long _Offset,int _Origin);
  __attribute__ ((__dllimport__)) long _ftell_nolock(FILE *_File);
  __extension__ __attribute__ ((__dllimport__)) int _fseeki64_nolock(FILE *_File,long long _Offset,int _Origin);
  __extension__ __attribute__ ((__dllimport__)) long long _ftelli64_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) size_t _fwrite_nolock(const void * __restrict__ _DstBuf,size_t _Size,size_t _Count,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) int _ungetc_nolock(int _Ch,FILE *_File);





  char * tempnam(const char *_Directory,const char *_FilePrefix) ;
  int fcloseall(void) ;
  FILE * fdopen(int _FileHandle,const char *_Format) ;
  int fgetchar(void) ;
  int fileno(FILE *_File) ;
  int flushall(void) ;
  int fputchar(int _Ch) ;
  int getw(FILE *_File) ;
  int putw(int _Ch,FILE *_File) ;
  int rmtmp(void) ;



}


#pragma pack(pop)


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdio_s.h" 2 3
# 509 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw_print_pop.h" 1 3
# 511 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdio.h" 2 3
# 2 "source/CONV.h" 2

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 1 3 4
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 3 4
# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 1 3 4





# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3 4
# 6 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\limits.h" 2 3 4
# 38 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/include\\limits.h" 2 3 4
# 10 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 36 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef int ( *_onexit_t)(void);
# 46 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  typedef struct _div_t {
    int quot;
    int rem;
  } div_t;

  typedef struct _ldiv_t {
    long quot;
    long rem;
  } ldiv_t;





#pragma pack(4)
 typedef struct {
    unsigned char ld[10];
  } _LDOUBLE;
#pragma pack()



 typedef struct {
    double x;
  } _CRT_DOUBLE;

  typedef struct {
    float f;
  } _CRT_FLOAT;




  typedef struct {
    long double x;
  } _LONGDOUBLE;



#pragma pack(4)
 typedef struct {
    unsigned char ld12[12];
  } _LDBL12;
#pragma pack()
# 132 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
 typedef void ( *_purecall_handler)(void);

  __attribute__ ((__dllimport__)) _purecall_handler _set_purecall_handler(_purecall_handler _Handler);
  __attribute__ ((__dllimport__)) _purecall_handler _get_purecall_handler(void);

  typedef void ( *_invalid_parameter_handler)(const wchar_t *,const wchar_t *,const wchar_t *,unsigned int,uintptr_t);
  _invalid_parameter_handler _set_invalid_parameter_handler(_invalid_parameter_handler _Handler);
  _invalid_parameter_handler _get_invalid_parameter_handler(void);
# 148 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  __attribute__ ((__dllimport__)) unsigned long * __doserrno(void);

  errno_t _set_doserrno(unsigned long _Value);
  errno_t _get_doserrno(unsigned long *_Value);




  extern __attribute__ ((__dllimport__)) char *_sys_errlist[1];
  extern __attribute__ ((__dllimport__)) int _sys_nerr;
# 172 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern int * __imp___argc;







  extern char *** __imp___argv;







  extern wchar_t *** __imp___wargv;
# 200 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char *** __imp__environ;
# 209 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t *** __imp__wenviron;
# 218 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern char ** __imp__pgmptr;
# 227 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern wchar_t ** __imp__wpgmptr;



  errno_t _get_pgmptr(char **_Value);
  errno_t _get_wpgmptr(wchar_t **_Value);




  extern int * __imp__fmode;



  __attribute__ ((__dllimport__)) errno_t _set_fmode(int _Mode);
  __attribute__ ((__dllimport__)) errno_t _get_fmode(int *_PMode);





  extern unsigned int * __imp__osplatform;
# 257 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__osver;
# 266 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winver;
# 275 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winmajor;
# 284 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  extern unsigned int * __imp__winminor;




  errno_t _get_osplatform(unsigned int *_Value);
  errno_t _get_osver(unsigned int *_Value);
  errno_t _get_winver(unsigned int *_Value);
  errno_t _get_winmajor(unsigned int *_Value);
  errno_t _get_winminor(unsigned int *_Value);




  extern "C++" {
    template <typename _CountofType,size_t _SizeOfArray> char (*__countof_helper( _CountofType (&_Array)[_SizeOfArray]))[_SizeOfArray];

  }





  void __attribute__ ((__nothrow__)) exit(int _Code) __attribute__ ((__noreturn__));
  __attribute__ ((__dllimport__)) void __attribute__ ((__nothrow__)) _exit(int _Code) __attribute__ ((__noreturn__));



  void _Exit(int) __attribute__ ((__noreturn__));
# 321 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  void __attribute__((noreturn)) abort(void);




  __attribute__ ((__dllimport__)) unsigned int _set_abort_behavior(unsigned int _Flags,unsigned int _Mask);



  int abs(int _X);
  long labs(long _X);


  __extension__ long long _abs64(long long);
  int atexit(void ( *)(void));


  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);

  int atoi(const char *_Str);
  __attribute__ ((__dllimport__)) int _atoi_l(const char *_Str,_locale_t _Locale);
  long atol(const char *_Str);
  __attribute__ ((__dllimport__)) long _atol_l(const char *_Str,_locale_t _Locale);


  void * bsearch(const void *_Key,const void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));
  void qsort(void *_Base,size_t _NumOfElements,size_t _SizeOfElements,int ( *_PtFuncCompare)(const void *,const void *));

  unsigned short _byteswap_ushort(unsigned short _Short);

  __extension__ unsigned long long _byteswap_uint64(unsigned long long _Int64);
  div_t div(int _Numerator,int _Denominator);
  char * getenv(const char *_VarName) ;
  __attribute__ ((__dllimport__)) char * _itoa(int _Value,char *_Dest,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) char * _i64toa(long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) char * _ui64toa(unsigned long long _Val,char *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64(const char *_String);
  __extension__ __attribute__ ((__dllimport__)) long long _atoi64_l(const char *_String,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _strtoi64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64(const char *_String,char **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _strtoui64_l(const char *_String,char **_EndPtr,int _Radix,_locale_t _Locale);
  ldiv_t ldiv(long _Numerator,long _Denominator);
  __attribute__ ((__dllimport__)) char * _ltoa(long _Value,char *_Dest,int _Radix) ;
  int mblen(const char *_Ch,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _mblen_l(const char *_Ch,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrlen(const char *_Str);
  __attribute__ ((__dllimport__)) size_t _mbstrlen_l(const char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen(const char *_Str,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstrnlen_l(const char *_Str,size_t _MaxCount,_locale_t _Locale);
  int mbtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes);
  __attribute__ ((__dllimport__)) int _mbtowc_l(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SrcSizeInBytes,_locale_t _Locale);
  size_t mbstowcs(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _mbstowcs_l(wchar_t * __restrict__ _Dest,const char * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale);
  int rand(void);
  __attribute__ ((__dllimport__)) int _set_error_mode(int _Mode);
  void srand(unsigned int _Seed);



  double __attribute__ ((__nothrow__)) strtod(const char * __restrict__ _Str,char ** __restrict__ _EndPtr);
  float __attribute__ ((__nothrow__)) strtof(const char * __restrict__ nptr, char ** __restrict__ endptr);
  long double __attribute__ ((__nothrow__)) strtold(const char * __restrict__ , char ** __restrict__ );


  extern double __attribute__ ((__nothrow__))
  __strtod (const char * __restrict__ , char ** __restrict__);

__inline__ double __attribute__ ((__nothrow__))
strtod (const char * __restrict__ __nptr, char ** __restrict__ __endptr)
{
  return __strtod(__nptr, __endptr);
}





  float __mingw_strtof (const char * __restrict__, char ** __restrict__);
  long double __mingw_strtold(const char * __restrict__, char ** __restrict__);

  __attribute__ ((__dllimport__)) double _strtod_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,_locale_t _Locale);
  long strtol(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _strtol_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long strtoul(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _strtoul_l(const char * __restrict__ _Str,char ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);


  int system(const char *_Command);

  __attribute__ ((__dllimport__)) char * _ultoa(unsigned long _Value,char *_Dest,int _Radix) ;
  int wctomb(char *_MbCh,wchar_t _WCh) ;
  __attribute__ ((__dllimport__)) int _wctomb_l(char *_MbCh,wchar_t _WCh,_locale_t _Locale) ;
  size_t wcstombs(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) size_t _wcstombs_l(char * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _MaxCount,_locale_t _Locale) ;



  void * calloc(size_t _NumOfElements,size_t _SizeOfElements);
  void free(void *_Memory);
  void * malloc(size_t _Size);
  void * realloc(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) void * _recalloc(void *_Memory,size_t _Count,size_t _Size);






  __attribute__ ((__dllimport__)) void _aligned_free(void *_Memory);
  __attribute__ ((__dllimport__)) void * _aligned_malloc(size_t _Size,size_t _Alignment);



  __attribute__ ((__dllimport__)) void * _aligned_offset_malloc(size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_realloc(void *_Memory,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment);
  __attribute__ ((__dllimport__)) void * _aligned_offset_realloc(void *_Memory,size_t _Size,size_t _Alignment,size_t _Offset);
  __attribute__ ((__dllimport__)) void * _aligned_offset_recalloc(void *_Memory,size_t _Count,size_t _Size,size_t _Alignment,size_t _Offset);
# 484 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  __attribute__ ((__dllimport__)) char * _fullpath(char *_FullPath,const char *_Path,size_t _SizeInBytes);
  __attribute__ ((__dllimport__)) char * _ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  __attribute__ ((__dllimport__)) char * _gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  __attribute__ ((__dllimport__)) int _atodbl(_CRT_DOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoldbl(_LDOUBLE *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atoflt(_CRT_FLOAT *_Result,char *_Str);
  __attribute__ ((__dllimport__)) int _atodbl_l(_CRT_DOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoldbl_l(_LDOUBLE *_Result,char *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _atoflt_l(_CRT_FLOAT *_Result,char *_Str,_locale_t _Locale);





  __extension__ unsigned long long _lrotl(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _lrotr(unsigned long long _Val,int _Shift);







  __attribute__ ((__dllimport__)) void _makepath(char *_Path,const char *_Drive,const char *_Dir,const char *_Filename,const char *_Ext);
  _onexit_t _onexit(_onexit_t _Func);





  __attribute__ ((__dllimport__)) int _putenv(const char *_EnvString);




  __extension__ unsigned long long _rotl64(unsigned long long _Val,int _Shift);
  __extension__ unsigned long long _rotr64(unsigned long long Value,int Shift);






  unsigned int _rotr(unsigned int _Val,int _Shift);
  unsigned int _rotl(unsigned int _Val,int _Shift);


  __extension__ unsigned long long _rotr64(unsigned long long _Val,int _Shift);
  __attribute__ ((__dllimport__)) void _searchenv(const char *_Filename,const char *_EnvVar,char *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _splitpath(const char *_FullPath,char *_Drive,char *_Dir,char *_Filename,char *_Ext) ;
  __attribute__ ((__dllimport__)) void _swab(char *_Buf1,char *_Buf2,int _SizeInBytes);
# 550 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  __attribute__ ((__dllimport__)) void _beep(unsigned _Frequency,unsigned _Duration) __attribute__ ((__deprecated__));

  __attribute__ ((__dllimport__)) void _seterrormode(int _Mode) __attribute__ ((__deprecated__));
  __attribute__ ((__dllimport__)) void _sleep(unsigned long _Duration) __attribute__ ((__deprecated__));
# 574 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
  char * ecvt(double _Val,int _NumOfDigits,int *_PtDec,int *_PtSign) ;
  char * fcvt(double _Val,int _NumOfDec,int *_PtDec,int *_PtSign) ;
  char * gcvt(double _Val,int _NumOfDigits,char *_DstBuf) ;
  char * itoa(int _Val,char *_DstBuf,int _Radix) ;
  char * ltoa(long _Val,char *_DstBuf,int _Radix) ;
  int putenv(const char *_EnvString) ;
  void swab(char *_Buf1,char *_Buf2,int _SizeInBytes) ;
  char * ultoa(unsigned long _Val,char *_Dstbuf,int _Radix) ;
  _onexit_t onexit(_onexit_t _Func);





  typedef struct { __extension__ long long quot, rem; } lldiv_t;

  __extension__ lldiv_t lldiv(long long, long long);

  __extension__ long long llabs(long long);




  __extension__ long long strtoll(const char * __restrict__, char ** __restrict, int);
  __extension__ unsigned long long strtoull(const char * __restrict__, char ** __restrict__, int);


  __extension__ long long atoll (const char *);


  __extension__ long long wtoll (const wchar_t *);
  __extension__ char * lltoa (long long, char *, int);
  __extension__ char * ulltoa (unsigned long long , char *, int);
  __extension__ wchar_t * lltow (long long, wchar_t *, int);
  __extension__ wchar_t * ulltow (unsigned long long, wchar_t *, int);
# 624 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 3
}


#pragma pack(pop)


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/stdlib_s.h" 2 3
# 629 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 1 3








# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 2 3


#pragma pack(push,_CRT_PACKING)






extern "C" {
# 46 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  typedef struct _heapinfo {
    int *_pentry;
    size_t _size;
    int _useflag;
  } _HEAPINFO;


  extern unsigned int _amblksiz;
# 99 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
void * __mingw_aligned_malloc (size_t _Size, size_t _Alignment);
void __mingw_aligned_free (void *_Memory);
void * __mingw_aligned_offset_realloc (void *_Memory, size_t _Size, size_t _Alignment, size_t _Offset);
void * __mingw_aligned_realloc (void *_Memory, size_t _Size, size_t _Offset);



  __attribute__ ((__dllimport__)) int _resetstkoflw (void);
  __attribute__ ((__dllimport__)) unsigned long _set_malloc_crt_max_wait(unsigned long _NewValue);

  __attribute__ ((__dllimport__)) void * _expand(void *_Memory,size_t _NewSize);
  __attribute__ ((__dllimport__)) size_t _msize(void *_Memory);






  __attribute__ ((__dllimport__)) size_t _get_sbh_threshold(void);
  __attribute__ ((__dllimport__)) int _set_sbh_threshold(size_t _NewValue);
  __attribute__ ((__dllimport__)) errno_t _set_amblksiz(size_t _Value);
  __attribute__ ((__dllimport__)) errno_t _get_amblksiz(size_t *_Value);
  __attribute__ ((__dllimport__)) int _heapadd(void *_Memory,size_t _Size);
  __attribute__ ((__dllimport__)) int _heapchk(void);
  __attribute__ ((__dllimport__)) int _heapmin(void);
  __attribute__ ((__dllimport__)) int _heapset(unsigned int _Fill);
  __attribute__ ((__dllimport__)) int _heapwalk(_HEAPINFO *_EntryInfo);
  __attribute__ ((__dllimport__)) size_t _heapused(size_t *_Used,size_t *_Commit);
  __attribute__ ((__dllimport__)) intptr_t _get_heap_handle(void);
# 140 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void *_MarkAllocaS(void *_Ptr,unsigned int _Marker) {
    if(_Ptr) {
      *((unsigned int*)_Ptr) = _Marker;
      _Ptr = (char*)_Ptr + 16;
    }
    return _Ptr;
  }
# 159 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
  static __inline void _freea(void *_Memory) {
    unsigned int _Marker;
    if(_Memory) {
      _Memory = (char*)_Memory - 16;
      _Marker = *(unsigned int *)_Memory;
      if(_Marker==0xDDDD) {
 free(_Memory);
      }





    }
  }
# 202 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\malloc.h" 3
}


#pragma pack(pop)
# 630 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\stdlib.h" 2 3
# 3 "source/CONV.h" 2

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 12 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 75 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
extern "C" {



  extern double * __imp__HUGE;
# 91 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);
# 162 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
# 189 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);






__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
# 219 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 264 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 299 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 335 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 376 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 404 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);


  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);



  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);


  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);


  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);



  extern float expf(float _X);



  extern long double expl(long double);


  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);



  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);




  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);


  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);


  extern float logf (float);
  extern long double logl(long double);


  extern float log10f (float);
  extern long double log10l(long double);


  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);


  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);


  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
# 553 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);


  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);



  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);


  extern float fabsf (float x);
# 583 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
# 595 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double hypot (double, double) ;
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);


  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);


  extern float sqrtf (float);
  extern long double sqrtl(long double);


  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);


  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);


  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);


  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);


  extern float ceilf (float);
  extern long double ceill (long double);


  extern float floorf (float);
  extern long double floorl (long double);


  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);



extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);


extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
# 739 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);


  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);



  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);


  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);


  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);


  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);


  extern double copysign (double, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);


  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
# 788 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double nextafter (double, double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);


  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);



  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);







  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);


  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);



  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
# 871 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 893 "D:/Vivado/2018.3/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
}




#pragma pack(pop)
# 4 "source/CONV.h" 2

# 1 "D:/Vivado/2018.3/common/technology/autopilot\\ap_cint.h" 1
# 83 "D:/Vivado/2018.3/common/technology/autopilot\\ap_cint.h"
# 1 "D:/Vivado/2018.3/common/technology/autopilot/etc/autopilot_apint.h" 1
# 57 "D:/Vivado/2018.3/common/technology/autopilot/etc/autopilot_apint.h"
# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h" 1
# 97 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h"
# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.def" 1


typedef int __attribute__ ((bitwidth(1))) int1;
typedef int __attribute__ ((bitwidth(2))) int2;
typedef int __attribute__ ((bitwidth(3))) int3;
typedef int __attribute__ ((bitwidth(4))) int4;
typedef int __attribute__ ((bitwidth(5))) int5;
typedef int __attribute__ ((bitwidth(6))) int6;
typedef int __attribute__ ((bitwidth(7))) int7;
typedef int __attribute__ ((bitwidth(8))) int8;
typedef int __attribute__ ((bitwidth(9))) int9;
typedef int __attribute__ ((bitwidth(10))) int10;
typedef int __attribute__ ((bitwidth(11))) int11;
typedef int __attribute__ ((bitwidth(12))) int12;
typedef int __attribute__ ((bitwidth(13))) int13;
typedef int __attribute__ ((bitwidth(14))) int14;
typedef int __attribute__ ((bitwidth(15))) int15;
typedef int __attribute__ ((bitwidth(16))) int16;
typedef int __attribute__ ((bitwidth(17))) int17;
typedef int __attribute__ ((bitwidth(18))) int18;
typedef int __attribute__ ((bitwidth(19))) int19;
typedef int __attribute__ ((bitwidth(20))) int20;
typedef int __attribute__ ((bitwidth(21))) int21;
typedef int __attribute__ ((bitwidth(22))) int22;
typedef int __attribute__ ((bitwidth(23))) int23;
typedef int __attribute__ ((bitwidth(24))) int24;
typedef int __attribute__ ((bitwidth(25))) int25;
typedef int __attribute__ ((bitwidth(26))) int26;
typedef int __attribute__ ((bitwidth(27))) int27;
typedef int __attribute__ ((bitwidth(28))) int28;
typedef int __attribute__ ((bitwidth(29))) int29;
typedef int __attribute__ ((bitwidth(30))) int30;
typedef int __attribute__ ((bitwidth(31))) int31;
typedef int __attribute__ ((bitwidth(32))) int32;
typedef int __attribute__ ((bitwidth(33))) int33;
typedef int __attribute__ ((bitwidth(34))) int34;
typedef int __attribute__ ((bitwidth(35))) int35;
typedef int __attribute__ ((bitwidth(36))) int36;
typedef int __attribute__ ((bitwidth(37))) int37;
typedef int __attribute__ ((bitwidth(38))) int38;
typedef int __attribute__ ((bitwidth(39))) int39;
typedef int __attribute__ ((bitwidth(40))) int40;
typedef int __attribute__ ((bitwidth(41))) int41;
typedef int __attribute__ ((bitwidth(42))) int42;
typedef int __attribute__ ((bitwidth(43))) int43;
typedef int __attribute__ ((bitwidth(44))) int44;
typedef int __attribute__ ((bitwidth(45))) int45;
typedef int __attribute__ ((bitwidth(46))) int46;
typedef int __attribute__ ((bitwidth(47))) int47;
typedef int __attribute__ ((bitwidth(48))) int48;
typedef int __attribute__ ((bitwidth(49))) int49;
typedef int __attribute__ ((bitwidth(50))) int50;
typedef int __attribute__ ((bitwidth(51))) int51;
typedef int __attribute__ ((bitwidth(52))) int52;
typedef int __attribute__ ((bitwidth(53))) int53;
typedef int __attribute__ ((bitwidth(54))) int54;
typedef int __attribute__ ((bitwidth(55))) int55;
typedef int __attribute__ ((bitwidth(56))) int56;
typedef int __attribute__ ((bitwidth(57))) int57;
typedef int __attribute__ ((bitwidth(58))) int58;
typedef int __attribute__ ((bitwidth(59))) int59;
typedef int __attribute__ ((bitwidth(60))) int60;
typedef int __attribute__ ((bitwidth(61))) int61;
typedef int __attribute__ ((bitwidth(62))) int62;
typedef int __attribute__ ((bitwidth(63))) int63;







typedef int __attribute__ ((bitwidth(65))) int65;
typedef int __attribute__ ((bitwidth(66))) int66;
typedef int __attribute__ ((bitwidth(67))) int67;
typedef int __attribute__ ((bitwidth(68))) int68;
typedef int __attribute__ ((bitwidth(69))) int69;
typedef int __attribute__ ((bitwidth(70))) int70;
typedef int __attribute__ ((bitwidth(71))) int71;
typedef int __attribute__ ((bitwidth(72))) int72;
typedef int __attribute__ ((bitwidth(73))) int73;
typedef int __attribute__ ((bitwidth(74))) int74;
typedef int __attribute__ ((bitwidth(75))) int75;
typedef int __attribute__ ((bitwidth(76))) int76;
typedef int __attribute__ ((bitwidth(77))) int77;
typedef int __attribute__ ((bitwidth(78))) int78;
typedef int __attribute__ ((bitwidth(79))) int79;
typedef int __attribute__ ((bitwidth(80))) int80;
typedef int __attribute__ ((bitwidth(81))) int81;
typedef int __attribute__ ((bitwidth(82))) int82;
typedef int __attribute__ ((bitwidth(83))) int83;
typedef int __attribute__ ((bitwidth(84))) int84;
typedef int __attribute__ ((bitwidth(85))) int85;
typedef int __attribute__ ((bitwidth(86))) int86;
typedef int __attribute__ ((bitwidth(87))) int87;
typedef int __attribute__ ((bitwidth(88))) int88;
typedef int __attribute__ ((bitwidth(89))) int89;
typedef int __attribute__ ((bitwidth(90))) int90;
typedef int __attribute__ ((bitwidth(91))) int91;
typedef int __attribute__ ((bitwidth(92))) int92;
typedef int __attribute__ ((bitwidth(93))) int93;
typedef int __attribute__ ((bitwidth(94))) int94;
typedef int __attribute__ ((bitwidth(95))) int95;
typedef int __attribute__ ((bitwidth(96))) int96;
typedef int __attribute__ ((bitwidth(97))) int97;
typedef int __attribute__ ((bitwidth(98))) int98;
typedef int __attribute__ ((bitwidth(99))) int99;
typedef int __attribute__ ((bitwidth(100))) int100;
typedef int __attribute__ ((bitwidth(101))) int101;
typedef int __attribute__ ((bitwidth(102))) int102;
typedef int __attribute__ ((bitwidth(103))) int103;
typedef int __attribute__ ((bitwidth(104))) int104;
typedef int __attribute__ ((bitwidth(105))) int105;
typedef int __attribute__ ((bitwidth(106))) int106;
typedef int __attribute__ ((bitwidth(107))) int107;
typedef int __attribute__ ((bitwidth(108))) int108;
typedef int __attribute__ ((bitwidth(109))) int109;
typedef int __attribute__ ((bitwidth(110))) int110;
typedef int __attribute__ ((bitwidth(111))) int111;
typedef int __attribute__ ((bitwidth(112))) int112;
typedef int __attribute__ ((bitwidth(113))) int113;
typedef int __attribute__ ((bitwidth(114))) int114;
typedef int __attribute__ ((bitwidth(115))) int115;
typedef int __attribute__ ((bitwidth(116))) int116;
typedef int __attribute__ ((bitwidth(117))) int117;
typedef int __attribute__ ((bitwidth(118))) int118;
typedef int __attribute__ ((bitwidth(119))) int119;
typedef int __attribute__ ((bitwidth(120))) int120;
typedef int __attribute__ ((bitwidth(121))) int121;
typedef int __attribute__ ((bitwidth(122))) int122;
typedef int __attribute__ ((bitwidth(123))) int123;
typedef int __attribute__ ((bitwidth(124))) int124;
typedef int __attribute__ ((bitwidth(125))) int125;
typedef int __attribute__ ((bitwidth(126))) int126;
typedef int __attribute__ ((bitwidth(127))) int127;
typedef int __attribute__ ((bitwidth(128))) int128;






typedef int __attribute__ ((bitwidth(129))) int129;
typedef int __attribute__ ((bitwidth(130))) int130;
typedef int __attribute__ ((bitwidth(131))) int131;
typedef int __attribute__ ((bitwidth(132))) int132;
typedef int __attribute__ ((bitwidth(133))) int133;
typedef int __attribute__ ((bitwidth(134))) int134;
typedef int __attribute__ ((bitwidth(135))) int135;
typedef int __attribute__ ((bitwidth(136))) int136;
typedef int __attribute__ ((bitwidth(137))) int137;
typedef int __attribute__ ((bitwidth(138))) int138;
typedef int __attribute__ ((bitwidth(139))) int139;
typedef int __attribute__ ((bitwidth(140))) int140;
typedef int __attribute__ ((bitwidth(141))) int141;
typedef int __attribute__ ((bitwidth(142))) int142;
typedef int __attribute__ ((bitwidth(143))) int143;
typedef int __attribute__ ((bitwidth(144))) int144;
typedef int __attribute__ ((bitwidth(145))) int145;
typedef int __attribute__ ((bitwidth(146))) int146;
typedef int __attribute__ ((bitwidth(147))) int147;
typedef int __attribute__ ((bitwidth(148))) int148;
typedef int __attribute__ ((bitwidth(149))) int149;
typedef int __attribute__ ((bitwidth(150))) int150;
typedef int __attribute__ ((bitwidth(151))) int151;
typedef int __attribute__ ((bitwidth(152))) int152;
typedef int __attribute__ ((bitwidth(153))) int153;
typedef int __attribute__ ((bitwidth(154))) int154;
typedef int __attribute__ ((bitwidth(155))) int155;
typedef int __attribute__ ((bitwidth(156))) int156;
typedef int __attribute__ ((bitwidth(157))) int157;
typedef int __attribute__ ((bitwidth(158))) int158;
typedef int __attribute__ ((bitwidth(159))) int159;
typedef int __attribute__ ((bitwidth(160))) int160;
typedef int __attribute__ ((bitwidth(161))) int161;
typedef int __attribute__ ((bitwidth(162))) int162;
typedef int __attribute__ ((bitwidth(163))) int163;
typedef int __attribute__ ((bitwidth(164))) int164;
typedef int __attribute__ ((bitwidth(165))) int165;
typedef int __attribute__ ((bitwidth(166))) int166;
typedef int __attribute__ ((bitwidth(167))) int167;
typedef int __attribute__ ((bitwidth(168))) int168;
typedef int __attribute__ ((bitwidth(169))) int169;
typedef int __attribute__ ((bitwidth(170))) int170;
typedef int __attribute__ ((bitwidth(171))) int171;
typedef int __attribute__ ((bitwidth(172))) int172;
typedef int __attribute__ ((bitwidth(173))) int173;
typedef int __attribute__ ((bitwidth(174))) int174;
typedef int __attribute__ ((bitwidth(175))) int175;
typedef int __attribute__ ((bitwidth(176))) int176;
typedef int __attribute__ ((bitwidth(177))) int177;
typedef int __attribute__ ((bitwidth(178))) int178;
typedef int __attribute__ ((bitwidth(179))) int179;
typedef int __attribute__ ((bitwidth(180))) int180;
typedef int __attribute__ ((bitwidth(181))) int181;
typedef int __attribute__ ((bitwidth(182))) int182;
typedef int __attribute__ ((bitwidth(183))) int183;
typedef int __attribute__ ((bitwidth(184))) int184;
typedef int __attribute__ ((bitwidth(185))) int185;
typedef int __attribute__ ((bitwidth(186))) int186;
typedef int __attribute__ ((bitwidth(187))) int187;
typedef int __attribute__ ((bitwidth(188))) int188;
typedef int __attribute__ ((bitwidth(189))) int189;
typedef int __attribute__ ((bitwidth(190))) int190;
typedef int __attribute__ ((bitwidth(191))) int191;
typedef int __attribute__ ((bitwidth(192))) int192;
typedef int __attribute__ ((bitwidth(193))) int193;
typedef int __attribute__ ((bitwidth(194))) int194;
typedef int __attribute__ ((bitwidth(195))) int195;
typedef int __attribute__ ((bitwidth(196))) int196;
typedef int __attribute__ ((bitwidth(197))) int197;
typedef int __attribute__ ((bitwidth(198))) int198;
typedef int __attribute__ ((bitwidth(199))) int199;
typedef int __attribute__ ((bitwidth(200))) int200;
typedef int __attribute__ ((bitwidth(201))) int201;
typedef int __attribute__ ((bitwidth(202))) int202;
typedef int __attribute__ ((bitwidth(203))) int203;
typedef int __attribute__ ((bitwidth(204))) int204;
typedef int __attribute__ ((bitwidth(205))) int205;
typedef int __attribute__ ((bitwidth(206))) int206;
typedef int __attribute__ ((bitwidth(207))) int207;
typedef int __attribute__ ((bitwidth(208))) int208;
typedef int __attribute__ ((bitwidth(209))) int209;
typedef int __attribute__ ((bitwidth(210))) int210;
typedef int __attribute__ ((bitwidth(211))) int211;
typedef int __attribute__ ((bitwidth(212))) int212;
typedef int __attribute__ ((bitwidth(213))) int213;
typedef int __attribute__ ((bitwidth(214))) int214;
typedef int __attribute__ ((bitwidth(215))) int215;
typedef int __attribute__ ((bitwidth(216))) int216;
typedef int __attribute__ ((bitwidth(217))) int217;
typedef int __attribute__ ((bitwidth(218))) int218;
typedef int __attribute__ ((bitwidth(219))) int219;
typedef int __attribute__ ((bitwidth(220))) int220;
typedef int __attribute__ ((bitwidth(221))) int221;
typedef int __attribute__ ((bitwidth(222))) int222;
typedef int __attribute__ ((bitwidth(223))) int223;
typedef int __attribute__ ((bitwidth(224))) int224;
typedef int __attribute__ ((bitwidth(225))) int225;
typedef int __attribute__ ((bitwidth(226))) int226;
typedef int __attribute__ ((bitwidth(227))) int227;
typedef int __attribute__ ((bitwidth(228))) int228;
typedef int __attribute__ ((bitwidth(229))) int229;
typedef int __attribute__ ((bitwidth(230))) int230;
typedef int __attribute__ ((bitwidth(231))) int231;
typedef int __attribute__ ((bitwidth(232))) int232;
typedef int __attribute__ ((bitwidth(233))) int233;
typedef int __attribute__ ((bitwidth(234))) int234;
typedef int __attribute__ ((bitwidth(235))) int235;
typedef int __attribute__ ((bitwidth(236))) int236;
typedef int __attribute__ ((bitwidth(237))) int237;
typedef int __attribute__ ((bitwidth(238))) int238;
typedef int __attribute__ ((bitwidth(239))) int239;
typedef int __attribute__ ((bitwidth(240))) int240;
typedef int __attribute__ ((bitwidth(241))) int241;
typedef int __attribute__ ((bitwidth(242))) int242;
typedef int __attribute__ ((bitwidth(243))) int243;
typedef int __attribute__ ((bitwidth(244))) int244;
typedef int __attribute__ ((bitwidth(245))) int245;
typedef int __attribute__ ((bitwidth(246))) int246;
typedef int __attribute__ ((bitwidth(247))) int247;
typedef int __attribute__ ((bitwidth(248))) int248;
typedef int __attribute__ ((bitwidth(249))) int249;
typedef int __attribute__ ((bitwidth(250))) int250;
typedef int __attribute__ ((bitwidth(251))) int251;
typedef int __attribute__ ((bitwidth(252))) int252;
typedef int __attribute__ ((bitwidth(253))) int253;
typedef int __attribute__ ((bitwidth(254))) int254;
typedef int __attribute__ ((bitwidth(255))) int255;
typedef int __attribute__ ((bitwidth(256))) int256;
typedef int __attribute__ ((bitwidth(257))) int257;
typedef int __attribute__ ((bitwidth(258))) int258;
typedef int __attribute__ ((bitwidth(259))) int259;
typedef int __attribute__ ((bitwidth(260))) int260;
typedef int __attribute__ ((bitwidth(261))) int261;
typedef int __attribute__ ((bitwidth(262))) int262;
typedef int __attribute__ ((bitwidth(263))) int263;
typedef int __attribute__ ((bitwidth(264))) int264;
typedef int __attribute__ ((bitwidth(265))) int265;
typedef int __attribute__ ((bitwidth(266))) int266;
typedef int __attribute__ ((bitwidth(267))) int267;
typedef int __attribute__ ((bitwidth(268))) int268;
typedef int __attribute__ ((bitwidth(269))) int269;
typedef int __attribute__ ((bitwidth(270))) int270;
typedef int __attribute__ ((bitwidth(271))) int271;
typedef int __attribute__ ((bitwidth(272))) int272;
typedef int __attribute__ ((bitwidth(273))) int273;
typedef int __attribute__ ((bitwidth(274))) int274;
typedef int __attribute__ ((bitwidth(275))) int275;
typedef int __attribute__ ((bitwidth(276))) int276;
typedef int __attribute__ ((bitwidth(277))) int277;
typedef int __attribute__ ((bitwidth(278))) int278;
typedef int __attribute__ ((bitwidth(279))) int279;
typedef int __attribute__ ((bitwidth(280))) int280;
typedef int __attribute__ ((bitwidth(281))) int281;
typedef int __attribute__ ((bitwidth(282))) int282;
typedef int __attribute__ ((bitwidth(283))) int283;
typedef int __attribute__ ((bitwidth(284))) int284;
typedef int __attribute__ ((bitwidth(285))) int285;
typedef int __attribute__ ((bitwidth(286))) int286;
typedef int __attribute__ ((bitwidth(287))) int287;
typedef int __attribute__ ((bitwidth(288))) int288;
typedef int __attribute__ ((bitwidth(289))) int289;
typedef int __attribute__ ((bitwidth(290))) int290;
typedef int __attribute__ ((bitwidth(291))) int291;
typedef int __attribute__ ((bitwidth(292))) int292;
typedef int __attribute__ ((bitwidth(293))) int293;
typedef int __attribute__ ((bitwidth(294))) int294;
typedef int __attribute__ ((bitwidth(295))) int295;
typedef int __attribute__ ((bitwidth(296))) int296;
typedef int __attribute__ ((bitwidth(297))) int297;
typedef int __attribute__ ((bitwidth(298))) int298;
typedef int __attribute__ ((bitwidth(299))) int299;
typedef int __attribute__ ((bitwidth(300))) int300;
typedef int __attribute__ ((bitwidth(301))) int301;
typedef int __attribute__ ((bitwidth(302))) int302;
typedef int __attribute__ ((bitwidth(303))) int303;
typedef int __attribute__ ((bitwidth(304))) int304;
typedef int __attribute__ ((bitwidth(305))) int305;
typedef int __attribute__ ((bitwidth(306))) int306;
typedef int __attribute__ ((bitwidth(307))) int307;
typedef int __attribute__ ((bitwidth(308))) int308;
typedef int __attribute__ ((bitwidth(309))) int309;
typedef int __attribute__ ((bitwidth(310))) int310;
typedef int __attribute__ ((bitwidth(311))) int311;
typedef int __attribute__ ((bitwidth(312))) int312;
typedef int __attribute__ ((bitwidth(313))) int313;
typedef int __attribute__ ((bitwidth(314))) int314;
typedef int __attribute__ ((bitwidth(315))) int315;
typedef int __attribute__ ((bitwidth(316))) int316;
typedef int __attribute__ ((bitwidth(317))) int317;
typedef int __attribute__ ((bitwidth(318))) int318;
typedef int __attribute__ ((bitwidth(319))) int319;
typedef int __attribute__ ((bitwidth(320))) int320;
typedef int __attribute__ ((bitwidth(321))) int321;
typedef int __attribute__ ((bitwidth(322))) int322;
typedef int __attribute__ ((bitwidth(323))) int323;
typedef int __attribute__ ((bitwidth(324))) int324;
typedef int __attribute__ ((bitwidth(325))) int325;
typedef int __attribute__ ((bitwidth(326))) int326;
typedef int __attribute__ ((bitwidth(327))) int327;
typedef int __attribute__ ((bitwidth(328))) int328;
typedef int __attribute__ ((bitwidth(329))) int329;
typedef int __attribute__ ((bitwidth(330))) int330;
typedef int __attribute__ ((bitwidth(331))) int331;
typedef int __attribute__ ((bitwidth(332))) int332;
typedef int __attribute__ ((bitwidth(333))) int333;
typedef int __attribute__ ((bitwidth(334))) int334;
typedef int __attribute__ ((bitwidth(335))) int335;
typedef int __attribute__ ((bitwidth(336))) int336;
typedef int __attribute__ ((bitwidth(337))) int337;
typedef int __attribute__ ((bitwidth(338))) int338;
typedef int __attribute__ ((bitwidth(339))) int339;
typedef int __attribute__ ((bitwidth(340))) int340;
typedef int __attribute__ ((bitwidth(341))) int341;
typedef int __attribute__ ((bitwidth(342))) int342;
typedef int __attribute__ ((bitwidth(343))) int343;
typedef int __attribute__ ((bitwidth(344))) int344;
typedef int __attribute__ ((bitwidth(345))) int345;
typedef int __attribute__ ((bitwidth(346))) int346;
typedef int __attribute__ ((bitwidth(347))) int347;
typedef int __attribute__ ((bitwidth(348))) int348;
typedef int __attribute__ ((bitwidth(349))) int349;
typedef int __attribute__ ((bitwidth(350))) int350;
typedef int __attribute__ ((bitwidth(351))) int351;
typedef int __attribute__ ((bitwidth(352))) int352;
typedef int __attribute__ ((bitwidth(353))) int353;
typedef int __attribute__ ((bitwidth(354))) int354;
typedef int __attribute__ ((bitwidth(355))) int355;
typedef int __attribute__ ((bitwidth(356))) int356;
typedef int __attribute__ ((bitwidth(357))) int357;
typedef int __attribute__ ((bitwidth(358))) int358;
typedef int __attribute__ ((bitwidth(359))) int359;
typedef int __attribute__ ((bitwidth(360))) int360;
typedef int __attribute__ ((bitwidth(361))) int361;
typedef int __attribute__ ((bitwidth(362))) int362;
typedef int __attribute__ ((bitwidth(363))) int363;
typedef int __attribute__ ((bitwidth(364))) int364;
typedef int __attribute__ ((bitwidth(365))) int365;
typedef int __attribute__ ((bitwidth(366))) int366;
typedef int __attribute__ ((bitwidth(367))) int367;
typedef int __attribute__ ((bitwidth(368))) int368;
typedef int __attribute__ ((bitwidth(369))) int369;
typedef int __attribute__ ((bitwidth(370))) int370;
typedef int __attribute__ ((bitwidth(371))) int371;
typedef int __attribute__ ((bitwidth(372))) int372;
typedef int __attribute__ ((bitwidth(373))) int373;
typedef int __attribute__ ((bitwidth(374))) int374;
typedef int __attribute__ ((bitwidth(375))) int375;
typedef int __attribute__ ((bitwidth(376))) int376;
typedef int __attribute__ ((bitwidth(377))) int377;
typedef int __attribute__ ((bitwidth(378))) int378;
typedef int __attribute__ ((bitwidth(379))) int379;
typedef int __attribute__ ((bitwidth(380))) int380;
typedef int __attribute__ ((bitwidth(381))) int381;
typedef int __attribute__ ((bitwidth(382))) int382;
typedef int __attribute__ ((bitwidth(383))) int383;
typedef int __attribute__ ((bitwidth(384))) int384;
typedef int __attribute__ ((bitwidth(385))) int385;
typedef int __attribute__ ((bitwidth(386))) int386;
typedef int __attribute__ ((bitwidth(387))) int387;
typedef int __attribute__ ((bitwidth(388))) int388;
typedef int __attribute__ ((bitwidth(389))) int389;
typedef int __attribute__ ((bitwidth(390))) int390;
typedef int __attribute__ ((bitwidth(391))) int391;
typedef int __attribute__ ((bitwidth(392))) int392;
typedef int __attribute__ ((bitwidth(393))) int393;
typedef int __attribute__ ((bitwidth(394))) int394;
typedef int __attribute__ ((bitwidth(395))) int395;
typedef int __attribute__ ((bitwidth(396))) int396;
typedef int __attribute__ ((bitwidth(397))) int397;
typedef int __attribute__ ((bitwidth(398))) int398;
typedef int __attribute__ ((bitwidth(399))) int399;
typedef int __attribute__ ((bitwidth(400))) int400;
typedef int __attribute__ ((bitwidth(401))) int401;
typedef int __attribute__ ((bitwidth(402))) int402;
typedef int __attribute__ ((bitwidth(403))) int403;
typedef int __attribute__ ((bitwidth(404))) int404;
typedef int __attribute__ ((bitwidth(405))) int405;
typedef int __attribute__ ((bitwidth(406))) int406;
typedef int __attribute__ ((bitwidth(407))) int407;
typedef int __attribute__ ((bitwidth(408))) int408;
typedef int __attribute__ ((bitwidth(409))) int409;
typedef int __attribute__ ((bitwidth(410))) int410;
typedef int __attribute__ ((bitwidth(411))) int411;
typedef int __attribute__ ((bitwidth(412))) int412;
typedef int __attribute__ ((bitwidth(413))) int413;
typedef int __attribute__ ((bitwidth(414))) int414;
typedef int __attribute__ ((bitwidth(415))) int415;
typedef int __attribute__ ((bitwidth(416))) int416;
typedef int __attribute__ ((bitwidth(417))) int417;
typedef int __attribute__ ((bitwidth(418))) int418;
typedef int __attribute__ ((bitwidth(419))) int419;
typedef int __attribute__ ((bitwidth(420))) int420;
typedef int __attribute__ ((bitwidth(421))) int421;
typedef int __attribute__ ((bitwidth(422))) int422;
typedef int __attribute__ ((bitwidth(423))) int423;
typedef int __attribute__ ((bitwidth(424))) int424;
typedef int __attribute__ ((bitwidth(425))) int425;
typedef int __attribute__ ((bitwidth(426))) int426;
typedef int __attribute__ ((bitwidth(427))) int427;
typedef int __attribute__ ((bitwidth(428))) int428;
typedef int __attribute__ ((bitwidth(429))) int429;
typedef int __attribute__ ((bitwidth(430))) int430;
typedef int __attribute__ ((bitwidth(431))) int431;
typedef int __attribute__ ((bitwidth(432))) int432;
typedef int __attribute__ ((bitwidth(433))) int433;
typedef int __attribute__ ((bitwidth(434))) int434;
typedef int __attribute__ ((bitwidth(435))) int435;
typedef int __attribute__ ((bitwidth(436))) int436;
typedef int __attribute__ ((bitwidth(437))) int437;
typedef int __attribute__ ((bitwidth(438))) int438;
typedef int __attribute__ ((bitwidth(439))) int439;
typedef int __attribute__ ((bitwidth(440))) int440;
typedef int __attribute__ ((bitwidth(441))) int441;
typedef int __attribute__ ((bitwidth(442))) int442;
typedef int __attribute__ ((bitwidth(443))) int443;
typedef int __attribute__ ((bitwidth(444))) int444;
typedef int __attribute__ ((bitwidth(445))) int445;
typedef int __attribute__ ((bitwidth(446))) int446;
typedef int __attribute__ ((bitwidth(447))) int447;
typedef int __attribute__ ((bitwidth(448))) int448;
typedef int __attribute__ ((bitwidth(449))) int449;
typedef int __attribute__ ((bitwidth(450))) int450;
typedef int __attribute__ ((bitwidth(451))) int451;
typedef int __attribute__ ((bitwidth(452))) int452;
typedef int __attribute__ ((bitwidth(453))) int453;
typedef int __attribute__ ((bitwidth(454))) int454;
typedef int __attribute__ ((bitwidth(455))) int455;
typedef int __attribute__ ((bitwidth(456))) int456;
typedef int __attribute__ ((bitwidth(457))) int457;
typedef int __attribute__ ((bitwidth(458))) int458;
typedef int __attribute__ ((bitwidth(459))) int459;
typedef int __attribute__ ((bitwidth(460))) int460;
typedef int __attribute__ ((bitwidth(461))) int461;
typedef int __attribute__ ((bitwidth(462))) int462;
typedef int __attribute__ ((bitwidth(463))) int463;
typedef int __attribute__ ((bitwidth(464))) int464;
typedef int __attribute__ ((bitwidth(465))) int465;
typedef int __attribute__ ((bitwidth(466))) int466;
typedef int __attribute__ ((bitwidth(467))) int467;
typedef int __attribute__ ((bitwidth(468))) int468;
typedef int __attribute__ ((bitwidth(469))) int469;
typedef int __attribute__ ((bitwidth(470))) int470;
typedef int __attribute__ ((bitwidth(471))) int471;
typedef int __attribute__ ((bitwidth(472))) int472;
typedef int __attribute__ ((bitwidth(473))) int473;
typedef int __attribute__ ((bitwidth(474))) int474;
typedef int __attribute__ ((bitwidth(475))) int475;
typedef int __attribute__ ((bitwidth(476))) int476;
typedef int __attribute__ ((bitwidth(477))) int477;
typedef int __attribute__ ((bitwidth(478))) int478;
typedef int __attribute__ ((bitwidth(479))) int479;
typedef int __attribute__ ((bitwidth(480))) int480;
typedef int __attribute__ ((bitwidth(481))) int481;
typedef int __attribute__ ((bitwidth(482))) int482;
typedef int __attribute__ ((bitwidth(483))) int483;
typedef int __attribute__ ((bitwidth(484))) int484;
typedef int __attribute__ ((bitwidth(485))) int485;
typedef int __attribute__ ((bitwidth(486))) int486;
typedef int __attribute__ ((bitwidth(487))) int487;
typedef int __attribute__ ((bitwidth(488))) int488;
typedef int __attribute__ ((bitwidth(489))) int489;
typedef int __attribute__ ((bitwidth(490))) int490;
typedef int __attribute__ ((bitwidth(491))) int491;
typedef int __attribute__ ((bitwidth(492))) int492;
typedef int __attribute__ ((bitwidth(493))) int493;
typedef int __attribute__ ((bitwidth(494))) int494;
typedef int __attribute__ ((bitwidth(495))) int495;
typedef int __attribute__ ((bitwidth(496))) int496;
typedef int __attribute__ ((bitwidth(497))) int497;
typedef int __attribute__ ((bitwidth(498))) int498;
typedef int __attribute__ ((bitwidth(499))) int499;
typedef int __attribute__ ((bitwidth(500))) int500;
typedef int __attribute__ ((bitwidth(501))) int501;
typedef int __attribute__ ((bitwidth(502))) int502;
typedef int __attribute__ ((bitwidth(503))) int503;
typedef int __attribute__ ((bitwidth(504))) int504;
typedef int __attribute__ ((bitwidth(505))) int505;
typedef int __attribute__ ((bitwidth(506))) int506;
typedef int __attribute__ ((bitwidth(507))) int507;
typedef int __attribute__ ((bitwidth(508))) int508;
typedef int __attribute__ ((bitwidth(509))) int509;
typedef int __attribute__ ((bitwidth(510))) int510;
typedef int __attribute__ ((bitwidth(511))) int511;
typedef int __attribute__ ((bitwidth(512))) int512;
typedef int __attribute__ ((bitwidth(513))) int513;
typedef int __attribute__ ((bitwidth(514))) int514;
typedef int __attribute__ ((bitwidth(515))) int515;
typedef int __attribute__ ((bitwidth(516))) int516;
typedef int __attribute__ ((bitwidth(517))) int517;
typedef int __attribute__ ((bitwidth(518))) int518;
typedef int __attribute__ ((bitwidth(519))) int519;
typedef int __attribute__ ((bitwidth(520))) int520;
typedef int __attribute__ ((bitwidth(521))) int521;
typedef int __attribute__ ((bitwidth(522))) int522;
typedef int __attribute__ ((bitwidth(523))) int523;
typedef int __attribute__ ((bitwidth(524))) int524;
typedef int __attribute__ ((bitwidth(525))) int525;
typedef int __attribute__ ((bitwidth(526))) int526;
typedef int __attribute__ ((bitwidth(527))) int527;
typedef int __attribute__ ((bitwidth(528))) int528;
typedef int __attribute__ ((bitwidth(529))) int529;
typedef int __attribute__ ((bitwidth(530))) int530;
typedef int __attribute__ ((bitwidth(531))) int531;
typedef int __attribute__ ((bitwidth(532))) int532;
typedef int __attribute__ ((bitwidth(533))) int533;
typedef int __attribute__ ((bitwidth(534))) int534;
typedef int __attribute__ ((bitwidth(535))) int535;
typedef int __attribute__ ((bitwidth(536))) int536;
typedef int __attribute__ ((bitwidth(537))) int537;
typedef int __attribute__ ((bitwidth(538))) int538;
typedef int __attribute__ ((bitwidth(539))) int539;
typedef int __attribute__ ((bitwidth(540))) int540;
typedef int __attribute__ ((bitwidth(541))) int541;
typedef int __attribute__ ((bitwidth(542))) int542;
typedef int __attribute__ ((bitwidth(543))) int543;
typedef int __attribute__ ((bitwidth(544))) int544;
typedef int __attribute__ ((bitwidth(545))) int545;
typedef int __attribute__ ((bitwidth(546))) int546;
typedef int __attribute__ ((bitwidth(547))) int547;
typedef int __attribute__ ((bitwidth(548))) int548;
typedef int __attribute__ ((bitwidth(549))) int549;
typedef int __attribute__ ((bitwidth(550))) int550;
typedef int __attribute__ ((bitwidth(551))) int551;
typedef int __attribute__ ((bitwidth(552))) int552;
typedef int __attribute__ ((bitwidth(553))) int553;
typedef int __attribute__ ((bitwidth(554))) int554;
typedef int __attribute__ ((bitwidth(555))) int555;
typedef int __attribute__ ((bitwidth(556))) int556;
typedef int __attribute__ ((bitwidth(557))) int557;
typedef int __attribute__ ((bitwidth(558))) int558;
typedef int __attribute__ ((bitwidth(559))) int559;
typedef int __attribute__ ((bitwidth(560))) int560;
typedef int __attribute__ ((bitwidth(561))) int561;
typedef int __attribute__ ((bitwidth(562))) int562;
typedef int __attribute__ ((bitwidth(563))) int563;
typedef int __attribute__ ((bitwidth(564))) int564;
typedef int __attribute__ ((bitwidth(565))) int565;
typedef int __attribute__ ((bitwidth(566))) int566;
typedef int __attribute__ ((bitwidth(567))) int567;
typedef int __attribute__ ((bitwidth(568))) int568;
typedef int __attribute__ ((bitwidth(569))) int569;
typedef int __attribute__ ((bitwidth(570))) int570;
typedef int __attribute__ ((bitwidth(571))) int571;
typedef int __attribute__ ((bitwidth(572))) int572;
typedef int __attribute__ ((bitwidth(573))) int573;
typedef int __attribute__ ((bitwidth(574))) int574;
typedef int __attribute__ ((bitwidth(575))) int575;
typedef int __attribute__ ((bitwidth(576))) int576;
typedef int __attribute__ ((bitwidth(577))) int577;
typedef int __attribute__ ((bitwidth(578))) int578;
typedef int __attribute__ ((bitwidth(579))) int579;
typedef int __attribute__ ((bitwidth(580))) int580;
typedef int __attribute__ ((bitwidth(581))) int581;
typedef int __attribute__ ((bitwidth(582))) int582;
typedef int __attribute__ ((bitwidth(583))) int583;
typedef int __attribute__ ((bitwidth(584))) int584;
typedef int __attribute__ ((bitwidth(585))) int585;
typedef int __attribute__ ((bitwidth(586))) int586;
typedef int __attribute__ ((bitwidth(587))) int587;
typedef int __attribute__ ((bitwidth(588))) int588;
typedef int __attribute__ ((bitwidth(589))) int589;
typedef int __attribute__ ((bitwidth(590))) int590;
typedef int __attribute__ ((bitwidth(591))) int591;
typedef int __attribute__ ((bitwidth(592))) int592;
typedef int __attribute__ ((bitwidth(593))) int593;
typedef int __attribute__ ((bitwidth(594))) int594;
typedef int __attribute__ ((bitwidth(595))) int595;
typedef int __attribute__ ((bitwidth(596))) int596;
typedef int __attribute__ ((bitwidth(597))) int597;
typedef int __attribute__ ((bitwidth(598))) int598;
typedef int __attribute__ ((bitwidth(599))) int599;
typedef int __attribute__ ((bitwidth(600))) int600;
typedef int __attribute__ ((bitwidth(601))) int601;
typedef int __attribute__ ((bitwidth(602))) int602;
typedef int __attribute__ ((bitwidth(603))) int603;
typedef int __attribute__ ((bitwidth(604))) int604;
typedef int __attribute__ ((bitwidth(605))) int605;
typedef int __attribute__ ((bitwidth(606))) int606;
typedef int __attribute__ ((bitwidth(607))) int607;
typedef int __attribute__ ((bitwidth(608))) int608;
typedef int __attribute__ ((bitwidth(609))) int609;
typedef int __attribute__ ((bitwidth(610))) int610;
typedef int __attribute__ ((bitwidth(611))) int611;
typedef int __attribute__ ((bitwidth(612))) int612;
typedef int __attribute__ ((bitwidth(613))) int613;
typedef int __attribute__ ((bitwidth(614))) int614;
typedef int __attribute__ ((bitwidth(615))) int615;
typedef int __attribute__ ((bitwidth(616))) int616;
typedef int __attribute__ ((bitwidth(617))) int617;
typedef int __attribute__ ((bitwidth(618))) int618;
typedef int __attribute__ ((bitwidth(619))) int619;
typedef int __attribute__ ((bitwidth(620))) int620;
typedef int __attribute__ ((bitwidth(621))) int621;
typedef int __attribute__ ((bitwidth(622))) int622;
typedef int __attribute__ ((bitwidth(623))) int623;
typedef int __attribute__ ((bitwidth(624))) int624;
typedef int __attribute__ ((bitwidth(625))) int625;
typedef int __attribute__ ((bitwidth(626))) int626;
typedef int __attribute__ ((bitwidth(627))) int627;
typedef int __attribute__ ((bitwidth(628))) int628;
typedef int __attribute__ ((bitwidth(629))) int629;
typedef int __attribute__ ((bitwidth(630))) int630;
typedef int __attribute__ ((bitwidth(631))) int631;
typedef int __attribute__ ((bitwidth(632))) int632;
typedef int __attribute__ ((bitwidth(633))) int633;
typedef int __attribute__ ((bitwidth(634))) int634;
typedef int __attribute__ ((bitwidth(635))) int635;
typedef int __attribute__ ((bitwidth(636))) int636;
typedef int __attribute__ ((bitwidth(637))) int637;
typedef int __attribute__ ((bitwidth(638))) int638;
typedef int __attribute__ ((bitwidth(639))) int639;
typedef int __attribute__ ((bitwidth(640))) int640;
typedef int __attribute__ ((bitwidth(641))) int641;
typedef int __attribute__ ((bitwidth(642))) int642;
typedef int __attribute__ ((bitwidth(643))) int643;
typedef int __attribute__ ((bitwidth(644))) int644;
typedef int __attribute__ ((bitwidth(645))) int645;
typedef int __attribute__ ((bitwidth(646))) int646;
typedef int __attribute__ ((bitwidth(647))) int647;
typedef int __attribute__ ((bitwidth(648))) int648;
typedef int __attribute__ ((bitwidth(649))) int649;
typedef int __attribute__ ((bitwidth(650))) int650;
typedef int __attribute__ ((bitwidth(651))) int651;
typedef int __attribute__ ((bitwidth(652))) int652;
typedef int __attribute__ ((bitwidth(653))) int653;
typedef int __attribute__ ((bitwidth(654))) int654;
typedef int __attribute__ ((bitwidth(655))) int655;
typedef int __attribute__ ((bitwidth(656))) int656;
typedef int __attribute__ ((bitwidth(657))) int657;
typedef int __attribute__ ((bitwidth(658))) int658;
typedef int __attribute__ ((bitwidth(659))) int659;
typedef int __attribute__ ((bitwidth(660))) int660;
typedef int __attribute__ ((bitwidth(661))) int661;
typedef int __attribute__ ((bitwidth(662))) int662;
typedef int __attribute__ ((bitwidth(663))) int663;
typedef int __attribute__ ((bitwidth(664))) int664;
typedef int __attribute__ ((bitwidth(665))) int665;
typedef int __attribute__ ((bitwidth(666))) int666;
typedef int __attribute__ ((bitwidth(667))) int667;
typedef int __attribute__ ((bitwidth(668))) int668;
typedef int __attribute__ ((bitwidth(669))) int669;
typedef int __attribute__ ((bitwidth(670))) int670;
typedef int __attribute__ ((bitwidth(671))) int671;
typedef int __attribute__ ((bitwidth(672))) int672;
typedef int __attribute__ ((bitwidth(673))) int673;
typedef int __attribute__ ((bitwidth(674))) int674;
typedef int __attribute__ ((bitwidth(675))) int675;
typedef int __attribute__ ((bitwidth(676))) int676;
typedef int __attribute__ ((bitwidth(677))) int677;
typedef int __attribute__ ((bitwidth(678))) int678;
typedef int __attribute__ ((bitwidth(679))) int679;
typedef int __attribute__ ((bitwidth(680))) int680;
typedef int __attribute__ ((bitwidth(681))) int681;
typedef int __attribute__ ((bitwidth(682))) int682;
typedef int __attribute__ ((bitwidth(683))) int683;
typedef int __attribute__ ((bitwidth(684))) int684;
typedef int __attribute__ ((bitwidth(685))) int685;
typedef int __attribute__ ((bitwidth(686))) int686;
typedef int __attribute__ ((bitwidth(687))) int687;
typedef int __attribute__ ((bitwidth(688))) int688;
typedef int __attribute__ ((bitwidth(689))) int689;
typedef int __attribute__ ((bitwidth(690))) int690;
typedef int __attribute__ ((bitwidth(691))) int691;
typedef int __attribute__ ((bitwidth(692))) int692;
typedef int __attribute__ ((bitwidth(693))) int693;
typedef int __attribute__ ((bitwidth(694))) int694;
typedef int __attribute__ ((bitwidth(695))) int695;
typedef int __attribute__ ((bitwidth(696))) int696;
typedef int __attribute__ ((bitwidth(697))) int697;
typedef int __attribute__ ((bitwidth(698))) int698;
typedef int __attribute__ ((bitwidth(699))) int699;
typedef int __attribute__ ((bitwidth(700))) int700;
typedef int __attribute__ ((bitwidth(701))) int701;
typedef int __attribute__ ((bitwidth(702))) int702;
typedef int __attribute__ ((bitwidth(703))) int703;
typedef int __attribute__ ((bitwidth(704))) int704;
typedef int __attribute__ ((bitwidth(705))) int705;
typedef int __attribute__ ((bitwidth(706))) int706;
typedef int __attribute__ ((bitwidth(707))) int707;
typedef int __attribute__ ((bitwidth(708))) int708;
typedef int __attribute__ ((bitwidth(709))) int709;
typedef int __attribute__ ((bitwidth(710))) int710;
typedef int __attribute__ ((bitwidth(711))) int711;
typedef int __attribute__ ((bitwidth(712))) int712;
typedef int __attribute__ ((bitwidth(713))) int713;
typedef int __attribute__ ((bitwidth(714))) int714;
typedef int __attribute__ ((bitwidth(715))) int715;
typedef int __attribute__ ((bitwidth(716))) int716;
typedef int __attribute__ ((bitwidth(717))) int717;
typedef int __attribute__ ((bitwidth(718))) int718;
typedef int __attribute__ ((bitwidth(719))) int719;
typedef int __attribute__ ((bitwidth(720))) int720;
typedef int __attribute__ ((bitwidth(721))) int721;
typedef int __attribute__ ((bitwidth(722))) int722;
typedef int __attribute__ ((bitwidth(723))) int723;
typedef int __attribute__ ((bitwidth(724))) int724;
typedef int __attribute__ ((bitwidth(725))) int725;
typedef int __attribute__ ((bitwidth(726))) int726;
typedef int __attribute__ ((bitwidth(727))) int727;
typedef int __attribute__ ((bitwidth(728))) int728;
typedef int __attribute__ ((bitwidth(729))) int729;
typedef int __attribute__ ((bitwidth(730))) int730;
typedef int __attribute__ ((bitwidth(731))) int731;
typedef int __attribute__ ((bitwidth(732))) int732;
typedef int __attribute__ ((bitwidth(733))) int733;
typedef int __attribute__ ((bitwidth(734))) int734;
typedef int __attribute__ ((bitwidth(735))) int735;
typedef int __attribute__ ((bitwidth(736))) int736;
typedef int __attribute__ ((bitwidth(737))) int737;
typedef int __attribute__ ((bitwidth(738))) int738;
typedef int __attribute__ ((bitwidth(739))) int739;
typedef int __attribute__ ((bitwidth(740))) int740;
typedef int __attribute__ ((bitwidth(741))) int741;
typedef int __attribute__ ((bitwidth(742))) int742;
typedef int __attribute__ ((bitwidth(743))) int743;
typedef int __attribute__ ((bitwidth(744))) int744;
typedef int __attribute__ ((bitwidth(745))) int745;
typedef int __attribute__ ((bitwidth(746))) int746;
typedef int __attribute__ ((bitwidth(747))) int747;
typedef int __attribute__ ((bitwidth(748))) int748;
typedef int __attribute__ ((bitwidth(749))) int749;
typedef int __attribute__ ((bitwidth(750))) int750;
typedef int __attribute__ ((bitwidth(751))) int751;
typedef int __attribute__ ((bitwidth(752))) int752;
typedef int __attribute__ ((bitwidth(753))) int753;
typedef int __attribute__ ((bitwidth(754))) int754;
typedef int __attribute__ ((bitwidth(755))) int755;
typedef int __attribute__ ((bitwidth(756))) int756;
typedef int __attribute__ ((bitwidth(757))) int757;
typedef int __attribute__ ((bitwidth(758))) int758;
typedef int __attribute__ ((bitwidth(759))) int759;
typedef int __attribute__ ((bitwidth(760))) int760;
typedef int __attribute__ ((bitwidth(761))) int761;
typedef int __attribute__ ((bitwidth(762))) int762;
typedef int __attribute__ ((bitwidth(763))) int763;
typedef int __attribute__ ((bitwidth(764))) int764;
typedef int __attribute__ ((bitwidth(765))) int765;
typedef int __attribute__ ((bitwidth(766))) int766;
typedef int __attribute__ ((bitwidth(767))) int767;
typedef int __attribute__ ((bitwidth(768))) int768;
typedef int __attribute__ ((bitwidth(769))) int769;
typedef int __attribute__ ((bitwidth(770))) int770;
typedef int __attribute__ ((bitwidth(771))) int771;
typedef int __attribute__ ((bitwidth(772))) int772;
typedef int __attribute__ ((bitwidth(773))) int773;
typedef int __attribute__ ((bitwidth(774))) int774;
typedef int __attribute__ ((bitwidth(775))) int775;
typedef int __attribute__ ((bitwidth(776))) int776;
typedef int __attribute__ ((bitwidth(777))) int777;
typedef int __attribute__ ((bitwidth(778))) int778;
typedef int __attribute__ ((bitwidth(779))) int779;
typedef int __attribute__ ((bitwidth(780))) int780;
typedef int __attribute__ ((bitwidth(781))) int781;
typedef int __attribute__ ((bitwidth(782))) int782;
typedef int __attribute__ ((bitwidth(783))) int783;
typedef int __attribute__ ((bitwidth(784))) int784;
typedef int __attribute__ ((bitwidth(785))) int785;
typedef int __attribute__ ((bitwidth(786))) int786;
typedef int __attribute__ ((bitwidth(787))) int787;
typedef int __attribute__ ((bitwidth(788))) int788;
typedef int __attribute__ ((bitwidth(789))) int789;
typedef int __attribute__ ((bitwidth(790))) int790;
typedef int __attribute__ ((bitwidth(791))) int791;
typedef int __attribute__ ((bitwidth(792))) int792;
typedef int __attribute__ ((bitwidth(793))) int793;
typedef int __attribute__ ((bitwidth(794))) int794;
typedef int __attribute__ ((bitwidth(795))) int795;
typedef int __attribute__ ((bitwidth(796))) int796;
typedef int __attribute__ ((bitwidth(797))) int797;
typedef int __attribute__ ((bitwidth(798))) int798;
typedef int __attribute__ ((bitwidth(799))) int799;
typedef int __attribute__ ((bitwidth(800))) int800;
typedef int __attribute__ ((bitwidth(801))) int801;
typedef int __attribute__ ((bitwidth(802))) int802;
typedef int __attribute__ ((bitwidth(803))) int803;
typedef int __attribute__ ((bitwidth(804))) int804;
typedef int __attribute__ ((bitwidth(805))) int805;
typedef int __attribute__ ((bitwidth(806))) int806;
typedef int __attribute__ ((bitwidth(807))) int807;
typedef int __attribute__ ((bitwidth(808))) int808;
typedef int __attribute__ ((bitwidth(809))) int809;
typedef int __attribute__ ((bitwidth(810))) int810;
typedef int __attribute__ ((bitwidth(811))) int811;
typedef int __attribute__ ((bitwidth(812))) int812;
typedef int __attribute__ ((bitwidth(813))) int813;
typedef int __attribute__ ((bitwidth(814))) int814;
typedef int __attribute__ ((bitwidth(815))) int815;
typedef int __attribute__ ((bitwidth(816))) int816;
typedef int __attribute__ ((bitwidth(817))) int817;
typedef int __attribute__ ((bitwidth(818))) int818;
typedef int __attribute__ ((bitwidth(819))) int819;
typedef int __attribute__ ((bitwidth(820))) int820;
typedef int __attribute__ ((bitwidth(821))) int821;
typedef int __attribute__ ((bitwidth(822))) int822;
typedef int __attribute__ ((bitwidth(823))) int823;
typedef int __attribute__ ((bitwidth(824))) int824;
typedef int __attribute__ ((bitwidth(825))) int825;
typedef int __attribute__ ((bitwidth(826))) int826;
typedef int __attribute__ ((bitwidth(827))) int827;
typedef int __attribute__ ((bitwidth(828))) int828;
typedef int __attribute__ ((bitwidth(829))) int829;
typedef int __attribute__ ((bitwidth(830))) int830;
typedef int __attribute__ ((bitwidth(831))) int831;
typedef int __attribute__ ((bitwidth(832))) int832;
typedef int __attribute__ ((bitwidth(833))) int833;
typedef int __attribute__ ((bitwidth(834))) int834;
typedef int __attribute__ ((bitwidth(835))) int835;
typedef int __attribute__ ((bitwidth(836))) int836;
typedef int __attribute__ ((bitwidth(837))) int837;
typedef int __attribute__ ((bitwidth(838))) int838;
typedef int __attribute__ ((bitwidth(839))) int839;
typedef int __attribute__ ((bitwidth(840))) int840;
typedef int __attribute__ ((bitwidth(841))) int841;
typedef int __attribute__ ((bitwidth(842))) int842;
typedef int __attribute__ ((bitwidth(843))) int843;
typedef int __attribute__ ((bitwidth(844))) int844;
typedef int __attribute__ ((bitwidth(845))) int845;
typedef int __attribute__ ((bitwidth(846))) int846;
typedef int __attribute__ ((bitwidth(847))) int847;
typedef int __attribute__ ((bitwidth(848))) int848;
typedef int __attribute__ ((bitwidth(849))) int849;
typedef int __attribute__ ((bitwidth(850))) int850;
typedef int __attribute__ ((bitwidth(851))) int851;
typedef int __attribute__ ((bitwidth(852))) int852;
typedef int __attribute__ ((bitwidth(853))) int853;
typedef int __attribute__ ((bitwidth(854))) int854;
typedef int __attribute__ ((bitwidth(855))) int855;
typedef int __attribute__ ((bitwidth(856))) int856;
typedef int __attribute__ ((bitwidth(857))) int857;
typedef int __attribute__ ((bitwidth(858))) int858;
typedef int __attribute__ ((bitwidth(859))) int859;
typedef int __attribute__ ((bitwidth(860))) int860;
typedef int __attribute__ ((bitwidth(861))) int861;
typedef int __attribute__ ((bitwidth(862))) int862;
typedef int __attribute__ ((bitwidth(863))) int863;
typedef int __attribute__ ((bitwidth(864))) int864;
typedef int __attribute__ ((bitwidth(865))) int865;
typedef int __attribute__ ((bitwidth(866))) int866;
typedef int __attribute__ ((bitwidth(867))) int867;
typedef int __attribute__ ((bitwidth(868))) int868;
typedef int __attribute__ ((bitwidth(869))) int869;
typedef int __attribute__ ((bitwidth(870))) int870;
typedef int __attribute__ ((bitwidth(871))) int871;
typedef int __attribute__ ((bitwidth(872))) int872;
typedef int __attribute__ ((bitwidth(873))) int873;
typedef int __attribute__ ((bitwidth(874))) int874;
typedef int __attribute__ ((bitwidth(875))) int875;
typedef int __attribute__ ((bitwidth(876))) int876;
typedef int __attribute__ ((bitwidth(877))) int877;
typedef int __attribute__ ((bitwidth(878))) int878;
typedef int __attribute__ ((bitwidth(879))) int879;
typedef int __attribute__ ((bitwidth(880))) int880;
typedef int __attribute__ ((bitwidth(881))) int881;
typedef int __attribute__ ((bitwidth(882))) int882;
typedef int __attribute__ ((bitwidth(883))) int883;
typedef int __attribute__ ((bitwidth(884))) int884;
typedef int __attribute__ ((bitwidth(885))) int885;
typedef int __attribute__ ((bitwidth(886))) int886;
typedef int __attribute__ ((bitwidth(887))) int887;
typedef int __attribute__ ((bitwidth(888))) int888;
typedef int __attribute__ ((bitwidth(889))) int889;
typedef int __attribute__ ((bitwidth(890))) int890;
typedef int __attribute__ ((bitwidth(891))) int891;
typedef int __attribute__ ((bitwidth(892))) int892;
typedef int __attribute__ ((bitwidth(893))) int893;
typedef int __attribute__ ((bitwidth(894))) int894;
typedef int __attribute__ ((bitwidth(895))) int895;
typedef int __attribute__ ((bitwidth(896))) int896;
typedef int __attribute__ ((bitwidth(897))) int897;
typedef int __attribute__ ((bitwidth(898))) int898;
typedef int __attribute__ ((bitwidth(899))) int899;
typedef int __attribute__ ((bitwidth(900))) int900;
typedef int __attribute__ ((bitwidth(901))) int901;
typedef int __attribute__ ((bitwidth(902))) int902;
typedef int __attribute__ ((bitwidth(903))) int903;
typedef int __attribute__ ((bitwidth(904))) int904;
typedef int __attribute__ ((bitwidth(905))) int905;
typedef int __attribute__ ((bitwidth(906))) int906;
typedef int __attribute__ ((bitwidth(907))) int907;
typedef int __attribute__ ((bitwidth(908))) int908;
typedef int __attribute__ ((bitwidth(909))) int909;
typedef int __attribute__ ((bitwidth(910))) int910;
typedef int __attribute__ ((bitwidth(911))) int911;
typedef int __attribute__ ((bitwidth(912))) int912;
typedef int __attribute__ ((bitwidth(913))) int913;
typedef int __attribute__ ((bitwidth(914))) int914;
typedef int __attribute__ ((bitwidth(915))) int915;
typedef int __attribute__ ((bitwidth(916))) int916;
typedef int __attribute__ ((bitwidth(917))) int917;
typedef int __attribute__ ((bitwidth(918))) int918;
typedef int __attribute__ ((bitwidth(919))) int919;
typedef int __attribute__ ((bitwidth(920))) int920;
typedef int __attribute__ ((bitwidth(921))) int921;
typedef int __attribute__ ((bitwidth(922))) int922;
typedef int __attribute__ ((bitwidth(923))) int923;
typedef int __attribute__ ((bitwidth(924))) int924;
typedef int __attribute__ ((bitwidth(925))) int925;
typedef int __attribute__ ((bitwidth(926))) int926;
typedef int __attribute__ ((bitwidth(927))) int927;
typedef int __attribute__ ((bitwidth(928))) int928;
typedef int __attribute__ ((bitwidth(929))) int929;
typedef int __attribute__ ((bitwidth(930))) int930;
typedef int __attribute__ ((bitwidth(931))) int931;
typedef int __attribute__ ((bitwidth(932))) int932;
typedef int __attribute__ ((bitwidth(933))) int933;
typedef int __attribute__ ((bitwidth(934))) int934;
typedef int __attribute__ ((bitwidth(935))) int935;
typedef int __attribute__ ((bitwidth(936))) int936;
typedef int __attribute__ ((bitwidth(937))) int937;
typedef int __attribute__ ((bitwidth(938))) int938;
typedef int __attribute__ ((bitwidth(939))) int939;
typedef int __attribute__ ((bitwidth(940))) int940;
typedef int __attribute__ ((bitwidth(941))) int941;
typedef int __attribute__ ((bitwidth(942))) int942;
typedef int __attribute__ ((bitwidth(943))) int943;
typedef int __attribute__ ((bitwidth(944))) int944;
typedef int __attribute__ ((bitwidth(945))) int945;
typedef int __attribute__ ((bitwidth(946))) int946;
typedef int __attribute__ ((bitwidth(947))) int947;
typedef int __attribute__ ((bitwidth(948))) int948;
typedef int __attribute__ ((bitwidth(949))) int949;
typedef int __attribute__ ((bitwidth(950))) int950;
typedef int __attribute__ ((bitwidth(951))) int951;
typedef int __attribute__ ((bitwidth(952))) int952;
typedef int __attribute__ ((bitwidth(953))) int953;
typedef int __attribute__ ((bitwidth(954))) int954;
typedef int __attribute__ ((bitwidth(955))) int955;
typedef int __attribute__ ((bitwidth(956))) int956;
typedef int __attribute__ ((bitwidth(957))) int957;
typedef int __attribute__ ((bitwidth(958))) int958;
typedef int __attribute__ ((bitwidth(959))) int959;
typedef int __attribute__ ((bitwidth(960))) int960;
typedef int __attribute__ ((bitwidth(961))) int961;
typedef int __attribute__ ((bitwidth(962))) int962;
typedef int __attribute__ ((bitwidth(963))) int963;
typedef int __attribute__ ((bitwidth(964))) int964;
typedef int __attribute__ ((bitwidth(965))) int965;
typedef int __attribute__ ((bitwidth(966))) int966;
typedef int __attribute__ ((bitwidth(967))) int967;
typedef int __attribute__ ((bitwidth(968))) int968;
typedef int __attribute__ ((bitwidth(969))) int969;
typedef int __attribute__ ((bitwidth(970))) int970;
typedef int __attribute__ ((bitwidth(971))) int971;
typedef int __attribute__ ((bitwidth(972))) int972;
typedef int __attribute__ ((bitwidth(973))) int973;
typedef int __attribute__ ((bitwidth(974))) int974;
typedef int __attribute__ ((bitwidth(975))) int975;
typedef int __attribute__ ((bitwidth(976))) int976;
typedef int __attribute__ ((bitwidth(977))) int977;
typedef int __attribute__ ((bitwidth(978))) int978;
typedef int __attribute__ ((bitwidth(979))) int979;
typedef int __attribute__ ((bitwidth(980))) int980;
typedef int __attribute__ ((bitwidth(981))) int981;
typedef int __attribute__ ((bitwidth(982))) int982;
typedef int __attribute__ ((bitwidth(983))) int983;
typedef int __attribute__ ((bitwidth(984))) int984;
typedef int __attribute__ ((bitwidth(985))) int985;
typedef int __attribute__ ((bitwidth(986))) int986;
typedef int __attribute__ ((bitwidth(987))) int987;
typedef int __attribute__ ((bitwidth(988))) int988;
typedef int __attribute__ ((bitwidth(989))) int989;
typedef int __attribute__ ((bitwidth(990))) int990;
typedef int __attribute__ ((bitwidth(991))) int991;
typedef int __attribute__ ((bitwidth(992))) int992;
typedef int __attribute__ ((bitwidth(993))) int993;
typedef int __attribute__ ((bitwidth(994))) int994;
typedef int __attribute__ ((bitwidth(995))) int995;
typedef int __attribute__ ((bitwidth(996))) int996;
typedef int __attribute__ ((bitwidth(997))) int997;
typedef int __attribute__ ((bitwidth(998))) int998;
typedef int __attribute__ ((bitwidth(999))) int999;
typedef int __attribute__ ((bitwidth(1000))) int1000;
typedef int __attribute__ ((bitwidth(1001))) int1001;
typedef int __attribute__ ((bitwidth(1002))) int1002;
typedef int __attribute__ ((bitwidth(1003))) int1003;
typedef int __attribute__ ((bitwidth(1004))) int1004;
typedef int __attribute__ ((bitwidth(1005))) int1005;
typedef int __attribute__ ((bitwidth(1006))) int1006;
typedef int __attribute__ ((bitwidth(1007))) int1007;
typedef int __attribute__ ((bitwidth(1008))) int1008;
typedef int __attribute__ ((bitwidth(1009))) int1009;
typedef int __attribute__ ((bitwidth(1010))) int1010;
typedef int __attribute__ ((bitwidth(1011))) int1011;
typedef int __attribute__ ((bitwidth(1012))) int1012;
typedef int __attribute__ ((bitwidth(1013))) int1013;
typedef int __attribute__ ((bitwidth(1014))) int1014;
typedef int __attribute__ ((bitwidth(1015))) int1015;
typedef int __attribute__ ((bitwidth(1016))) int1016;
typedef int __attribute__ ((bitwidth(1017))) int1017;
typedef int __attribute__ ((bitwidth(1018))) int1018;
typedef int __attribute__ ((bitwidth(1019))) int1019;
typedef int __attribute__ ((bitwidth(1020))) int1020;
typedef int __attribute__ ((bitwidth(1021))) int1021;
typedef int __attribute__ ((bitwidth(1022))) int1022;
typedef int __attribute__ ((bitwidth(1023))) int1023;
typedef int __attribute__ ((bitwidth(1024))) int1024;
# 98 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h" 2
# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt_ext.def" 1


typedef int __attribute__ ((bitwidth(1025))) int1025;
typedef int __attribute__ ((bitwidth(1026))) int1026;
typedef int __attribute__ ((bitwidth(1027))) int1027;
typedef int __attribute__ ((bitwidth(1028))) int1028;
typedef int __attribute__ ((bitwidth(1029))) int1029;
typedef int __attribute__ ((bitwidth(1030))) int1030;
typedef int __attribute__ ((bitwidth(1031))) int1031;
typedef int __attribute__ ((bitwidth(1032))) int1032;
typedef int __attribute__ ((bitwidth(1033))) int1033;
typedef int __attribute__ ((bitwidth(1034))) int1034;
typedef int __attribute__ ((bitwidth(1035))) int1035;
typedef int __attribute__ ((bitwidth(1036))) int1036;
typedef int __attribute__ ((bitwidth(1037))) int1037;
typedef int __attribute__ ((bitwidth(1038))) int1038;
typedef int __attribute__ ((bitwidth(1039))) int1039;
typedef int __attribute__ ((bitwidth(1040))) int1040;
typedef int __attribute__ ((bitwidth(1041))) int1041;
typedef int __attribute__ ((bitwidth(1042))) int1042;
typedef int __attribute__ ((bitwidth(1043))) int1043;
typedef int __attribute__ ((bitwidth(1044))) int1044;
typedef int __attribute__ ((bitwidth(1045))) int1045;
typedef int __attribute__ ((bitwidth(1046))) int1046;
typedef int __attribute__ ((bitwidth(1047))) int1047;
typedef int __attribute__ ((bitwidth(1048))) int1048;
typedef int __attribute__ ((bitwidth(1049))) int1049;
typedef int __attribute__ ((bitwidth(1050))) int1050;
typedef int __attribute__ ((bitwidth(1051))) int1051;
typedef int __attribute__ ((bitwidth(1052))) int1052;
typedef int __attribute__ ((bitwidth(1053))) int1053;
typedef int __attribute__ ((bitwidth(1054))) int1054;
typedef int __attribute__ ((bitwidth(1055))) int1055;
typedef int __attribute__ ((bitwidth(1056))) int1056;
typedef int __attribute__ ((bitwidth(1057))) int1057;
typedef int __attribute__ ((bitwidth(1058))) int1058;
typedef int __attribute__ ((bitwidth(1059))) int1059;
typedef int __attribute__ ((bitwidth(1060))) int1060;
typedef int __attribute__ ((bitwidth(1061))) int1061;
typedef int __attribute__ ((bitwidth(1062))) int1062;
typedef int __attribute__ ((bitwidth(1063))) int1063;
typedef int __attribute__ ((bitwidth(1064))) int1064;
typedef int __attribute__ ((bitwidth(1065))) int1065;
typedef int __attribute__ ((bitwidth(1066))) int1066;
typedef int __attribute__ ((bitwidth(1067))) int1067;
typedef int __attribute__ ((bitwidth(1068))) int1068;
typedef int __attribute__ ((bitwidth(1069))) int1069;
typedef int __attribute__ ((bitwidth(1070))) int1070;
typedef int __attribute__ ((bitwidth(1071))) int1071;
typedef int __attribute__ ((bitwidth(1072))) int1072;
typedef int __attribute__ ((bitwidth(1073))) int1073;
typedef int __attribute__ ((bitwidth(1074))) int1074;
typedef int __attribute__ ((bitwidth(1075))) int1075;
typedef int __attribute__ ((bitwidth(1076))) int1076;
typedef int __attribute__ ((bitwidth(1077))) int1077;
typedef int __attribute__ ((bitwidth(1078))) int1078;
typedef int __attribute__ ((bitwidth(1079))) int1079;
typedef int __attribute__ ((bitwidth(1080))) int1080;
typedef int __attribute__ ((bitwidth(1081))) int1081;
typedef int __attribute__ ((bitwidth(1082))) int1082;
typedef int __attribute__ ((bitwidth(1083))) int1083;
typedef int __attribute__ ((bitwidth(1084))) int1084;
typedef int __attribute__ ((bitwidth(1085))) int1085;
typedef int __attribute__ ((bitwidth(1086))) int1086;
typedef int __attribute__ ((bitwidth(1087))) int1087;
typedef int __attribute__ ((bitwidth(1088))) int1088;
typedef int __attribute__ ((bitwidth(1089))) int1089;
typedef int __attribute__ ((bitwidth(1090))) int1090;
typedef int __attribute__ ((bitwidth(1091))) int1091;
typedef int __attribute__ ((bitwidth(1092))) int1092;
typedef int __attribute__ ((bitwidth(1093))) int1093;
typedef int __attribute__ ((bitwidth(1094))) int1094;
typedef int __attribute__ ((bitwidth(1095))) int1095;
typedef int __attribute__ ((bitwidth(1096))) int1096;
typedef int __attribute__ ((bitwidth(1097))) int1097;
typedef int __attribute__ ((bitwidth(1098))) int1098;
typedef int __attribute__ ((bitwidth(1099))) int1099;
typedef int __attribute__ ((bitwidth(1100))) int1100;
typedef int __attribute__ ((bitwidth(1101))) int1101;
typedef int __attribute__ ((bitwidth(1102))) int1102;
typedef int __attribute__ ((bitwidth(1103))) int1103;
typedef int __attribute__ ((bitwidth(1104))) int1104;
typedef int __attribute__ ((bitwidth(1105))) int1105;
typedef int __attribute__ ((bitwidth(1106))) int1106;
typedef int __attribute__ ((bitwidth(1107))) int1107;
typedef int __attribute__ ((bitwidth(1108))) int1108;
typedef int __attribute__ ((bitwidth(1109))) int1109;
typedef int __attribute__ ((bitwidth(1110))) int1110;
typedef int __attribute__ ((bitwidth(1111))) int1111;
typedef int __attribute__ ((bitwidth(1112))) int1112;
typedef int __attribute__ ((bitwidth(1113))) int1113;
typedef int __attribute__ ((bitwidth(1114))) int1114;
typedef int __attribute__ ((bitwidth(1115))) int1115;
typedef int __attribute__ ((bitwidth(1116))) int1116;
typedef int __attribute__ ((bitwidth(1117))) int1117;
typedef int __attribute__ ((bitwidth(1118))) int1118;
typedef int __attribute__ ((bitwidth(1119))) int1119;
typedef int __attribute__ ((bitwidth(1120))) int1120;
typedef int __attribute__ ((bitwidth(1121))) int1121;
typedef int __attribute__ ((bitwidth(1122))) int1122;
typedef int __attribute__ ((bitwidth(1123))) int1123;
typedef int __attribute__ ((bitwidth(1124))) int1124;
typedef int __attribute__ ((bitwidth(1125))) int1125;
typedef int __attribute__ ((bitwidth(1126))) int1126;
typedef int __attribute__ ((bitwidth(1127))) int1127;
typedef int __attribute__ ((bitwidth(1128))) int1128;
typedef int __attribute__ ((bitwidth(1129))) int1129;
typedef int __attribute__ ((bitwidth(1130))) int1130;
typedef int __attribute__ ((bitwidth(1131))) int1131;
typedef int __attribute__ ((bitwidth(1132))) int1132;
typedef int __attribute__ ((bitwidth(1133))) int1133;
typedef int __attribute__ ((bitwidth(1134))) int1134;
typedef int __attribute__ ((bitwidth(1135))) int1135;
typedef int __attribute__ ((bitwidth(1136))) int1136;
typedef int __attribute__ ((bitwidth(1137))) int1137;
typedef int __attribute__ ((bitwidth(1138))) int1138;
typedef int __attribute__ ((bitwidth(1139))) int1139;
typedef int __attribute__ ((bitwidth(1140))) int1140;
typedef int __attribute__ ((bitwidth(1141))) int1141;
typedef int __attribute__ ((bitwidth(1142))) int1142;
typedef int __attribute__ ((bitwidth(1143))) int1143;
typedef int __attribute__ ((bitwidth(1144))) int1144;
typedef int __attribute__ ((bitwidth(1145))) int1145;
typedef int __attribute__ ((bitwidth(1146))) int1146;
typedef int __attribute__ ((bitwidth(1147))) int1147;
typedef int __attribute__ ((bitwidth(1148))) int1148;
typedef int __attribute__ ((bitwidth(1149))) int1149;
typedef int __attribute__ ((bitwidth(1150))) int1150;
typedef int __attribute__ ((bitwidth(1151))) int1151;
typedef int __attribute__ ((bitwidth(1152))) int1152;
typedef int __attribute__ ((bitwidth(1153))) int1153;
typedef int __attribute__ ((bitwidth(1154))) int1154;
typedef int __attribute__ ((bitwidth(1155))) int1155;
typedef int __attribute__ ((bitwidth(1156))) int1156;
typedef int __attribute__ ((bitwidth(1157))) int1157;
typedef int __attribute__ ((bitwidth(1158))) int1158;
typedef int __attribute__ ((bitwidth(1159))) int1159;
typedef int __attribute__ ((bitwidth(1160))) int1160;
typedef int __attribute__ ((bitwidth(1161))) int1161;
typedef int __attribute__ ((bitwidth(1162))) int1162;
typedef int __attribute__ ((bitwidth(1163))) int1163;
typedef int __attribute__ ((bitwidth(1164))) int1164;
typedef int __attribute__ ((bitwidth(1165))) int1165;
typedef int __attribute__ ((bitwidth(1166))) int1166;
typedef int __attribute__ ((bitwidth(1167))) int1167;
typedef int __attribute__ ((bitwidth(1168))) int1168;
typedef int __attribute__ ((bitwidth(1169))) int1169;
typedef int __attribute__ ((bitwidth(1170))) int1170;
typedef int __attribute__ ((bitwidth(1171))) int1171;
typedef int __attribute__ ((bitwidth(1172))) int1172;
typedef int __attribute__ ((bitwidth(1173))) int1173;
typedef int __attribute__ ((bitwidth(1174))) int1174;
typedef int __attribute__ ((bitwidth(1175))) int1175;
typedef int __attribute__ ((bitwidth(1176))) int1176;
typedef int __attribute__ ((bitwidth(1177))) int1177;
typedef int __attribute__ ((bitwidth(1178))) int1178;
typedef int __attribute__ ((bitwidth(1179))) int1179;
typedef int __attribute__ ((bitwidth(1180))) int1180;
typedef int __attribute__ ((bitwidth(1181))) int1181;
typedef int __attribute__ ((bitwidth(1182))) int1182;
typedef int __attribute__ ((bitwidth(1183))) int1183;
typedef int __attribute__ ((bitwidth(1184))) int1184;
typedef int __attribute__ ((bitwidth(1185))) int1185;
typedef int __attribute__ ((bitwidth(1186))) int1186;
typedef int __attribute__ ((bitwidth(1187))) int1187;
typedef int __attribute__ ((bitwidth(1188))) int1188;
typedef int __attribute__ ((bitwidth(1189))) int1189;
typedef int __attribute__ ((bitwidth(1190))) int1190;
typedef int __attribute__ ((bitwidth(1191))) int1191;
typedef int __attribute__ ((bitwidth(1192))) int1192;
typedef int __attribute__ ((bitwidth(1193))) int1193;
typedef int __attribute__ ((bitwidth(1194))) int1194;
typedef int __attribute__ ((bitwidth(1195))) int1195;
typedef int __attribute__ ((bitwidth(1196))) int1196;
typedef int __attribute__ ((bitwidth(1197))) int1197;
typedef int __attribute__ ((bitwidth(1198))) int1198;
typedef int __attribute__ ((bitwidth(1199))) int1199;
typedef int __attribute__ ((bitwidth(1200))) int1200;
typedef int __attribute__ ((bitwidth(1201))) int1201;
typedef int __attribute__ ((bitwidth(1202))) int1202;
typedef int __attribute__ ((bitwidth(1203))) int1203;
typedef int __attribute__ ((bitwidth(1204))) int1204;
typedef int __attribute__ ((bitwidth(1205))) int1205;
typedef int __attribute__ ((bitwidth(1206))) int1206;
typedef int __attribute__ ((bitwidth(1207))) int1207;
typedef int __attribute__ ((bitwidth(1208))) int1208;
typedef int __attribute__ ((bitwidth(1209))) int1209;
typedef int __attribute__ ((bitwidth(1210))) int1210;
typedef int __attribute__ ((bitwidth(1211))) int1211;
typedef int __attribute__ ((bitwidth(1212))) int1212;
typedef int __attribute__ ((bitwidth(1213))) int1213;
typedef int __attribute__ ((bitwidth(1214))) int1214;
typedef int __attribute__ ((bitwidth(1215))) int1215;
typedef int __attribute__ ((bitwidth(1216))) int1216;
typedef int __attribute__ ((bitwidth(1217))) int1217;
typedef int __attribute__ ((bitwidth(1218))) int1218;
typedef int __attribute__ ((bitwidth(1219))) int1219;
typedef int __attribute__ ((bitwidth(1220))) int1220;
typedef int __attribute__ ((bitwidth(1221))) int1221;
typedef int __attribute__ ((bitwidth(1222))) int1222;
typedef int __attribute__ ((bitwidth(1223))) int1223;
typedef int __attribute__ ((bitwidth(1224))) int1224;
typedef int __attribute__ ((bitwidth(1225))) int1225;
typedef int __attribute__ ((bitwidth(1226))) int1226;
typedef int __attribute__ ((bitwidth(1227))) int1227;
typedef int __attribute__ ((bitwidth(1228))) int1228;
typedef int __attribute__ ((bitwidth(1229))) int1229;
typedef int __attribute__ ((bitwidth(1230))) int1230;
typedef int __attribute__ ((bitwidth(1231))) int1231;
typedef int __attribute__ ((bitwidth(1232))) int1232;
typedef int __attribute__ ((bitwidth(1233))) int1233;
typedef int __attribute__ ((bitwidth(1234))) int1234;
typedef int __attribute__ ((bitwidth(1235))) int1235;
typedef int __attribute__ ((bitwidth(1236))) int1236;
typedef int __attribute__ ((bitwidth(1237))) int1237;
typedef int __attribute__ ((bitwidth(1238))) int1238;
typedef int __attribute__ ((bitwidth(1239))) int1239;
typedef int __attribute__ ((bitwidth(1240))) int1240;
typedef int __attribute__ ((bitwidth(1241))) int1241;
typedef int __attribute__ ((bitwidth(1242))) int1242;
typedef int __attribute__ ((bitwidth(1243))) int1243;
typedef int __attribute__ ((bitwidth(1244))) int1244;
typedef int __attribute__ ((bitwidth(1245))) int1245;
typedef int __attribute__ ((bitwidth(1246))) int1246;
typedef int __attribute__ ((bitwidth(1247))) int1247;
typedef int __attribute__ ((bitwidth(1248))) int1248;
typedef int __attribute__ ((bitwidth(1249))) int1249;
typedef int __attribute__ ((bitwidth(1250))) int1250;
typedef int __attribute__ ((bitwidth(1251))) int1251;
typedef int __attribute__ ((bitwidth(1252))) int1252;
typedef int __attribute__ ((bitwidth(1253))) int1253;
typedef int __attribute__ ((bitwidth(1254))) int1254;
typedef int __attribute__ ((bitwidth(1255))) int1255;
typedef int __attribute__ ((bitwidth(1256))) int1256;
typedef int __attribute__ ((bitwidth(1257))) int1257;
typedef int __attribute__ ((bitwidth(1258))) int1258;
typedef int __attribute__ ((bitwidth(1259))) int1259;
typedef int __attribute__ ((bitwidth(1260))) int1260;
typedef int __attribute__ ((bitwidth(1261))) int1261;
typedef int __attribute__ ((bitwidth(1262))) int1262;
typedef int __attribute__ ((bitwidth(1263))) int1263;
typedef int __attribute__ ((bitwidth(1264))) int1264;
typedef int __attribute__ ((bitwidth(1265))) int1265;
typedef int __attribute__ ((bitwidth(1266))) int1266;
typedef int __attribute__ ((bitwidth(1267))) int1267;
typedef int __attribute__ ((bitwidth(1268))) int1268;
typedef int __attribute__ ((bitwidth(1269))) int1269;
typedef int __attribute__ ((bitwidth(1270))) int1270;
typedef int __attribute__ ((bitwidth(1271))) int1271;
typedef int __attribute__ ((bitwidth(1272))) int1272;
typedef int __attribute__ ((bitwidth(1273))) int1273;
typedef int __attribute__ ((bitwidth(1274))) int1274;
typedef int __attribute__ ((bitwidth(1275))) int1275;
typedef int __attribute__ ((bitwidth(1276))) int1276;
typedef int __attribute__ ((bitwidth(1277))) int1277;
typedef int __attribute__ ((bitwidth(1278))) int1278;
typedef int __attribute__ ((bitwidth(1279))) int1279;
typedef int __attribute__ ((bitwidth(1280))) int1280;
typedef int __attribute__ ((bitwidth(1281))) int1281;
typedef int __attribute__ ((bitwidth(1282))) int1282;
typedef int __attribute__ ((bitwidth(1283))) int1283;
typedef int __attribute__ ((bitwidth(1284))) int1284;
typedef int __attribute__ ((bitwidth(1285))) int1285;
typedef int __attribute__ ((bitwidth(1286))) int1286;
typedef int __attribute__ ((bitwidth(1287))) int1287;
typedef int __attribute__ ((bitwidth(1288))) int1288;
typedef int __attribute__ ((bitwidth(1289))) int1289;
typedef int __attribute__ ((bitwidth(1290))) int1290;
typedef int __attribute__ ((bitwidth(1291))) int1291;
typedef int __attribute__ ((bitwidth(1292))) int1292;
typedef int __attribute__ ((bitwidth(1293))) int1293;
typedef int __attribute__ ((bitwidth(1294))) int1294;
typedef int __attribute__ ((bitwidth(1295))) int1295;
typedef int __attribute__ ((bitwidth(1296))) int1296;
typedef int __attribute__ ((bitwidth(1297))) int1297;
typedef int __attribute__ ((bitwidth(1298))) int1298;
typedef int __attribute__ ((bitwidth(1299))) int1299;
typedef int __attribute__ ((bitwidth(1300))) int1300;
typedef int __attribute__ ((bitwidth(1301))) int1301;
typedef int __attribute__ ((bitwidth(1302))) int1302;
typedef int __attribute__ ((bitwidth(1303))) int1303;
typedef int __attribute__ ((bitwidth(1304))) int1304;
typedef int __attribute__ ((bitwidth(1305))) int1305;
typedef int __attribute__ ((bitwidth(1306))) int1306;
typedef int __attribute__ ((bitwidth(1307))) int1307;
typedef int __attribute__ ((bitwidth(1308))) int1308;
typedef int __attribute__ ((bitwidth(1309))) int1309;
typedef int __attribute__ ((bitwidth(1310))) int1310;
typedef int __attribute__ ((bitwidth(1311))) int1311;
typedef int __attribute__ ((bitwidth(1312))) int1312;
typedef int __attribute__ ((bitwidth(1313))) int1313;
typedef int __attribute__ ((bitwidth(1314))) int1314;
typedef int __attribute__ ((bitwidth(1315))) int1315;
typedef int __attribute__ ((bitwidth(1316))) int1316;
typedef int __attribute__ ((bitwidth(1317))) int1317;
typedef int __attribute__ ((bitwidth(1318))) int1318;
typedef int __attribute__ ((bitwidth(1319))) int1319;
typedef int __attribute__ ((bitwidth(1320))) int1320;
typedef int __attribute__ ((bitwidth(1321))) int1321;
typedef int __attribute__ ((bitwidth(1322))) int1322;
typedef int __attribute__ ((bitwidth(1323))) int1323;
typedef int __attribute__ ((bitwidth(1324))) int1324;
typedef int __attribute__ ((bitwidth(1325))) int1325;
typedef int __attribute__ ((bitwidth(1326))) int1326;
typedef int __attribute__ ((bitwidth(1327))) int1327;
typedef int __attribute__ ((bitwidth(1328))) int1328;
typedef int __attribute__ ((bitwidth(1329))) int1329;
typedef int __attribute__ ((bitwidth(1330))) int1330;
typedef int __attribute__ ((bitwidth(1331))) int1331;
typedef int __attribute__ ((bitwidth(1332))) int1332;
typedef int __attribute__ ((bitwidth(1333))) int1333;
typedef int __attribute__ ((bitwidth(1334))) int1334;
typedef int __attribute__ ((bitwidth(1335))) int1335;
typedef int __attribute__ ((bitwidth(1336))) int1336;
typedef int __attribute__ ((bitwidth(1337))) int1337;
typedef int __attribute__ ((bitwidth(1338))) int1338;
typedef int __attribute__ ((bitwidth(1339))) int1339;
typedef int __attribute__ ((bitwidth(1340))) int1340;
typedef int __attribute__ ((bitwidth(1341))) int1341;
typedef int __attribute__ ((bitwidth(1342))) int1342;
typedef int __attribute__ ((bitwidth(1343))) int1343;
typedef int __attribute__ ((bitwidth(1344))) int1344;
typedef int __attribute__ ((bitwidth(1345))) int1345;
typedef int __attribute__ ((bitwidth(1346))) int1346;
typedef int __attribute__ ((bitwidth(1347))) int1347;
typedef int __attribute__ ((bitwidth(1348))) int1348;
typedef int __attribute__ ((bitwidth(1349))) int1349;
typedef int __attribute__ ((bitwidth(1350))) int1350;
typedef int __attribute__ ((bitwidth(1351))) int1351;
typedef int __attribute__ ((bitwidth(1352))) int1352;
typedef int __attribute__ ((bitwidth(1353))) int1353;
typedef int __attribute__ ((bitwidth(1354))) int1354;
typedef int __attribute__ ((bitwidth(1355))) int1355;
typedef int __attribute__ ((bitwidth(1356))) int1356;
typedef int __attribute__ ((bitwidth(1357))) int1357;
typedef int __attribute__ ((bitwidth(1358))) int1358;
typedef int __attribute__ ((bitwidth(1359))) int1359;
typedef int __attribute__ ((bitwidth(1360))) int1360;
typedef int __attribute__ ((bitwidth(1361))) int1361;
typedef int __attribute__ ((bitwidth(1362))) int1362;
typedef int __attribute__ ((bitwidth(1363))) int1363;
typedef int __attribute__ ((bitwidth(1364))) int1364;
typedef int __attribute__ ((bitwidth(1365))) int1365;
typedef int __attribute__ ((bitwidth(1366))) int1366;
typedef int __attribute__ ((bitwidth(1367))) int1367;
typedef int __attribute__ ((bitwidth(1368))) int1368;
typedef int __attribute__ ((bitwidth(1369))) int1369;
typedef int __attribute__ ((bitwidth(1370))) int1370;
typedef int __attribute__ ((bitwidth(1371))) int1371;
typedef int __attribute__ ((bitwidth(1372))) int1372;
typedef int __attribute__ ((bitwidth(1373))) int1373;
typedef int __attribute__ ((bitwidth(1374))) int1374;
typedef int __attribute__ ((bitwidth(1375))) int1375;
typedef int __attribute__ ((bitwidth(1376))) int1376;
typedef int __attribute__ ((bitwidth(1377))) int1377;
typedef int __attribute__ ((bitwidth(1378))) int1378;
typedef int __attribute__ ((bitwidth(1379))) int1379;
typedef int __attribute__ ((bitwidth(1380))) int1380;
typedef int __attribute__ ((bitwidth(1381))) int1381;
typedef int __attribute__ ((bitwidth(1382))) int1382;
typedef int __attribute__ ((bitwidth(1383))) int1383;
typedef int __attribute__ ((bitwidth(1384))) int1384;
typedef int __attribute__ ((bitwidth(1385))) int1385;
typedef int __attribute__ ((bitwidth(1386))) int1386;
typedef int __attribute__ ((bitwidth(1387))) int1387;
typedef int __attribute__ ((bitwidth(1388))) int1388;
typedef int __attribute__ ((bitwidth(1389))) int1389;
typedef int __attribute__ ((bitwidth(1390))) int1390;
typedef int __attribute__ ((bitwidth(1391))) int1391;
typedef int __attribute__ ((bitwidth(1392))) int1392;
typedef int __attribute__ ((bitwidth(1393))) int1393;
typedef int __attribute__ ((bitwidth(1394))) int1394;
typedef int __attribute__ ((bitwidth(1395))) int1395;
typedef int __attribute__ ((bitwidth(1396))) int1396;
typedef int __attribute__ ((bitwidth(1397))) int1397;
typedef int __attribute__ ((bitwidth(1398))) int1398;
typedef int __attribute__ ((bitwidth(1399))) int1399;
typedef int __attribute__ ((bitwidth(1400))) int1400;
typedef int __attribute__ ((bitwidth(1401))) int1401;
typedef int __attribute__ ((bitwidth(1402))) int1402;
typedef int __attribute__ ((bitwidth(1403))) int1403;
typedef int __attribute__ ((bitwidth(1404))) int1404;
typedef int __attribute__ ((bitwidth(1405))) int1405;
typedef int __attribute__ ((bitwidth(1406))) int1406;
typedef int __attribute__ ((bitwidth(1407))) int1407;
typedef int __attribute__ ((bitwidth(1408))) int1408;
typedef int __attribute__ ((bitwidth(1409))) int1409;
typedef int __attribute__ ((bitwidth(1410))) int1410;
typedef int __attribute__ ((bitwidth(1411))) int1411;
typedef int __attribute__ ((bitwidth(1412))) int1412;
typedef int __attribute__ ((bitwidth(1413))) int1413;
typedef int __attribute__ ((bitwidth(1414))) int1414;
typedef int __attribute__ ((bitwidth(1415))) int1415;
typedef int __attribute__ ((bitwidth(1416))) int1416;
typedef int __attribute__ ((bitwidth(1417))) int1417;
typedef int __attribute__ ((bitwidth(1418))) int1418;
typedef int __attribute__ ((bitwidth(1419))) int1419;
typedef int __attribute__ ((bitwidth(1420))) int1420;
typedef int __attribute__ ((bitwidth(1421))) int1421;
typedef int __attribute__ ((bitwidth(1422))) int1422;
typedef int __attribute__ ((bitwidth(1423))) int1423;
typedef int __attribute__ ((bitwidth(1424))) int1424;
typedef int __attribute__ ((bitwidth(1425))) int1425;
typedef int __attribute__ ((bitwidth(1426))) int1426;
typedef int __attribute__ ((bitwidth(1427))) int1427;
typedef int __attribute__ ((bitwidth(1428))) int1428;
typedef int __attribute__ ((bitwidth(1429))) int1429;
typedef int __attribute__ ((bitwidth(1430))) int1430;
typedef int __attribute__ ((bitwidth(1431))) int1431;
typedef int __attribute__ ((bitwidth(1432))) int1432;
typedef int __attribute__ ((bitwidth(1433))) int1433;
typedef int __attribute__ ((bitwidth(1434))) int1434;
typedef int __attribute__ ((bitwidth(1435))) int1435;
typedef int __attribute__ ((bitwidth(1436))) int1436;
typedef int __attribute__ ((bitwidth(1437))) int1437;
typedef int __attribute__ ((bitwidth(1438))) int1438;
typedef int __attribute__ ((bitwidth(1439))) int1439;
typedef int __attribute__ ((bitwidth(1440))) int1440;
typedef int __attribute__ ((bitwidth(1441))) int1441;
typedef int __attribute__ ((bitwidth(1442))) int1442;
typedef int __attribute__ ((bitwidth(1443))) int1443;
typedef int __attribute__ ((bitwidth(1444))) int1444;
typedef int __attribute__ ((bitwidth(1445))) int1445;
typedef int __attribute__ ((bitwidth(1446))) int1446;
typedef int __attribute__ ((bitwidth(1447))) int1447;
typedef int __attribute__ ((bitwidth(1448))) int1448;
typedef int __attribute__ ((bitwidth(1449))) int1449;
typedef int __attribute__ ((bitwidth(1450))) int1450;
typedef int __attribute__ ((bitwidth(1451))) int1451;
typedef int __attribute__ ((bitwidth(1452))) int1452;
typedef int __attribute__ ((bitwidth(1453))) int1453;
typedef int __attribute__ ((bitwidth(1454))) int1454;
typedef int __attribute__ ((bitwidth(1455))) int1455;
typedef int __attribute__ ((bitwidth(1456))) int1456;
typedef int __attribute__ ((bitwidth(1457))) int1457;
typedef int __attribute__ ((bitwidth(1458))) int1458;
typedef int __attribute__ ((bitwidth(1459))) int1459;
typedef int __attribute__ ((bitwidth(1460))) int1460;
typedef int __attribute__ ((bitwidth(1461))) int1461;
typedef int __attribute__ ((bitwidth(1462))) int1462;
typedef int __attribute__ ((bitwidth(1463))) int1463;
typedef int __attribute__ ((bitwidth(1464))) int1464;
typedef int __attribute__ ((bitwidth(1465))) int1465;
typedef int __attribute__ ((bitwidth(1466))) int1466;
typedef int __attribute__ ((bitwidth(1467))) int1467;
typedef int __attribute__ ((bitwidth(1468))) int1468;
typedef int __attribute__ ((bitwidth(1469))) int1469;
typedef int __attribute__ ((bitwidth(1470))) int1470;
typedef int __attribute__ ((bitwidth(1471))) int1471;
typedef int __attribute__ ((bitwidth(1472))) int1472;
typedef int __attribute__ ((bitwidth(1473))) int1473;
typedef int __attribute__ ((bitwidth(1474))) int1474;
typedef int __attribute__ ((bitwidth(1475))) int1475;
typedef int __attribute__ ((bitwidth(1476))) int1476;
typedef int __attribute__ ((bitwidth(1477))) int1477;
typedef int __attribute__ ((bitwidth(1478))) int1478;
typedef int __attribute__ ((bitwidth(1479))) int1479;
typedef int __attribute__ ((bitwidth(1480))) int1480;
typedef int __attribute__ ((bitwidth(1481))) int1481;
typedef int __attribute__ ((bitwidth(1482))) int1482;
typedef int __attribute__ ((bitwidth(1483))) int1483;
typedef int __attribute__ ((bitwidth(1484))) int1484;
typedef int __attribute__ ((bitwidth(1485))) int1485;
typedef int __attribute__ ((bitwidth(1486))) int1486;
typedef int __attribute__ ((bitwidth(1487))) int1487;
typedef int __attribute__ ((bitwidth(1488))) int1488;
typedef int __attribute__ ((bitwidth(1489))) int1489;
typedef int __attribute__ ((bitwidth(1490))) int1490;
typedef int __attribute__ ((bitwidth(1491))) int1491;
typedef int __attribute__ ((bitwidth(1492))) int1492;
typedef int __attribute__ ((bitwidth(1493))) int1493;
typedef int __attribute__ ((bitwidth(1494))) int1494;
typedef int __attribute__ ((bitwidth(1495))) int1495;
typedef int __attribute__ ((bitwidth(1496))) int1496;
typedef int __attribute__ ((bitwidth(1497))) int1497;
typedef int __attribute__ ((bitwidth(1498))) int1498;
typedef int __attribute__ ((bitwidth(1499))) int1499;
typedef int __attribute__ ((bitwidth(1500))) int1500;
typedef int __attribute__ ((bitwidth(1501))) int1501;
typedef int __attribute__ ((bitwidth(1502))) int1502;
typedef int __attribute__ ((bitwidth(1503))) int1503;
typedef int __attribute__ ((bitwidth(1504))) int1504;
typedef int __attribute__ ((bitwidth(1505))) int1505;
typedef int __attribute__ ((bitwidth(1506))) int1506;
typedef int __attribute__ ((bitwidth(1507))) int1507;
typedef int __attribute__ ((bitwidth(1508))) int1508;
typedef int __attribute__ ((bitwidth(1509))) int1509;
typedef int __attribute__ ((bitwidth(1510))) int1510;
typedef int __attribute__ ((bitwidth(1511))) int1511;
typedef int __attribute__ ((bitwidth(1512))) int1512;
typedef int __attribute__ ((bitwidth(1513))) int1513;
typedef int __attribute__ ((bitwidth(1514))) int1514;
typedef int __attribute__ ((bitwidth(1515))) int1515;
typedef int __attribute__ ((bitwidth(1516))) int1516;
typedef int __attribute__ ((bitwidth(1517))) int1517;
typedef int __attribute__ ((bitwidth(1518))) int1518;
typedef int __attribute__ ((bitwidth(1519))) int1519;
typedef int __attribute__ ((bitwidth(1520))) int1520;
typedef int __attribute__ ((bitwidth(1521))) int1521;
typedef int __attribute__ ((bitwidth(1522))) int1522;
typedef int __attribute__ ((bitwidth(1523))) int1523;
typedef int __attribute__ ((bitwidth(1524))) int1524;
typedef int __attribute__ ((bitwidth(1525))) int1525;
typedef int __attribute__ ((bitwidth(1526))) int1526;
typedef int __attribute__ ((bitwidth(1527))) int1527;
typedef int __attribute__ ((bitwidth(1528))) int1528;
typedef int __attribute__ ((bitwidth(1529))) int1529;
typedef int __attribute__ ((bitwidth(1530))) int1530;
typedef int __attribute__ ((bitwidth(1531))) int1531;
typedef int __attribute__ ((bitwidth(1532))) int1532;
typedef int __attribute__ ((bitwidth(1533))) int1533;
typedef int __attribute__ ((bitwidth(1534))) int1534;
typedef int __attribute__ ((bitwidth(1535))) int1535;
typedef int __attribute__ ((bitwidth(1536))) int1536;
typedef int __attribute__ ((bitwidth(1537))) int1537;
typedef int __attribute__ ((bitwidth(1538))) int1538;
typedef int __attribute__ ((bitwidth(1539))) int1539;
typedef int __attribute__ ((bitwidth(1540))) int1540;
typedef int __attribute__ ((bitwidth(1541))) int1541;
typedef int __attribute__ ((bitwidth(1542))) int1542;
typedef int __attribute__ ((bitwidth(1543))) int1543;
typedef int __attribute__ ((bitwidth(1544))) int1544;
typedef int __attribute__ ((bitwidth(1545))) int1545;
typedef int __attribute__ ((bitwidth(1546))) int1546;
typedef int __attribute__ ((bitwidth(1547))) int1547;
typedef int __attribute__ ((bitwidth(1548))) int1548;
typedef int __attribute__ ((bitwidth(1549))) int1549;
typedef int __attribute__ ((bitwidth(1550))) int1550;
typedef int __attribute__ ((bitwidth(1551))) int1551;
typedef int __attribute__ ((bitwidth(1552))) int1552;
typedef int __attribute__ ((bitwidth(1553))) int1553;
typedef int __attribute__ ((bitwidth(1554))) int1554;
typedef int __attribute__ ((bitwidth(1555))) int1555;
typedef int __attribute__ ((bitwidth(1556))) int1556;
typedef int __attribute__ ((bitwidth(1557))) int1557;
typedef int __attribute__ ((bitwidth(1558))) int1558;
typedef int __attribute__ ((bitwidth(1559))) int1559;
typedef int __attribute__ ((bitwidth(1560))) int1560;
typedef int __attribute__ ((bitwidth(1561))) int1561;
typedef int __attribute__ ((bitwidth(1562))) int1562;
typedef int __attribute__ ((bitwidth(1563))) int1563;
typedef int __attribute__ ((bitwidth(1564))) int1564;
typedef int __attribute__ ((bitwidth(1565))) int1565;
typedef int __attribute__ ((bitwidth(1566))) int1566;
typedef int __attribute__ ((bitwidth(1567))) int1567;
typedef int __attribute__ ((bitwidth(1568))) int1568;
typedef int __attribute__ ((bitwidth(1569))) int1569;
typedef int __attribute__ ((bitwidth(1570))) int1570;
typedef int __attribute__ ((bitwidth(1571))) int1571;
typedef int __attribute__ ((bitwidth(1572))) int1572;
typedef int __attribute__ ((bitwidth(1573))) int1573;
typedef int __attribute__ ((bitwidth(1574))) int1574;
typedef int __attribute__ ((bitwidth(1575))) int1575;
typedef int __attribute__ ((bitwidth(1576))) int1576;
typedef int __attribute__ ((bitwidth(1577))) int1577;
typedef int __attribute__ ((bitwidth(1578))) int1578;
typedef int __attribute__ ((bitwidth(1579))) int1579;
typedef int __attribute__ ((bitwidth(1580))) int1580;
typedef int __attribute__ ((bitwidth(1581))) int1581;
typedef int __attribute__ ((bitwidth(1582))) int1582;
typedef int __attribute__ ((bitwidth(1583))) int1583;
typedef int __attribute__ ((bitwidth(1584))) int1584;
typedef int __attribute__ ((bitwidth(1585))) int1585;
typedef int __attribute__ ((bitwidth(1586))) int1586;
typedef int __attribute__ ((bitwidth(1587))) int1587;
typedef int __attribute__ ((bitwidth(1588))) int1588;
typedef int __attribute__ ((bitwidth(1589))) int1589;
typedef int __attribute__ ((bitwidth(1590))) int1590;
typedef int __attribute__ ((bitwidth(1591))) int1591;
typedef int __attribute__ ((bitwidth(1592))) int1592;
typedef int __attribute__ ((bitwidth(1593))) int1593;
typedef int __attribute__ ((bitwidth(1594))) int1594;
typedef int __attribute__ ((bitwidth(1595))) int1595;
typedef int __attribute__ ((bitwidth(1596))) int1596;
typedef int __attribute__ ((bitwidth(1597))) int1597;
typedef int __attribute__ ((bitwidth(1598))) int1598;
typedef int __attribute__ ((bitwidth(1599))) int1599;
typedef int __attribute__ ((bitwidth(1600))) int1600;
typedef int __attribute__ ((bitwidth(1601))) int1601;
typedef int __attribute__ ((bitwidth(1602))) int1602;
typedef int __attribute__ ((bitwidth(1603))) int1603;
typedef int __attribute__ ((bitwidth(1604))) int1604;
typedef int __attribute__ ((bitwidth(1605))) int1605;
typedef int __attribute__ ((bitwidth(1606))) int1606;
typedef int __attribute__ ((bitwidth(1607))) int1607;
typedef int __attribute__ ((bitwidth(1608))) int1608;
typedef int __attribute__ ((bitwidth(1609))) int1609;
typedef int __attribute__ ((bitwidth(1610))) int1610;
typedef int __attribute__ ((bitwidth(1611))) int1611;
typedef int __attribute__ ((bitwidth(1612))) int1612;
typedef int __attribute__ ((bitwidth(1613))) int1613;
typedef int __attribute__ ((bitwidth(1614))) int1614;
typedef int __attribute__ ((bitwidth(1615))) int1615;
typedef int __attribute__ ((bitwidth(1616))) int1616;
typedef int __attribute__ ((bitwidth(1617))) int1617;
typedef int __attribute__ ((bitwidth(1618))) int1618;
typedef int __attribute__ ((bitwidth(1619))) int1619;
typedef int __attribute__ ((bitwidth(1620))) int1620;
typedef int __attribute__ ((bitwidth(1621))) int1621;
typedef int __attribute__ ((bitwidth(1622))) int1622;
typedef int __attribute__ ((bitwidth(1623))) int1623;
typedef int __attribute__ ((bitwidth(1624))) int1624;
typedef int __attribute__ ((bitwidth(1625))) int1625;
typedef int __attribute__ ((bitwidth(1626))) int1626;
typedef int __attribute__ ((bitwidth(1627))) int1627;
typedef int __attribute__ ((bitwidth(1628))) int1628;
typedef int __attribute__ ((bitwidth(1629))) int1629;
typedef int __attribute__ ((bitwidth(1630))) int1630;
typedef int __attribute__ ((bitwidth(1631))) int1631;
typedef int __attribute__ ((bitwidth(1632))) int1632;
typedef int __attribute__ ((bitwidth(1633))) int1633;
typedef int __attribute__ ((bitwidth(1634))) int1634;
typedef int __attribute__ ((bitwidth(1635))) int1635;
typedef int __attribute__ ((bitwidth(1636))) int1636;
typedef int __attribute__ ((bitwidth(1637))) int1637;
typedef int __attribute__ ((bitwidth(1638))) int1638;
typedef int __attribute__ ((bitwidth(1639))) int1639;
typedef int __attribute__ ((bitwidth(1640))) int1640;
typedef int __attribute__ ((bitwidth(1641))) int1641;
typedef int __attribute__ ((bitwidth(1642))) int1642;
typedef int __attribute__ ((bitwidth(1643))) int1643;
typedef int __attribute__ ((bitwidth(1644))) int1644;
typedef int __attribute__ ((bitwidth(1645))) int1645;
typedef int __attribute__ ((bitwidth(1646))) int1646;
typedef int __attribute__ ((bitwidth(1647))) int1647;
typedef int __attribute__ ((bitwidth(1648))) int1648;
typedef int __attribute__ ((bitwidth(1649))) int1649;
typedef int __attribute__ ((bitwidth(1650))) int1650;
typedef int __attribute__ ((bitwidth(1651))) int1651;
typedef int __attribute__ ((bitwidth(1652))) int1652;
typedef int __attribute__ ((bitwidth(1653))) int1653;
typedef int __attribute__ ((bitwidth(1654))) int1654;
typedef int __attribute__ ((bitwidth(1655))) int1655;
typedef int __attribute__ ((bitwidth(1656))) int1656;
typedef int __attribute__ ((bitwidth(1657))) int1657;
typedef int __attribute__ ((bitwidth(1658))) int1658;
typedef int __attribute__ ((bitwidth(1659))) int1659;
typedef int __attribute__ ((bitwidth(1660))) int1660;
typedef int __attribute__ ((bitwidth(1661))) int1661;
typedef int __attribute__ ((bitwidth(1662))) int1662;
typedef int __attribute__ ((bitwidth(1663))) int1663;
typedef int __attribute__ ((bitwidth(1664))) int1664;
typedef int __attribute__ ((bitwidth(1665))) int1665;
typedef int __attribute__ ((bitwidth(1666))) int1666;
typedef int __attribute__ ((bitwidth(1667))) int1667;
typedef int __attribute__ ((bitwidth(1668))) int1668;
typedef int __attribute__ ((bitwidth(1669))) int1669;
typedef int __attribute__ ((bitwidth(1670))) int1670;
typedef int __attribute__ ((bitwidth(1671))) int1671;
typedef int __attribute__ ((bitwidth(1672))) int1672;
typedef int __attribute__ ((bitwidth(1673))) int1673;
typedef int __attribute__ ((bitwidth(1674))) int1674;
typedef int __attribute__ ((bitwidth(1675))) int1675;
typedef int __attribute__ ((bitwidth(1676))) int1676;
typedef int __attribute__ ((bitwidth(1677))) int1677;
typedef int __attribute__ ((bitwidth(1678))) int1678;
typedef int __attribute__ ((bitwidth(1679))) int1679;
typedef int __attribute__ ((bitwidth(1680))) int1680;
typedef int __attribute__ ((bitwidth(1681))) int1681;
typedef int __attribute__ ((bitwidth(1682))) int1682;
typedef int __attribute__ ((bitwidth(1683))) int1683;
typedef int __attribute__ ((bitwidth(1684))) int1684;
typedef int __attribute__ ((bitwidth(1685))) int1685;
typedef int __attribute__ ((bitwidth(1686))) int1686;
typedef int __attribute__ ((bitwidth(1687))) int1687;
typedef int __attribute__ ((bitwidth(1688))) int1688;
typedef int __attribute__ ((bitwidth(1689))) int1689;
typedef int __attribute__ ((bitwidth(1690))) int1690;
typedef int __attribute__ ((bitwidth(1691))) int1691;
typedef int __attribute__ ((bitwidth(1692))) int1692;
typedef int __attribute__ ((bitwidth(1693))) int1693;
typedef int __attribute__ ((bitwidth(1694))) int1694;
typedef int __attribute__ ((bitwidth(1695))) int1695;
typedef int __attribute__ ((bitwidth(1696))) int1696;
typedef int __attribute__ ((bitwidth(1697))) int1697;
typedef int __attribute__ ((bitwidth(1698))) int1698;
typedef int __attribute__ ((bitwidth(1699))) int1699;
typedef int __attribute__ ((bitwidth(1700))) int1700;
typedef int __attribute__ ((bitwidth(1701))) int1701;
typedef int __attribute__ ((bitwidth(1702))) int1702;
typedef int __attribute__ ((bitwidth(1703))) int1703;
typedef int __attribute__ ((bitwidth(1704))) int1704;
typedef int __attribute__ ((bitwidth(1705))) int1705;
typedef int __attribute__ ((bitwidth(1706))) int1706;
typedef int __attribute__ ((bitwidth(1707))) int1707;
typedef int __attribute__ ((bitwidth(1708))) int1708;
typedef int __attribute__ ((bitwidth(1709))) int1709;
typedef int __attribute__ ((bitwidth(1710))) int1710;
typedef int __attribute__ ((bitwidth(1711))) int1711;
typedef int __attribute__ ((bitwidth(1712))) int1712;
typedef int __attribute__ ((bitwidth(1713))) int1713;
typedef int __attribute__ ((bitwidth(1714))) int1714;
typedef int __attribute__ ((bitwidth(1715))) int1715;
typedef int __attribute__ ((bitwidth(1716))) int1716;
typedef int __attribute__ ((bitwidth(1717))) int1717;
typedef int __attribute__ ((bitwidth(1718))) int1718;
typedef int __attribute__ ((bitwidth(1719))) int1719;
typedef int __attribute__ ((bitwidth(1720))) int1720;
typedef int __attribute__ ((bitwidth(1721))) int1721;
typedef int __attribute__ ((bitwidth(1722))) int1722;
typedef int __attribute__ ((bitwidth(1723))) int1723;
typedef int __attribute__ ((bitwidth(1724))) int1724;
typedef int __attribute__ ((bitwidth(1725))) int1725;
typedef int __attribute__ ((bitwidth(1726))) int1726;
typedef int __attribute__ ((bitwidth(1727))) int1727;
typedef int __attribute__ ((bitwidth(1728))) int1728;
typedef int __attribute__ ((bitwidth(1729))) int1729;
typedef int __attribute__ ((bitwidth(1730))) int1730;
typedef int __attribute__ ((bitwidth(1731))) int1731;
typedef int __attribute__ ((bitwidth(1732))) int1732;
typedef int __attribute__ ((bitwidth(1733))) int1733;
typedef int __attribute__ ((bitwidth(1734))) int1734;
typedef int __attribute__ ((bitwidth(1735))) int1735;
typedef int __attribute__ ((bitwidth(1736))) int1736;
typedef int __attribute__ ((bitwidth(1737))) int1737;
typedef int __attribute__ ((bitwidth(1738))) int1738;
typedef int __attribute__ ((bitwidth(1739))) int1739;
typedef int __attribute__ ((bitwidth(1740))) int1740;
typedef int __attribute__ ((bitwidth(1741))) int1741;
typedef int __attribute__ ((bitwidth(1742))) int1742;
typedef int __attribute__ ((bitwidth(1743))) int1743;
typedef int __attribute__ ((bitwidth(1744))) int1744;
typedef int __attribute__ ((bitwidth(1745))) int1745;
typedef int __attribute__ ((bitwidth(1746))) int1746;
typedef int __attribute__ ((bitwidth(1747))) int1747;
typedef int __attribute__ ((bitwidth(1748))) int1748;
typedef int __attribute__ ((bitwidth(1749))) int1749;
typedef int __attribute__ ((bitwidth(1750))) int1750;
typedef int __attribute__ ((bitwidth(1751))) int1751;
typedef int __attribute__ ((bitwidth(1752))) int1752;
typedef int __attribute__ ((bitwidth(1753))) int1753;
typedef int __attribute__ ((bitwidth(1754))) int1754;
typedef int __attribute__ ((bitwidth(1755))) int1755;
typedef int __attribute__ ((bitwidth(1756))) int1756;
typedef int __attribute__ ((bitwidth(1757))) int1757;
typedef int __attribute__ ((bitwidth(1758))) int1758;
typedef int __attribute__ ((bitwidth(1759))) int1759;
typedef int __attribute__ ((bitwidth(1760))) int1760;
typedef int __attribute__ ((bitwidth(1761))) int1761;
typedef int __attribute__ ((bitwidth(1762))) int1762;
typedef int __attribute__ ((bitwidth(1763))) int1763;
typedef int __attribute__ ((bitwidth(1764))) int1764;
typedef int __attribute__ ((bitwidth(1765))) int1765;
typedef int __attribute__ ((bitwidth(1766))) int1766;
typedef int __attribute__ ((bitwidth(1767))) int1767;
typedef int __attribute__ ((bitwidth(1768))) int1768;
typedef int __attribute__ ((bitwidth(1769))) int1769;
typedef int __attribute__ ((bitwidth(1770))) int1770;
typedef int __attribute__ ((bitwidth(1771))) int1771;
typedef int __attribute__ ((bitwidth(1772))) int1772;
typedef int __attribute__ ((bitwidth(1773))) int1773;
typedef int __attribute__ ((bitwidth(1774))) int1774;
typedef int __attribute__ ((bitwidth(1775))) int1775;
typedef int __attribute__ ((bitwidth(1776))) int1776;
typedef int __attribute__ ((bitwidth(1777))) int1777;
typedef int __attribute__ ((bitwidth(1778))) int1778;
typedef int __attribute__ ((bitwidth(1779))) int1779;
typedef int __attribute__ ((bitwidth(1780))) int1780;
typedef int __attribute__ ((bitwidth(1781))) int1781;
typedef int __attribute__ ((bitwidth(1782))) int1782;
typedef int __attribute__ ((bitwidth(1783))) int1783;
typedef int __attribute__ ((bitwidth(1784))) int1784;
typedef int __attribute__ ((bitwidth(1785))) int1785;
typedef int __attribute__ ((bitwidth(1786))) int1786;
typedef int __attribute__ ((bitwidth(1787))) int1787;
typedef int __attribute__ ((bitwidth(1788))) int1788;
typedef int __attribute__ ((bitwidth(1789))) int1789;
typedef int __attribute__ ((bitwidth(1790))) int1790;
typedef int __attribute__ ((bitwidth(1791))) int1791;
typedef int __attribute__ ((bitwidth(1792))) int1792;
typedef int __attribute__ ((bitwidth(1793))) int1793;
typedef int __attribute__ ((bitwidth(1794))) int1794;
typedef int __attribute__ ((bitwidth(1795))) int1795;
typedef int __attribute__ ((bitwidth(1796))) int1796;
typedef int __attribute__ ((bitwidth(1797))) int1797;
typedef int __attribute__ ((bitwidth(1798))) int1798;
typedef int __attribute__ ((bitwidth(1799))) int1799;
typedef int __attribute__ ((bitwidth(1800))) int1800;
typedef int __attribute__ ((bitwidth(1801))) int1801;
typedef int __attribute__ ((bitwidth(1802))) int1802;
typedef int __attribute__ ((bitwidth(1803))) int1803;
typedef int __attribute__ ((bitwidth(1804))) int1804;
typedef int __attribute__ ((bitwidth(1805))) int1805;
typedef int __attribute__ ((bitwidth(1806))) int1806;
typedef int __attribute__ ((bitwidth(1807))) int1807;
typedef int __attribute__ ((bitwidth(1808))) int1808;
typedef int __attribute__ ((bitwidth(1809))) int1809;
typedef int __attribute__ ((bitwidth(1810))) int1810;
typedef int __attribute__ ((bitwidth(1811))) int1811;
typedef int __attribute__ ((bitwidth(1812))) int1812;
typedef int __attribute__ ((bitwidth(1813))) int1813;
typedef int __attribute__ ((bitwidth(1814))) int1814;
typedef int __attribute__ ((bitwidth(1815))) int1815;
typedef int __attribute__ ((bitwidth(1816))) int1816;
typedef int __attribute__ ((bitwidth(1817))) int1817;
typedef int __attribute__ ((bitwidth(1818))) int1818;
typedef int __attribute__ ((bitwidth(1819))) int1819;
typedef int __attribute__ ((bitwidth(1820))) int1820;
typedef int __attribute__ ((bitwidth(1821))) int1821;
typedef int __attribute__ ((bitwidth(1822))) int1822;
typedef int __attribute__ ((bitwidth(1823))) int1823;
typedef int __attribute__ ((bitwidth(1824))) int1824;
typedef int __attribute__ ((bitwidth(1825))) int1825;
typedef int __attribute__ ((bitwidth(1826))) int1826;
typedef int __attribute__ ((bitwidth(1827))) int1827;
typedef int __attribute__ ((bitwidth(1828))) int1828;
typedef int __attribute__ ((bitwidth(1829))) int1829;
typedef int __attribute__ ((bitwidth(1830))) int1830;
typedef int __attribute__ ((bitwidth(1831))) int1831;
typedef int __attribute__ ((bitwidth(1832))) int1832;
typedef int __attribute__ ((bitwidth(1833))) int1833;
typedef int __attribute__ ((bitwidth(1834))) int1834;
typedef int __attribute__ ((bitwidth(1835))) int1835;
typedef int __attribute__ ((bitwidth(1836))) int1836;
typedef int __attribute__ ((bitwidth(1837))) int1837;
typedef int __attribute__ ((bitwidth(1838))) int1838;
typedef int __attribute__ ((bitwidth(1839))) int1839;
typedef int __attribute__ ((bitwidth(1840))) int1840;
typedef int __attribute__ ((bitwidth(1841))) int1841;
typedef int __attribute__ ((bitwidth(1842))) int1842;
typedef int __attribute__ ((bitwidth(1843))) int1843;
typedef int __attribute__ ((bitwidth(1844))) int1844;
typedef int __attribute__ ((bitwidth(1845))) int1845;
typedef int __attribute__ ((bitwidth(1846))) int1846;
typedef int __attribute__ ((bitwidth(1847))) int1847;
typedef int __attribute__ ((bitwidth(1848))) int1848;
typedef int __attribute__ ((bitwidth(1849))) int1849;
typedef int __attribute__ ((bitwidth(1850))) int1850;
typedef int __attribute__ ((bitwidth(1851))) int1851;
typedef int __attribute__ ((bitwidth(1852))) int1852;
typedef int __attribute__ ((bitwidth(1853))) int1853;
typedef int __attribute__ ((bitwidth(1854))) int1854;
typedef int __attribute__ ((bitwidth(1855))) int1855;
typedef int __attribute__ ((bitwidth(1856))) int1856;
typedef int __attribute__ ((bitwidth(1857))) int1857;
typedef int __attribute__ ((bitwidth(1858))) int1858;
typedef int __attribute__ ((bitwidth(1859))) int1859;
typedef int __attribute__ ((bitwidth(1860))) int1860;
typedef int __attribute__ ((bitwidth(1861))) int1861;
typedef int __attribute__ ((bitwidth(1862))) int1862;
typedef int __attribute__ ((bitwidth(1863))) int1863;
typedef int __attribute__ ((bitwidth(1864))) int1864;
typedef int __attribute__ ((bitwidth(1865))) int1865;
typedef int __attribute__ ((bitwidth(1866))) int1866;
typedef int __attribute__ ((bitwidth(1867))) int1867;
typedef int __attribute__ ((bitwidth(1868))) int1868;
typedef int __attribute__ ((bitwidth(1869))) int1869;
typedef int __attribute__ ((bitwidth(1870))) int1870;
typedef int __attribute__ ((bitwidth(1871))) int1871;
typedef int __attribute__ ((bitwidth(1872))) int1872;
typedef int __attribute__ ((bitwidth(1873))) int1873;
typedef int __attribute__ ((bitwidth(1874))) int1874;
typedef int __attribute__ ((bitwidth(1875))) int1875;
typedef int __attribute__ ((bitwidth(1876))) int1876;
typedef int __attribute__ ((bitwidth(1877))) int1877;
typedef int __attribute__ ((bitwidth(1878))) int1878;
typedef int __attribute__ ((bitwidth(1879))) int1879;
typedef int __attribute__ ((bitwidth(1880))) int1880;
typedef int __attribute__ ((bitwidth(1881))) int1881;
typedef int __attribute__ ((bitwidth(1882))) int1882;
typedef int __attribute__ ((bitwidth(1883))) int1883;
typedef int __attribute__ ((bitwidth(1884))) int1884;
typedef int __attribute__ ((bitwidth(1885))) int1885;
typedef int __attribute__ ((bitwidth(1886))) int1886;
typedef int __attribute__ ((bitwidth(1887))) int1887;
typedef int __attribute__ ((bitwidth(1888))) int1888;
typedef int __attribute__ ((bitwidth(1889))) int1889;
typedef int __attribute__ ((bitwidth(1890))) int1890;
typedef int __attribute__ ((bitwidth(1891))) int1891;
typedef int __attribute__ ((bitwidth(1892))) int1892;
typedef int __attribute__ ((bitwidth(1893))) int1893;
typedef int __attribute__ ((bitwidth(1894))) int1894;
typedef int __attribute__ ((bitwidth(1895))) int1895;
typedef int __attribute__ ((bitwidth(1896))) int1896;
typedef int __attribute__ ((bitwidth(1897))) int1897;
typedef int __attribute__ ((bitwidth(1898))) int1898;
typedef int __attribute__ ((bitwidth(1899))) int1899;
typedef int __attribute__ ((bitwidth(1900))) int1900;
typedef int __attribute__ ((bitwidth(1901))) int1901;
typedef int __attribute__ ((bitwidth(1902))) int1902;
typedef int __attribute__ ((bitwidth(1903))) int1903;
typedef int __attribute__ ((bitwidth(1904))) int1904;
typedef int __attribute__ ((bitwidth(1905))) int1905;
typedef int __attribute__ ((bitwidth(1906))) int1906;
typedef int __attribute__ ((bitwidth(1907))) int1907;
typedef int __attribute__ ((bitwidth(1908))) int1908;
typedef int __attribute__ ((bitwidth(1909))) int1909;
typedef int __attribute__ ((bitwidth(1910))) int1910;
typedef int __attribute__ ((bitwidth(1911))) int1911;
typedef int __attribute__ ((bitwidth(1912))) int1912;
typedef int __attribute__ ((bitwidth(1913))) int1913;
typedef int __attribute__ ((bitwidth(1914))) int1914;
typedef int __attribute__ ((bitwidth(1915))) int1915;
typedef int __attribute__ ((bitwidth(1916))) int1916;
typedef int __attribute__ ((bitwidth(1917))) int1917;
typedef int __attribute__ ((bitwidth(1918))) int1918;
typedef int __attribute__ ((bitwidth(1919))) int1919;
typedef int __attribute__ ((bitwidth(1920))) int1920;
typedef int __attribute__ ((bitwidth(1921))) int1921;
typedef int __attribute__ ((bitwidth(1922))) int1922;
typedef int __attribute__ ((bitwidth(1923))) int1923;
typedef int __attribute__ ((bitwidth(1924))) int1924;
typedef int __attribute__ ((bitwidth(1925))) int1925;
typedef int __attribute__ ((bitwidth(1926))) int1926;
typedef int __attribute__ ((bitwidth(1927))) int1927;
typedef int __attribute__ ((bitwidth(1928))) int1928;
typedef int __attribute__ ((bitwidth(1929))) int1929;
typedef int __attribute__ ((bitwidth(1930))) int1930;
typedef int __attribute__ ((bitwidth(1931))) int1931;
typedef int __attribute__ ((bitwidth(1932))) int1932;
typedef int __attribute__ ((bitwidth(1933))) int1933;
typedef int __attribute__ ((bitwidth(1934))) int1934;
typedef int __attribute__ ((bitwidth(1935))) int1935;
typedef int __attribute__ ((bitwidth(1936))) int1936;
typedef int __attribute__ ((bitwidth(1937))) int1937;
typedef int __attribute__ ((bitwidth(1938))) int1938;
typedef int __attribute__ ((bitwidth(1939))) int1939;
typedef int __attribute__ ((bitwidth(1940))) int1940;
typedef int __attribute__ ((bitwidth(1941))) int1941;
typedef int __attribute__ ((bitwidth(1942))) int1942;
typedef int __attribute__ ((bitwidth(1943))) int1943;
typedef int __attribute__ ((bitwidth(1944))) int1944;
typedef int __attribute__ ((bitwidth(1945))) int1945;
typedef int __attribute__ ((bitwidth(1946))) int1946;
typedef int __attribute__ ((bitwidth(1947))) int1947;
typedef int __attribute__ ((bitwidth(1948))) int1948;
typedef int __attribute__ ((bitwidth(1949))) int1949;
typedef int __attribute__ ((bitwidth(1950))) int1950;
typedef int __attribute__ ((bitwidth(1951))) int1951;
typedef int __attribute__ ((bitwidth(1952))) int1952;
typedef int __attribute__ ((bitwidth(1953))) int1953;
typedef int __attribute__ ((bitwidth(1954))) int1954;
typedef int __attribute__ ((bitwidth(1955))) int1955;
typedef int __attribute__ ((bitwidth(1956))) int1956;
typedef int __attribute__ ((bitwidth(1957))) int1957;
typedef int __attribute__ ((bitwidth(1958))) int1958;
typedef int __attribute__ ((bitwidth(1959))) int1959;
typedef int __attribute__ ((bitwidth(1960))) int1960;
typedef int __attribute__ ((bitwidth(1961))) int1961;
typedef int __attribute__ ((bitwidth(1962))) int1962;
typedef int __attribute__ ((bitwidth(1963))) int1963;
typedef int __attribute__ ((bitwidth(1964))) int1964;
typedef int __attribute__ ((bitwidth(1965))) int1965;
typedef int __attribute__ ((bitwidth(1966))) int1966;
typedef int __attribute__ ((bitwidth(1967))) int1967;
typedef int __attribute__ ((bitwidth(1968))) int1968;
typedef int __attribute__ ((bitwidth(1969))) int1969;
typedef int __attribute__ ((bitwidth(1970))) int1970;
typedef int __attribute__ ((bitwidth(1971))) int1971;
typedef int __attribute__ ((bitwidth(1972))) int1972;
typedef int __attribute__ ((bitwidth(1973))) int1973;
typedef int __attribute__ ((bitwidth(1974))) int1974;
typedef int __attribute__ ((bitwidth(1975))) int1975;
typedef int __attribute__ ((bitwidth(1976))) int1976;
typedef int __attribute__ ((bitwidth(1977))) int1977;
typedef int __attribute__ ((bitwidth(1978))) int1978;
typedef int __attribute__ ((bitwidth(1979))) int1979;
typedef int __attribute__ ((bitwidth(1980))) int1980;
typedef int __attribute__ ((bitwidth(1981))) int1981;
typedef int __attribute__ ((bitwidth(1982))) int1982;
typedef int __attribute__ ((bitwidth(1983))) int1983;
typedef int __attribute__ ((bitwidth(1984))) int1984;
typedef int __attribute__ ((bitwidth(1985))) int1985;
typedef int __attribute__ ((bitwidth(1986))) int1986;
typedef int __attribute__ ((bitwidth(1987))) int1987;
typedef int __attribute__ ((bitwidth(1988))) int1988;
typedef int __attribute__ ((bitwidth(1989))) int1989;
typedef int __attribute__ ((bitwidth(1990))) int1990;
typedef int __attribute__ ((bitwidth(1991))) int1991;
typedef int __attribute__ ((bitwidth(1992))) int1992;
typedef int __attribute__ ((bitwidth(1993))) int1993;
typedef int __attribute__ ((bitwidth(1994))) int1994;
typedef int __attribute__ ((bitwidth(1995))) int1995;
typedef int __attribute__ ((bitwidth(1996))) int1996;
typedef int __attribute__ ((bitwidth(1997))) int1997;
typedef int __attribute__ ((bitwidth(1998))) int1998;
typedef int __attribute__ ((bitwidth(1999))) int1999;
typedef int __attribute__ ((bitwidth(2000))) int2000;
typedef int __attribute__ ((bitwidth(2001))) int2001;
typedef int __attribute__ ((bitwidth(2002))) int2002;
typedef int __attribute__ ((bitwidth(2003))) int2003;
typedef int __attribute__ ((bitwidth(2004))) int2004;
typedef int __attribute__ ((bitwidth(2005))) int2005;
typedef int __attribute__ ((bitwidth(2006))) int2006;
typedef int __attribute__ ((bitwidth(2007))) int2007;
typedef int __attribute__ ((bitwidth(2008))) int2008;
typedef int __attribute__ ((bitwidth(2009))) int2009;
typedef int __attribute__ ((bitwidth(2010))) int2010;
typedef int __attribute__ ((bitwidth(2011))) int2011;
typedef int __attribute__ ((bitwidth(2012))) int2012;
typedef int __attribute__ ((bitwidth(2013))) int2013;
typedef int __attribute__ ((bitwidth(2014))) int2014;
typedef int __attribute__ ((bitwidth(2015))) int2015;
typedef int __attribute__ ((bitwidth(2016))) int2016;
typedef int __attribute__ ((bitwidth(2017))) int2017;
typedef int __attribute__ ((bitwidth(2018))) int2018;
typedef int __attribute__ ((bitwidth(2019))) int2019;
typedef int __attribute__ ((bitwidth(2020))) int2020;
typedef int __attribute__ ((bitwidth(2021))) int2021;
typedef int __attribute__ ((bitwidth(2022))) int2022;
typedef int __attribute__ ((bitwidth(2023))) int2023;
typedef int __attribute__ ((bitwidth(2024))) int2024;
typedef int __attribute__ ((bitwidth(2025))) int2025;
typedef int __attribute__ ((bitwidth(2026))) int2026;
typedef int __attribute__ ((bitwidth(2027))) int2027;
typedef int __attribute__ ((bitwidth(2028))) int2028;
typedef int __attribute__ ((bitwidth(2029))) int2029;
typedef int __attribute__ ((bitwidth(2030))) int2030;
typedef int __attribute__ ((bitwidth(2031))) int2031;
typedef int __attribute__ ((bitwidth(2032))) int2032;
typedef int __attribute__ ((bitwidth(2033))) int2033;
typedef int __attribute__ ((bitwidth(2034))) int2034;
typedef int __attribute__ ((bitwidth(2035))) int2035;
typedef int __attribute__ ((bitwidth(2036))) int2036;
typedef int __attribute__ ((bitwidth(2037))) int2037;
typedef int __attribute__ ((bitwidth(2038))) int2038;
typedef int __attribute__ ((bitwidth(2039))) int2039;
typedef int __attribute__ ((bitwidth(2040))) int2040;
typedef int __attribute__ ((bitwidth(2041))) int2041;
typedef int __attribute__ ((bitwidth(2042))) int2042;
typedef int __attribute__ ((bitwidth(2043))) int2043;
typedef int __attribute__ ((bitwidth(2044))) int2044;
typedef int __attribute__ ((bitwidth(2045))) int2045;
typedef int __attribute__ ((bitwidth(2046))) int2046;
typedef int __attribute__ ((bitwidth(2047))) int2047;
typedef int __attribute__ ((bitwidth(2048))) int2048;
# 99 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h" 2
# 108 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h"
# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.def" 1


typedef unsigned int __attribute__ ((bitwidth(1))) uint1;
typedef unsigned int __attribute__ ((bitwidth(2))) uint2;
typedef unsigned int __attribute__ ((bitwidth(3))) uint3;
typedef unsigned int __attribute__ ((bitwidth(4))) uint4;
typedef unsigned int __attribute__ ((bitwidth(5))) uint5;
typedef unsigned int __attribute__ ((bitwidth(6))) uint6;
typedef unsigned int __attribute__ ((bitwidth(7))) uint7;
typedef unsigned int __attribute__ ((bitwidth(8))) uint8;
typedef unsigned int __attribute__ ((bitwidth(9))) uint9;
typedef unsigned int __attribute__ ((bitwidth(10))) uint10;
typedef unsigned int __attribute__ ((bitwidth(11))) uint11;
typedef unsigned int __attribute__ ((bitwidth(12))) uint12;
typedef unsigned int __attribute__ ((bitwidth(13))) uint13;
typedef unsigned int __attribute__ ((bitwidth(14))) uint14;
typedef unsigned int __attribute__ ((bitwidth(15))) uint15;
typedef unsigned int __attribute__ ((bitwidth(16))) uint16;
typedef unsigned int __attribute__ ((bitwidth(17))) uint17;
typedef unsigned int __attribute__ ((bitwidth(18))) uint18;
typedef unsigned int __attribute__ ((bitwidth(19))) uint19;
typedef unsigned int __attribute__ ((bitwidth(20))) uint20;
typedef unsigned int __attribute__ ((bitwidth(21))) uint21;
typedef unsigned int __attribute__ ((bitwidth(22))) uint22;
typedef unsigned int __attribute__ ((bitwidth(23))) uint23;
typedef unsigned int __attribute__ ((bitwidth(24))) uint24;
typedef unsigned int __attribute__ ((bitwidth(25))) uint25;
typedef unsigned int __attribute__ ((bitwidth(26))) uint26;
typedef unsigned int __attribute__ ((bitwidth(27))) uint27;
typedef unsigned int __attribute__ ((bitwidth(28))) uint28;
typedef unsigned int __attribute__ ((bitwidth(29))) uint29;
typedef unsigned int __attribute__ ((bitwidth(30))) uint30;
typedef unsigned int __attribute__ ((bitwidth(31))) uint31;
typedef unsigned int __attribute__ ((bitwidth(32))) uint32;
typedef unsigned int __attribute__ ((bitwidth(33))) uint33;
typedef unsigned int __attribute__ ((bitwidth(34))) uint34;
typedef unsigned int __attribute__ ((bitwidth(35))) uint35;
typedef unsigned int __attribute__ ((bitwidth(36))) uint36;
typedef unsigned int __attribute__ ((bitwidth(37))) uint37;
typedef unsigned int __attribute__ ((bitwidth(38))) uint38;
typedef unsigned int __attribute__ ((bitwidth(39))) uint39;
typedef unsigned int __attribute__ ((bitwidth(40))) uint40;
typedef unsigned int __attribute__ ((bitwidth(41))) uint41;
typedef unsigned int __attribute__ ((bitwidth(42))) uint42;
typedef unsigned int __attribute__ ((bitwidth(43))) uint43;
typedef unsigned int __attribute__ ((bitwidth(44))) uint44;
typedef unsigned int __attribute__ ((bitwidth(45))) uint45;
typedef unsigned int __attribute__ ((bitwidth(46))) uint46;
typedef unsigned int __attribute__ ((bitwidth(47))) uint47;
typedef unsigned int __attribute__ ((bitwidth(48))) uint48;
typedef unsigned int __attribute__ ((bitwidth(49))) uint49;
typedef unsigned int __attribute__ ((bitwidth(50))) uint50;
typedef unsigned int __attribute__ ((bitwidth(51))) uint51;
typedef unsigned int __attribute__ ((bitwidth(52))) uint52;
typedef unsigned int __attribute__ ((bitwidth(53))) uint53;
typedef unsigned int __attribute__ ((bitwidth(54))) uint54;
typedef unsigned int __attribute__ ((bitwidth(55))) uint55;
typedef unsigned int __attribute__ ((bitwidth(56))) uint56;
typedef unsigned int __attribute__ ((bitwidth(57))) uint57;
typedef unsigned int __attribute__ ((bitwidth(58))) uint58;
typedef unsigned int __attribute__ ((bitwidth(59))) uint59;
typedef unsigned int __attribute__ ((bitwidth(60))) uint60;
typedef unsigned int __attribute__ ((bitwidth(61))) uint61;
typedef unsigned int __attribute__ ((bitwidth(62))) uint62;
typedef unsigned int __attribute__ ((bitwidth(63))) uint63;







typedef unsigned int __attribute__ ((bitwidth(65))) uint65;
typedef unsigned int __attribute__ ((bitwidth(66))) uint66;
typedef unsigned int __attribute__ ((bitwidth(67))) uint67;
typedef unsigned int __attribute__ ((bitwidth(68))) uint68;
typedef unsigned int __attribute__ ((bitwidth(69))) uint69;
typedef unsigned int __attribute__ ((bitwidth(70))) uint70;
typedef unsigned int __attribute__ ((bitwidth(71))) uint71;
typedef unsigned int __attribute__ ((bitwidth(72))) uint72;
typedef unsigned int __attribute__ ((bitwidth(73))) uint73;
typedef unsigned int __attribute__ ((bitwidth(74))) uint74;
typedef unsigned int __attribute__ ((bitwidth(75))) uint75;
typedef unsigned int __attribute__ ((bitwidth(76))) uint76;
typedef unsigned int __attribute__ ((bitwidth(77))) uint77;
typedef unsigned int __attribute__ ((bitwidth(78))) uint78;
typedef unsigned int __attribute__ ((bitwidth(79))) uint79;
typedef unsigned int __attribute__ ((bitwidth(80))) uint80;
typedef unsigned int __attribute__ ((bitwidth(81))) uint81;
typedef unsigned int __attribute__ ((bitwidth(82))) uint82;
typedef unsigned int __attribute__ ((bitwidth(83))) uint83;
typedef unsigned int __attribute__ ((bitwidth(84))) uint84;
typedef unsigned int __attribute__ ((bitwidth(85))) uint85;
typedef unsigned int __attribute__ ((bitwidth(86))) uint86;
typedef unsigned int __attribute__ ((bitwidth(87))) uint87;
typedef unsigned int __attribute__ ((bitwidth(88))) uint88;
typedef unsigned int __attribute__ ((bitwidth(89))) uint89;
typedef unsigned int __attribute__ ((bitwidth(90))) uint90;
typedef unsigned int __attribute__ ((bitwidth(91))) uint91;
typedef unsigned int __attribute__ ((bitwidth(92))) uint92;
typedef unsigned int __attribute__ ((bitwidth(93))) uint93;
typedef unsigned int __attribute__ ((bitwidth(94))) uint94;
typedef unsigned int __attribute__ ((bitwidth(95))) uint95;
typedef unsigned int __attribute__ ((bitwidth(96))) uint96;
typedef unsigned int __attribute__ ((bitwidth(97))) uint97;
typedef unsigned int __attribute__ ((bitwidth(98))) uint98;
typedef unsigned int __attribute__ ((bitwidth(99))) uint99;
typedef unsigned int __attribute__ ((bitwidth(100))) uint100;
typedef unsigned int __attribute__ ((bitwidth(101))) uint101;
typedef unsigned int __attribute__ ((bitwidth(102))) uint102;
typedef unsigned int __attribute__ ((bitwidth(103))) uint103;
typedef unsigned int __attribute__ ((bitwidth(104))) uint104;
typedef unsigned int __attribute__ ((bitwidth(105))) uint105;
typedef unsigned int __attribute__ ((bitwidth(106))) uint106;
typedef unsigned int __attribute__ ((bitwidth(107))) uint107;
typedef unsigned int __attribute__ ((bitwidth(108))) uint108;
typedef unsigned int __attribute__ ((bitwidth(109))) uint109;
typedef unsigned int __attribute__ ((bitwidth(110))) uint110;
typedef unsigned int __attribute__ ((bitwidth(111))) uint111;
typedef unsigned int __attribute__ ((bitwidth(112))) uint112;
typedef unsigned int __attribute__ ((bitwidth(113))) uint113;
typedef unsigned int __attribute__ ((bitwidth(114))) uint114;
typedef unsigned int __attribute__ ((bitwidth(115))) uint115;
typedef unsigned int __attribute__ ((bitwidth(116))) uint116;
typedef unsigned int __attribute__ ((bitwidth(117))) uint117;
typedef unsigned int __attribute__ ((bitwidth(118))) uint118;
typedef unsigned int __attribute__ ((bitwidth(119))) uint119;
typedef unsigned int __attribute__ ((bitwidth(120))) uint120;
typedef unsigned int __attribute__ ((bitwidth(121))) uint121;
typedef unsigned int __attribute__ ((bitwidth(122))) uint122;
typedef unsigned int __attribute__ ((bitwidth(123))) uint123;
typedef unsigned int __attribute__ ((bitwidth(124))) uint124;
typedef unsigned int __attribute__ ((bitwidth(125))) uint125;
typedef unsigned int __attribute__ ((bitwidth(126))) uint126;
typedef unsigned int __attribute__ ((bitwidth(127))) uint127;
typedef unsigned int __attribute__ ((bitwidth(128))) uint128;






typedef unsigned int __attribute__ ((bitwidth(129))) uint129;
typedef unsigned int __attribute__ ((bitwidth(130))) uint130;
typedef unsigned int __attribute__ ((bitwidth(131))) uint131;
typedef unsigned int __attribute__ ((bitwidth(132))) uint132;
typedef unsigned int __attribute__ ((bitwidth(133))) uint133;
typedef unsigned int __attribute__ ((bitwidth(134))) uint134;
typedef unsigned int __attribute__ ((bitwidth(135))) uint135;
typedef unsigned int __attribute__ ((bitwidth(136))) uint136;
typedef unsigned int __attribute__ ((bitwidth(137))) uint137;
typedef unsigned int __attribute__ ((bitwidth(138))) uint138;
typedef unsigned int __attribute__ ((bitwidth(139))) uint139;
typedef unsigned int __attribute__ ((bitwidth(140))) uint140;
typedef unsigned int __attribute__ ((bitwidth(141))) uint141;
typedef unsigned int __attribute__ ((bitwidth(142))) uint142;
typedef unsigned int __attribute__ ((bitwidth(143))) uint143;
typedef unsigned int __attribute__ ((bitwidth(144))) uint144;
typedef unsigned int __attribute__ ((bitwidth(145))) uint145;
typedef unsigned int __attribute__ ((bitwidth(146))) uint146;
typedef unsigned int __attribute__ ((bitwidth(147))) uint147;
typedef unsigned int __attribute__ ((bitwidth(148))) uint148;
typedef unsigned int __attribute__ ((bitwidth(149))) uint149;
typedef unsigned int __attribute__ ((bitwidth(150))) uint150;
typedef unsigned int __attribute__ ((bitwidth(151))) uint151;
typedef unsigned int __attribute__ ((bitwidth(152))) uint152;
typedef unsigned int __attribute__ ((bitwidth(153))) uint153;
typedef unsigned int __attribute__ ((bitwidth(154))) uint154;
typedef unsigned int __attribute__ ((bitwidth(155))) uint155;
typedef unsigned int __attribute__ ((bitwidth(156))) uint156;
typedef unsigned int __attribute__ ((bitwidth(157))) uint157;
typedef unsigned int __attribute__ ((bitwidth(158))) uint158;
typedef unsigned int __attribute__ ((bitwidth(159))) uint159;
typedef unsigned int __attribute__ ((bitwidth(160))) uint160;
typedef unsigned int __attribute__ ((bitwidth(161))) uint161;
typedef unsigned int __attribute__ ((bitwidth(162))) uint162;
typedef unsigned int __attribute__ ((bitwidth(163))) uint163;
typedef unsigned int __attribute__ ((bitwidth(164))) uint164;
typedef unsigned int __attribute__ ((bitwidth(165))) uint165;
typedef unsigned int __attribute__ ((bitwidth(166))) uint166;
typedef unsigned int __attribute__ ((bitwidth(167))) uint167;
typedef unsigned int __attribute__ ((bitwidth(168))) uint168;
typedef unsigned int __attribute__ ((bitwidth(169))) uint169;
typedef unsigned int __attribute__ ((bitwidth(170))) uint170;
typedef unsigned int __attribute__ ((bitwidth(171))) uint171;
typedef unsigned int __attribute__ ((bitwidth(172))) uint172;
typedef unsigned int __attribute__ ((bitwidth(173))) uint173;
typedef unsigned int __attribute__ ((bitwidth(174))) uint174;
typedef unsigned int __attribute__ ((bitwidth(175))) uint175;
typedef unsigned int __attribute__ ((bitwidth(176))) uint176;
typedef unsigned int __attribute__ ((bitwidth(177))) uint177;
typedef unsigned int __attribute__ ((bitwidth(178))) uint178;
typedef unsigned int __attribute__ ((bitwidth(179))) uint179;
typedef unsigned int __attribute__ ((bitwidth(180))) uint180;
typedef unsigned int __attribute__ ((bitwidth(181))) uint181;
typedef unsigned int __attribute__ ((bitwidth(182))) uint182;
typedef unsigned int __attribute__ ((bitwidth(183))) uint183;
typedef unsigned int __attribute__ ((bitwidth(184))) uint184;
typedef unsigned int __attribute__ ((bitwidth(185))) uint185;
typedef unsigned int __attribute__ ((bitwidth(186))) uint186;
typedef unsigned int __attribute__ ((bitwidth(187))) uint187;
typedef unsigned int __attribute__ ((bitwidth(188))) uint188;
typedef unsigned int __attribute__ ((bitwidth(189))) uint189;
typedef unsigned int __attribute__ ((bitwidth(190))) uint190;
typedef unsigned int __attribute__ ((bitwidth(191))) uint191;
typedef unsigned int __attribute__ ((bitwidth(192))) uint192;
typedef unsigned int __attribute__ ((bitwidth(193))) uint193;
typedef unsigned int __attribute__ ((bitwidth(194))) uint194;
typedef unsigned int __attribute__ ((bitwidth(195))) uint195;
typedef unsigned int __attribute__ ((bitwidth(196))) uint196;
typedef unsigned int __attribute__ ((bitwidth(197))) uint197;
typedef unsigned int __attribute__ ((bitwidth(198))) uint198;
typedef unsigned int __attribute__ ((bitwidth(199))) uint199;
typedef unsigned int __attribute__ ((bitwidth(200))) uint200;
typedef unsigned int __attribute__ ((bitwidth(201))) uint201;
typedef unsigned int __attribute__ ((bitwidth(202))) uint202;
typedef unsigned int __attribute__ ((bitwidth(203))) uint203;
typedef unsigned int __attribute__ ((bitwidth(204))) uint204;
typedef unsigned int __attribute__ ((bitwidth(205))) uint205;
typedef unsigned int __attribute__ ((bitwidth(206))) uint206;
typedef unsigned int __attribute__ ((bitwidth(207))) uint207;
typedef unsigned int __attribute__ ((bitwidth(208))) uint208;
typedef unsigned int __attribute__ ((bitwidth(209))) uint209;
typedef unsigned int __attribute__ ((bitwidth(210))) uint210;
typedef unsigned int __attribute__ ((bitwidth(211))) uint211;
typedef unsigned int __attribute__ ((bitwidth(212))) uint212;
typedef unsigned int __attribute__ ((bitwidth(213))) uint213;
typedef unsigned int __attribute__ ((bitwidth(214))) uint214;
typedef unsigned int __attribute__ ((bitwidth(215))) uint215;
typedef unsigned int __attribute__ ((bitwidth(216))) uint216;
typedef unsigned int __attribute__ ((bitwidth(217))) uint217;
typedef unsigned int __attribute__ ((bitwidth(218))) uint218;
typedef unsigned int __attribute__ ((bitwidth(219))) uint219;
typedef unsigned int __attribute__ ((bitwidth(220))) uint220;
typedef unsigned int __attribute__ ((bitwidth(221))) uint221;
typedef unsigned int __attribute__ ((bitwidth(222))) uint222;
typedef unsigned int __attribute__ ((bitwidth(223))) uint223;
typedef unsigned int __attribute__ ((bitwidth(224))) uint224;
typedef unsigned int __attribute__ ((bitwidth(225))) uint225;
typedef unsigned int __attribute__ ((bitwidth(226))) uint226;
typedef unsigned int __attribute__ ((bitwidth(227))) uint227;
typedef unsigned int __attribute__ ((bitwidth(228))) uint228;
typedef unsigned int __attribute__ ((bitwidth(229))) uint229;
typedef unsigned int __attribute__ ((bitwidth(230))) uint230;
typedef unsigned int __attribute__ ((bitwidth(231))) uint231;
typedef unsigned int __attribute__ ((bitwidth(232))) uint232;
typedef unsigned int __attribute__ ((bitwidth(233))) uint233;
typedef unsigned int __attribute__ ((bitwidth(234))) uint234;
typedef unsigned int __attribute__ ((bitwidth(235))) uint235;
typedef unsigned int __attribute__ ((bitwidth(236))) uint236;
typedef unsigned int __attribute__ ((bitwidth(237))) uint237;
typedef unsigned int __attribute__ ((bitwidth(238))) uint238;
typedef unsigned int __attribute__ ((bitwidth(239))) uint239;
typedef unsigned int __attribute__ ((bitwidth(240))) uint240;
typedef unsigned int __attribute__ ((bitwidth(241))) uint241;
typedef unsigned int __attribute__ ((bitwidth(242))) uint242;
typedef unsigned int __attribute__ ((bitwidth(243))) uint243;
typedef unsigned int __attribute__ ((bitwidth(244))) uint244;
typedef unsigned int __attribute__ ((bitwidth(245))) uint245;
typedef unsigned int __attribute__ ((bitwidth(246))) uint246;
typedef unsigned int __attribute__ ((bitwidth(247))) uint247;
typedef unsigned int __attribute__ ((bitwidth(248))) uint248;
typedef unsigned int __attribute__ ((bitwidth(249))) uint249;
typedef unsigned int __attribute__ ((bitwidth(250))) uint250;
typedef unsigned int __attribute__ ((bitwidth(251))) uint251;
typedef unsigned int __attribute__ ((bitwidth(252))) uint252;
typedef unsigned int __attribute__ ((bitwidth(253))) uint253;
typedef unsigned int __attribute__ ((bitwidth(254))) uint254;
typedef unsigned int __attribute__ ((bitwidth(255))) uint255;
typedef unsigned int __attribute__ ((bitwidth(256))) uint256;
typedef unsigned int __attribute__ ((bitwidth(257))) uint257;
typedef unsigned int __attribute__ ((bitwidth(258))) uint258;
typedef unsigned int __attribute__ ((bitwidth(259))) uint259;
typedef unsigned int __attribute__ ((bitwidth(260))) uint260;
typedef unsigned int __attribute__ ((bitwidth(261))) uint261;
typedef unsigned int __attribute__ ((bitwidth(262))) uint262;
typedef unsigned int __attribute__ ((bitwidth(263))) uint263;
typedef unsigned int __attribute__ ((bitwidth(264))) uint264;
typedef unsigned int __attribute__ ((bitwidth(265))) uint265;
typedef unsigned int __attribute__ ((bitwidth(266))) uint266;
typedef unsigned int __attribute__ ((bitwidth(267))) uint267;
typedef unsigned int __attribute__ ((bitwidth(268))) uint268;
typedef unsigned int __attribute__ ((bitwidth(269))) uint269;
typedef unsigned int __attribute__ ((bitwidth(270))) uint270;
typedef unsigned int __attribute__ ((bitwidth(271))) uint271;
typedef unsigned int __attribute__ ((bitwidth(272))) uint272;
typedef unsigned int __attribute__ ((bitwidth(273))) uint273;
typedef unsigned int __attribute__ ((bitwidth(274))) uint274;
typedef unsigned int __attribute__ ((bitwidth(275))) uint275;
typedef unsigned int __attribute__ ((bitwidth(276))) uint276;
typedef unsigned int __attribute__ ((bitwidth(277))) uint277;
typedef unsigned int __attribute__ ((bitwidth(278))) uint278;
typedef unsigned int __attribute__ ((bitwidth(279))) uint279;
typedef unsigned int __attribute__ ((bitwidth(280))) uint280;
typedef unsigned int __attribute__ ((bitwidth(281))) uint281;
typedef unsigned int __attribute__ ((bitwidth(282))) uint282;
typedef unsigned int __attribute__ ((bitwidth(283))) uint283;
typedef unsigned int __attribute__ ((bitwidth(284))) uint284;
typedef unsigned int __attribute__ ((bitwidth(285))) uint285;
typedef unsigned int __attribute__ ((bitwidth(286))) uint286;
typedef unsigned int __attribute__ ((bitwidth(287))) uint287;
typedef unsigned int __attribute__ ((bitwidth(288))) uint288;
typedef unsigned int __attribute__ ((bitwidth(289))) uint289;
typedef unsigned int __attribute__ ((bitwidth(290))) uint290;
typedef unsigned int __attribute__ ((bitwidth(291))) uint291;
typedef unsigned int __attribute__ ((bitwidth(292))) uint292;
typedef unsigned int __attribute__ ((bitwidth(293))) uint293;
typedef unsigned int __attribute__ ((bitwidth(294))) uint294;
typedef unsigned int __attribute__ ((bitwidth(295))) uint295;
typedef unsigned int __attribute__ ((bitwidth(296))) uint296;
typedef unsigned int __attribute__ ((bitwidth(297))) uint297;
typedef unsigned int __attribute__ ((bitwidth(298))) uint298;
typedef unsigned int __attribute__ ((bitwidth(299))) uint299;
typedef unsigned int __attribute__ ((bitwidth(300))) uint300;
typedef unsigned int __attribute__ ((bitwidth(301))) uint301;
typedef unsigned int __attribute__ ((bitwidth(302))) uint302;
typedef unsigned int __attribute__ ((bitwidth(303))) uint303;
typedef unsigned int __attribute__ ((bitwidth(304))) uint304;
typedef unsigned int __attribute__ ((bitwidth(305))) uint305;
typedef unsigned int __attribute__ ((bitwidth(306))) uint306;
typedef unsigned int __attribute__ ((bitwidth(307))) uint307;
typedef unsigned int __attribute__ ((bitwidth(308))) uint308;
typedef unsigned int __attribute__ ((bitwidth(309))) uint309;
typedef unsigned int __attribute__ ((bitwidth(310))) uint310;
typedef unsigned int __attribute__ ((bitwidth(311))) uint311;
typedef unsigned int __attribute__ ((bitwidth(312))) uint312;
typedef unsigned int __attribute__ ((bitwidth(313))) uint313;
typedef unsigned int __attribute__ ((bitwidth(314))) uint314;
typedef unsigned int __attribute__ ((bitwidth(315))) uint315;
typedef unsigned int __attribute__ ((bitwidth(316))) uint316;
typedef unsigned int __attribute__ ((bitwidth(317))) uint317;
typedef unsigned int __attribute__ ((bitwidth(318))) uint318;
typedef unsigned int __attribute__ ((bitwidth(319))) uint319;
typedef unsigned int __attribute__ ((bitwidth(320))) uint320;
typedef unsigned int __attribute__ ((bitwidth(321))) uint321;
typedef unsigned int __attribute__ ((bitwidth(322))) uint322;
typedef unsigned int __attribute__ ((bitwidth(323))) uint323;
typedef unsigned int __attribute__ ((bitwidth(324))) uint324;
typedef unsigned int __attribute__ ((bitwidth(325))) uint325;
typedef unsigned int __attribute__ ((bitwidth(326))) uint326;
typedef unsigned int __attribute__ ((bitwidth(327))) uint327;
typedef unsigned int __attribute__ ((bitwidth(328))) uint328;
typedef unsigned int __attribute__ ((bitwidth(329))) uint329;
typedef unsigned int __attribute__ ((bitwidth(330))) uint330;
typedef unsigned int __attribute__ ((bitwidth(331))) uint331;
typedef unsigned int __attribute__ ((bitwidth(332))) uint332;
typedef unsigned int __attribute__ ((bitwidth(333))) uint333;
typedef unsigned int __attribute__ ((bitwidth(334))) uint334;
typedef unsigned int __attribute__ ((bitwidth(335))) uint335;
typedef unsigned int __attribute__ ((bitwidth(336))) uint336;
typedef unsigned int __attribute__ ((bitwidth(337))) uint337;
typedef unsigned int __attribute__ ((bitwidth(338))) uint338;
typedef unsigned int __attribute__ ((bitwidth(339))) uint339;
typedef unsigned int __attribute__ ((bitwidth(340))) uint340;
typedef unsigned int __attribute__ ((bitwidth(341))) uint341;
typedef unsigned int __attribute__ ((bitwidth(342))) uint342;
typedef unsigned int __attribute__ ((bitwidth(343))) uint343;
typedef unsigned int __attribute__ ((bitwidth(344))) uint344;
typedef unsigned int __attribute__ ((bitwidth(345))) uint345;
typedef unsigned int __attribute__ ((bitwidth(346))) uint346;
typedef unsigned int __attribute__ ((bitwidth(347))) uint347;
typedef unsigned int __attribute__ ((bitwidth(348))) uint348;
typedef unsigned int __attribute__ ((bitwidth(349))) uint349;
typedef unsigned int __attribute__ ((bitwidth(350))) uint350;
typedef unsigned int __attribute__ ((bitwidth(351))) uint351;
typedef unsigned int __attribute__ ((bitwidth(352))) uint352;
typedef unsigned int __attribute__ ((bitwidth(353))) uint353;
typedef unsigned int __attribute__ ((bitwidth(354))) uint354;
typedef unsigned int __attribute__ ((bitwidth(355))) uint355;
typedef unsigned int __attribute__ ((bitwidth(356))) uint356;
typedef unsigned int __attribute__ ((bitwidth(357))) uint357;
typedef unsigned int __attribute__ ((bitwidth(358))) uint358;
typedef unsigned int __attribute__ ((bitwidth(359))) uint359;
typedef unsigned int __attribute__ ((bitwidth(360))) uint360;
typedef unsigned int __attribute__ ((bitwidth(361))) uint361;
typedef unsigned int __attribute__ ((bitwidth(362))) uint362;
typedef unsigned int __attribute__ ((bitwidth(363))) uint363;
typedef unsigned int __attribute__ ((bitwidth(364))) uint364;
typedef unsigned int __attribute__ ((bitwidth(365))) uint365;
typedef unsigned int __attribute__ ((bitwidth(366))) uint366;
typedef unsigned int __attribute__ ((bitwidth(367))) uint367;
typedef unsigned int __attribute__ ((bitwidth(368))) uint368;
typedef unsigned int __attribute__ ((bitwidth(369))) uint369;
typedef unsigned int __attribute__ ((bitwidth(370))) uint370;
typedef unsigned int __attribute__ ((bitwidth(371))) uint371;
typedef unsigned int __attribute__ ((bitwidth(372))) uint372;
typedef unsigned int __attribute__ ((bitwidth(373))) uint373;
typedef unsigned int __attribute__ ((bitwidth(374))) uint374;
typedef unsigned int __attribute__ ((bitwidth(375))) uint375;
typedef unsigned int __attribute__ ((bitwidth(376))) uint376;
typedef unsigned int __attribute__ ((bitwidth(377))) uint377;
typedef unsigned int __attribute__ ((bitwidth(378))) uint378;
typedef unsigned int __attribute__ ((bitwidth(379))) uint379;
typedef unsigned int __attribute__ ((bitwidth(380))) uint380;
typedef unsigned int __attribute__ ((bitwidth(381))) uint381;
typedef unsigned int __attribute__ ((bitwidth(382))) uint382;
typedef unsigned int __attribute__ ((bitwidth(383))) uint383;
typedef unsigned int __attribute__ ((bitwidth(384))) uint384;
typedef unsigned int __attribute__ ((bitwidth(385))) uint385;
typedef unsigned int __attribute__ ((bitwidth(386))) uint386;
typedef unsigned int __attribute__ ((bitwidth(387))) uint387;
typedef unsigned int __attribute__ ((bitwidth(388))) uint388;
typedef unsigned int __attribute__ ((bitwidth(389))) uint389;
typedef unsigned int __attribute__ ((bitwidth(390))) uint390;
typedef unsigned int __attribute__ ((bitwidth(391))) uint391;
typedef unsigned int __attribute__ ((bitwidth(392))) uint392;
typedef unsigned int __attribute__ ((bitwidth(393))) uint393;
typedef unsigned int __attribute__ ((bitwidth(394))) uint394;
typedef unsigned int __attribute__ ((bitwidth(395))) uint395;
typedef unsigned int __attribute__ ((bitwidth(396))) uint396;
typedef unsigned int __attribute__ ((bitwidth(397))) uint397;
typedef unsigned int __attribute__ ((bitwidth(398))) uint398;
typedef unsigned int __attribute__ ((bitwidth(399))) uint399;
typedef unsigned int __attribute__ ((bitwidth(400))) uint400;
typedef unsigned int __attribute__ ((bitwidth(401))) uint401;
typedef unsigned int __attribute__ ((bitwidth(402))) uint402;
typedef unsigned int __attribute__ ((bitwidth(403))) uint403;
typedef unsigned int __attribute__ ((bitwidth(404))) uint404;
typedef unsigned int __attribute__ ((bitwidth(405))) uint405;
typedef unsigned int __attribute__ ((bitwidth(406))) uint406;
typedef unsigned int __attribute__ ((bitwidth(407))) uint407;
typedef unsigned int __attribute__ ((bitwidth(408))) uint408;
typedef unsigned int __attribute__ ((bitwidth(409))) uint409;
typedef unsigned int __attribute__ ((bitwidth(410))) uint410;
typedef unsigned int __attribute__ ((bitwidth(411))) uint411;
typedef unsigned int __attribute__ ((bitwidth(412))) uint412;
typedef unsigned int __attribute__ ((bitwidth(413))) uint413;
typedef unsigned int __attribute__ ((bitwidth(414))) uint414;
typedef unsigned int __attribute__ ((bitwidth(415))) uint415;
typedef unsigned int __attribute__ ((bitwidth(416))) uint416;
typedef unsigned int __attribute__ ((bitwidth(417))) uint417;
typedef unsigned int __attribute__ ((bitwidth(418))) uint418;
typedef unsigned int __attribute__ ((bitwidth(419))) uint419;
typedef unsigned int __attribute__ ((bitwidth(420))) uint420;
typedef unsigned int __attribute__ ((bitwidth(421))) uint421;
typedef unsigned int __attribute__ ((bitwidth(422))) uint422;
typedef unsigned int __attribute__ ((bitwidth(423))) uint423;
typedef unsigned int __attribute__ ((bitwidth(424))) uint424;
typedef unsigned int __attribute__ ((bitwidth(425))) uint425;
typedef unsigned int __attribute__ ((bitwidth(426))) uint426;
typedef unsigned int __attribute__ ((bitwidth(427))) uint427;
typedef unsigned int __attribute__ ((bitwidth(428))) uint428;
typedef unsigned int __attribute__ ((bitwidth(429))) uint429;
typedef unsigned int __attribute__ ((bitwidth(430))) uint430;
typedef unsigned int __attribute__ ((bitwidth(431))) uint431;
typedef unsigned int __attribute__ ((bitwidth(432))) uint432;
typedef unsigned int __attribute__ ((bitwidth(433))) uint433;
typedef unsigned int __attribute__ ((bitwidth(434))) uint434;
typedef unsigned int __attribute__ ((bitwidth(435))) uint435;
typedef unsigned int __attribute__ ((bitwidth(436))) uint436;
typedef unsigned int __attribute__ ((bitwidth(437))) uint437;
typedef unsigned int __attribute__ ((bitwidth(438))) uint438;
typedef unsigned int __attribute__ ((bitwidth(439))) uint439;
typedef unsigned int __attribute__ ((bitwidth(440))) uint440;
typedef unsigned int __attribute__ ((bitwidth(441))) uint441;
typedef unsigned int __attribute__ ((bitwidth(442))) uint442;
typedef unsigned int __attribute__ ((bitwidth(443))) uint443;
typedef unsigned int __attribute__ ((bitwidth(444))) uint444;
typedef unsigned int __attribute__ ((bitwidth(445))) uint445;
typedef unsigned int __attribute__ ((bitwidth(446))) uint446;
typedef unsigned int __attribute__ ((bitwidth(447))) uint447;
typedef unsigned int __attribute__ ((bitwidth(448))) uint448;
typedef unsigned int __attribute__ ((bitwidth(449))) uint449;
typedef unsigned int __attribute__ ((bitwidth(450))) uint450;
typedef unsigned int __attribute__ ((bitwidth(451))) uint451;
typedef unsigned int __attribute__ ((bitwidth(452))) uint452;
typedef unsigned int __attribute__ ((bitwidth(453))) uint453;
typedef unsigned int __attribute__ ((bitwidth(454))) uint454;
typedef unsigned int __attribute__ ((bitwidth(455))) uint455;
typedef unsigned int __attribute__ ((bitwidth(456))) uint456;
typedef unsigned int __attribute__ ((bitwidth(457))) uint457;
typedef unsigned int __attribute__ ((bitwidth(458))) uint458;
typedef unsigned int __attribute__ ((bitwidth(459))) uint459;
typedef unsigned int __attribute__ ((bitwidth(460))) uint460;
typedef unsigned int __attribute__ ((bitwidth(461))) uint461;
typedef unsigned int __attribute__ ((bitwidth(462))) uint462;
typedef unsigned int __attribute__ ((bitwidth(463))) uint463;
typedef unsigned int __attribute__ ((bitwidth(464))) uint464;
typedef unsigned int __attribute__ ((bitwidth(465))) uint465;
typedef unsigned int __attribute__ ((bitwidth(466))) uint466;
typedef unsigned int __attribute__ ((bitwidth(467))) uint467;
typedef unsigned int __attribute__ ((bitwidth(468))) uint468;
typedef unsigned int __attribute__ ((bitwidth(469))) uint469;
typedef unsigned int __attribute__ ((bitwidth(470))) uint470;
typedef unsigned int __attribute__ ((bitwidth(471))) uint471;
typedef unsigned int __attribute__ ((bitwidth(472))) uint472;
typedef unsigned int __attribute__ ((bitwidth(473))) uint473;
typedef unsigned int __attribute__ ((bitwidth(474))) uint474;
typedef unsigned int __attribute__ ((bitwidth(475))) uint475;
typedef unsigned int __attribute__ ((bitwidth(476))) uint476;
typedef unsigned int __attribute__ ((bitwidth(477))) uint477;
typedef unsigned int __attribute__ ((bitwidth(478))) uint478;
typedef unsigned int __attribute__ ((bitwidth(479))) uint479;
typedef unsigned int __attribute__ ((bitwidth(480))) uint480;
typedef unsigned int __attribute__ ((bitwidth(481))) uint481;
typedef unsigned int __attribute__ ((bitwidth(482))) uint482;
typedef unsigned int __attribute__ ((bitwidth(483))) uint483;
typedef unsigned int __attribute__ ((bitwidth(484))) uint484;
typedef unsigned int __attribute__ ((bitwidth(485))) uint485;
typedef unsigned int __attribute__ ((bitwidth(486))) uint486;
typedef unsigned int __attribute__ ((bitwidth(487))) uint487;
typedef unsigned int __attribute__ ((bitwidth(488))) uint488;
typedef unsigned int __attribute__ ((bitwidth(489))) uint489;
typedef unsigned int __attribute__ ((bitwidth(490))) uint490;
typedef unsigned int __attribute__ ((bitwidth(491))) uint491;
typedef unsigned int __attribute__ ((bitwidth(492))) uint492;
typedef unsigned int __attribute__ ((bitwidth(493))) uint493;
typedef unsigned int __attribute__ ((bitwidth(494))) uint494;
typedef unsigned int __attribute__ ((bitwidth(495))) uint495;
typedef unsigned int __attribute__ ((bitwidth(496))) uint496;
typedef unsigned int __attribute__ ((bitwidth(497))) uint497;
typedef unsigned int __attribute__ ((bitwidth(498))) uint498;
typedef unsigned int __attribute__ ((bitwidth(499))) uint499;
typedef unsigned int __attribute__ ((bitwidth(500))) uint500;
typedef unsigned int __attribute__ ((bitwidth(501))) uint501;
typedef unsigned int __attribute__ ((bitwidth(502))) uint502;
typedef unsigned int __attribute__ ((bitwidth(503))) uint503;
typedef unsigned int __attribute__ ((bitwidth(504))) uint504;
typedef unsigned int __attribute__ ((bitwidth(505))) uint505;
typedef unsigned int __attribute__ ((bitwidth(506))) uint506;
typedef unsigned int __attribute__ ((bitwidth(507))) uint507;
typedef unsigned int __attribute__ ((bitwidth(508))) uint508;
typedef unsigned int __attribute__ ((bitwidth(509))) uint509;
typedef unsigned int __attribute__ ((bitwidth(510))) uint510;
typedef unsigned int __attribute__ ((bitwidth(511))) uint511;
typedef unsigned int __attribute__ ((bitwidth(512))) uint512;
typedef unsigned int __attribute__ ((bitwidth(513))) uint513;
typedef unsigned int __attribute__ ((bitwidth(514))) uint514;
typedef unsigned int __attribute__ ((bitwidth(515))) uint515;
typedef unsigned int __attribute__ ((bitwidth(516))) uint516;
typedef unsigned int __attribute__ ((bitwidth(517))) uint517;
typedef unsigned int __attribute__ ((bitwidth(518))) uint518;
typedef unsigned int __attribute__ ((bitwidth(519))) uint519;
typedef unsigned int __attribute__ ((bitwidth(520))) uint520;
typedef unsigned int __attribute__ ((bitwidth(521))) uint521;
typedef unsigned int __attribute__ ((bitwidth(522))) uint522;
typedef unsigned int __attribute__ ((bitwidth(523))) uint523;
typedef unsigned int __attribute__ ((bitwidth(524))) uint524;
typedef unsigned int __attribute__ ((bitwidth(525))) uint525;
typedef unsigned int __attribute__ ((bitwidth(526))) uint526;
typedef unsigned int __attribute__ ((bitwidth(527))) uint527;
typedef unsigned int __attribute__ ((bitwidth(528))) uint528;
typedef unsigned int __attribute__ ((bitwidth(529))) uint529;
typedef unsigned int __attribute__ ((bitwidth(530))) uint530;
typedef unsigned int __attribute__ ((bitwidth(531))) uint531;
typedef unsigned int __attribute__ ((bitwidth(532))) uint532;
typedef unsigned int __attribute__ ((bitwidth(533))) uint533;
typedef unsigned int __attribute__ ((bitwidth(534))) uint534;
typedef unsigned int __attribute__ ((bitwidth(535))) uint535;
typedef unsigned int __attribute__ ((bitwidth(536))) uint536;
typedef unsigned int __attribute__ ((bitwidth(537))) uint537;
typedef unsigned int __attribute__ ((bitwidth(538))) uint538;
typedef unsigned int __attribute__ ((bitwidth(539))) uint539;
typedef unsigned int __attribute__ ((bitwidth(540))) uint540;
typedef unsigned int __attribute__ ((bitwidth(541))) uint541;
typedef unsigned int __attribute__ ((bitwidth(542))) uint542;
typedef unsigned int __attribute__ ((bitwidth(543))) uint543;
typedef unsigned int __attribute__ ((bitwidth(544))) uint544;
typedef unsigned int __attribute__ ((bitwidth(545))) uint545;
typedef unsigned int __attribute__ ((bitwidth(546))) uint546;
typedef unsigned int __attribute__ ((bitwidth(547))) uint547;
typedef unsigned int __attribute__ ((bitwidth(548))) uint548;
typedef unsigned int __attribute__ ((bitwidth(549))) uint549;
typedef unsigned int __attribute__ ((bitwidth(550))) uint550;
typedef unsigned int __attribute__ ((bitwidth(551))) uint551;
typedef unsigned int __attribute__ ((bitwidth(552))) uint552;
typedef unsigned int __attribute__ ((bitwidth(553))) uint553;
typedef unsigned int __attribute__ ((bitwidth(554))) uint554;
typedef unsigned int __attribute__ ((bitwidth(555))) uint555;
typedef unsigned int __attribute__ ((bitwidth(556))) uint556;
typedef unsigned int __attribute__ ((bitwidth(557))) uint557;
typedef unsigned int __attribute__ ((bitwidth(558))) uint558;
typedef unsigned int __attribute__ ((bitwidth(559))) uint559;
typedef unsigned int __attribute__ ((bitwidth(560))) uint560;
typedef unsigned int __attribute__ ((bitwidth(561))) uint561;
typedef unsigned int __attribute__ ((bitwidth(562))) uint562;
typedef unsigned int __attribute__ ((bitwidth(563))) uint563;
typedef unsigned int __attribute__ ((bitwidth(564))) uint564;
typedef unsigned int __attribute__ ((bitwidth(565))) uint565;
typedef unsigned int __attribute__ ((bitwidth(566))) uint566;
typedef unsigned int __attribute__ ((bitwidth(567))) uint567;
typedef unsigned int __attribute__ ((bitwidth(568))) uint568;
typedef unsigned int __attribute__ ((bitwidth(569))) uint569;
typedef unsigned int __attribute__ ((bitwidth(570))) uint570;
typedef unsigned int __attribute__ ((bitwidth(571))) uint571;
typedef unsigned int __attribute__ ((bitwidth(572))) uint572;
typedef unsigned int __attribute__ ((bitwidth(573))) uint573;
typedef unsigned int __attribute__ ((bitwidth(574))) uint574;
typedef unsigned int __attribute__ ((bitwidth(575))) uint575;
typedef unsigned int __attribute__ ((bitwidth(576))) uint576;
typedef unsigned int __attribute__ ((bitwidth(577))) uint577;
typedef unsigned int __attribute__ ((bitwidth(578))) uint578;
typedef unsigned int __attribute__ ((bitwidth(579))) uint579;
typedef unsigned int __attribute__ ((bitwidth(580))) uint580;
typedef unsigned int __attribute__ ((bitwidth(581))) uint581;
typedef unsigned int __attribute__ ((bitwidth(582))) uint582;
typedef unsigned int __attribute__ ((bitwidth(583))) uint583;
typedef unsigned int __attribute__ ((bitwidth(584))) uint584;
typedef unsigned int __attribute__ ((bitwidth(585))) uint585;
typedef unsigned int __attribute__ ((bitwidth(586))) uint586;
typedef unsigned int __attribute__ ((bitwidth(587))) uint587;
typedef unsigned int __attribute__ ((bitwidth(588))) uint588;
typedef unsigned int __attribute__ ((bitwidth(589))) uint589;
typedef unsigned int __attribute__ ((bitwidth(590))) uint590;
typedef unsigned int __attribute__ ((bitwidth(591))) uint591;
typedef unsigned int __attribute__ ((bitwidth(592))) uint592;
typedef unsigned int __attribute__ ((bitwidth(593))) uint593;
typedef unsigned int __attribute__ ((bitwidth(594))) uint594;
typedef unsigned int __attribute__ ((bitwidth(595))) uint595;
typedef unsigned int __attribute__ ((bitwidth(596))) uint596;
typedef unsigned int __attribute__ ((bitwidth(597))) uint597;
typedef unsigned int __attribute__ ((bitwidth(598))) uint598;
typedef unsigned int __attribute__ ((bitwidth(599))) uint599;
typedef unsigned int __attribute__ ((bitwidth(600))) uint600;
typedef unsigned int __attribute__ ((bitwidth(601))) uint601;
typedef unsigned int __attribute__ ((bitwidth(602))) uint602;
typedef unsigned int __attribute__ ((bitwidth(603))) uint603;
typedef unsigned int __attribute__ ((bitwidth(604))) uint604;
typedef unsigned int __attribute__ ((bitwidth(605))) uint605;
typedef unsigned int __attribute__ ((bitwidth(606))) uint606;
typedef unsigned int __attribute__ ((bitwidth(607))) uint607;
typedef unsigned int __attribute__ ((bitwidth(608))) uint608;
typedef unsigned int __attribute__ ((bitwidth(609))) uint609;
typedef unsigned int __attribute__ ((bitwidth(610))) uint610;
typedef unsigned int __attribute__ ((bitwidth(611))) uint611;
typedef unsigned int __attribute__ ((bitwidth(612))) uint612;
typedef unsigned int __attribute__ ((bitwidth(613))) uint613;
typedef unsigned int __attribute__ ((bitwidth(614))) uint614;
typedef unsigned int __attribute__ ((bitwidth(615))) uint615;
typedef unsigned int __attribute__ ((bitwidth(616))) uint616;
typedef unsigned int __attribute__ ((bitwidth(617))) uint617;
typedef unsigned int __attribute__ ((bitwidth(618))) uint618;
typedef unsigned int __attribute__ ((bitwidth(619))) uint619;
typedef unsigned int __attribute__ ((bitwidth(620))) uint620;
typedef unsigned int __attribute__ ((bitwidth(621))) uint621;
typedef unsigned int __attribute__ ((bitwidth(622))) uint622;
typedef unsigned int __attribute__ ((bitwidth(623))) uint623;
typedef unsigned int __attribute__ ((bitwidth(624))) uint624;
typedef unsigned int __attribute__ ((bitwidth(625))) uint625;
typedef unsigned int __attribute__ ((bitwidth(626))) uint626;
typedef unsigned int __attribute__ ((bitwidth(627))) uint627;
typedef unsigned int __attribute__ ((bitwidth(628))) uint628;
typedef unsigned int __attribute__ ((bitwidth(629))) uint629;
typedef unsigned int __attribute__ ((bitwidth(630))) uint630;
typedef unsigned int __attribute__ ((bitwidth(631))) uint631;
typedef unsigned int __attribute__ ((bitwidth(632))) uint632;
typedef unsigned int __attribute__ ((bitwidth(633))) uint633;
typedef unsigned int __attribute__ ((bitwidth(634))) uint634;
typedef unsigned int __attribute__ ((bitwidth(635))) uint635;
typedef unsigned int __attribute__ ((bitwidth(636))) uint636;
typedef unsigned int __attribute__ ((bitwidth(637))) uint637;
typedef unsigned int __attribute__ ((bitwidth(638))) uint638;
typedef unsigned int __attribute__ ((bitwidth(639))) uint639;
typedef unsigned int __attribute__ ((bitwidth(640))) uint640;
typedef unsigned int __attribute__ ((bitwidth(641))) uint641;
typedef unsigned int __attribute__ ((bitwidth(642))) uint642;
typedef unsigned int __attribute__ ((bitwidth(643))) uint643;
typedef unsigned int __attribute__ ((bitwidth(644))) uint644;
typedef unsigned int __attribute__ ((bitwidth(645))) uint645;
typedef unsigned int __attribute__ ((bitwidth(646))) uint646;
typedef unsigned int __attribute__ ((bitwidth(647))) uint647;
typedef unsigned int __attribute__ ((bitwidth(648))) uint648;
typedef unsigned int __attribute__ ((bitwidth(649))) uint649;
typedef unsigned int __attribute__ ((bitwidth(650))) uint650;
typedef unsigned int __attribute__ ((bitwidth(651))) uint651;
typedef unsigned int __attribute__ ((bitwidth(652))) uint652;
typedef unsigned int __attribute__ ((bitwidth(653))) uint653;
typedef unsigned int __attribute__ ((bitwidth(654))) uint654;
typedef unsigned int __attribute__ ((bitwidth(655))) uint655;
typedef unsigned int __attribute__ ((bitwidth(656))) uint656;
typedef unsigned int __attribute__ ((bitwidth(657))) uint657;
typedef unsigned int __attribute__ ((bitwidth(658))) uint658;
typedef unsigned int __attribute__ ((bitwidth(659))) uint659;
typedef unsigned int __attribute__ ((bitwidth(660))) uint660;
typedef unsigned int __attribute__ ((bitwidth(661))) uint661;
typedef unsigned int __attribute__ ((bitwidth(662))) uint662;
typedef unsigned int __attribute__ ((bitwidth(663))) uint663;
typedef unsigned int __attribute__ ((bitwidth(664))) uint664;
typedef unsigned int __attribute__ ((bitwidth(665))) uint665;
typedef unsigned int __attribute__ ((bitwidth(666))) uint666;
typedef unsigned int __attribute__ ((bitwidth(667))) uint667;
typedef unsigned int __attribute__ ((bitwidth(668))) uint668;
typedef unsigned int __attribute__ ((bitwidth(669))) uint669;
typedef unsigned int __attribute__ ((bitwidth(670))) uint670;
typedef unsigned int __attribute__ ((bitwidth(671))) uint671;
typedef unsigned int __attribute__ ((bitwidth(672))) uint672;
typedef unsigned int __attribute__ ((bitwidth(673))) uint673;
typedef unsigned int __attribute__ ((bitwidth(674))) uint674;
typedef unsigned int __attribute__ ((bitwidth(675))) uint675;
typedef unsigned int __attribute__ ((bitwidth(676))) uint676;
typedef unsigned int __attribute__ ((bitwidth(677))) uint677;
typedef unsigned int __attribute__ ((bitwidth(678))) uint678;
typedef unsigned int __attribute__ ((bitwidth(679))) uint679;
typedef unsigned int __attribute__ ((bitwidth(680))) uint680;
typedef unsigned int __attribute__ ((bitwidth(681))) uint681;
typedef unsigned int __attribute__ ((bitwidth(682))) uint682;
typedef unsigned int __attribute__ ((bitwidth(683))) uint683;
typedef unsigned int __attribute__ ((bitwidth(684))) uint684;
typedef unsigned int __attribute__ ((bitwidth(685))) uint685;
typedef unsigned int __attribute__ ((bitwidth(686))) uint686;
typedef unsigned int __attribute__ ((bitwidth(687))) uint687;
typedef unsigned int __attribute__ ((bitwidth(688))) uint688;
typedef unsigned int __attribute__ ((bitwidth(689))) uint689;
typedef unsigned int __attribute__ ((bitwidth(690))) uint690;
typedef unsigned int __attribute__ ((bitwidth(691))) uint691;
typedef unsigned int __attribute__ ((bitwidth(692))) uint692;
typedef unsigned int __attribute__ ((bitwidth(693))) uint693;
typedef unsigned int __attribute__ ((bitwidth(694))) uint694;
typedef unsigned int __attribute__ ((bitwidth(695))) uint695;
typedef unsigned int __attribute__ ((bitwidth(696))) uint696;
typedef unsigned int __attribute__ ((bitwidth(697))) uint697;
typedef unsigned int __attribute__ ((bitwidth(698))) uint698;
typedef unsigned int __attribute__ ((bitwidth(699))) uint699;
typedef unsigned int __attribute__ ((bitwidth(700))) uint700;
typedef unsigned int __attribute__ ((bitwidth(701))) uint701;
typedef unsigned int __attribute__ ((bitwidth(702))) uint702;
typedef unsigned int __attribute__ ((bitwidth(703))) uint703;
typedef unsigned int __attribute__ ((bitwidth(704))) uint704;
typedef unsigned int __attribute__ ((bitwidth(705))) uint705;
typedef unsigned int __attribute__ ((bitwidth(706))) uint706;
typedef unsigned int __attribute__ ((bitwidth(707))) uint707;
typedef unsigned int __attribute__ ((bitwidth(708))) uint708;
typedef unsigned int __attribute__ ((bitwidth(709))) uint709;
typedef unsigned int __attribute__ ((bitwidth(710))) uint710;
typedef unsigned int __attribute__ ((bitwidth(711))) uint711;
typedef unsigned int __attribute__ ((bitwidth(712))) uint712;
typedef unsigned int __attribute__ ((bitwidth(713))) uint713;
typedef unsigned int __attribute__ ((bitwidth(714))) uint714;
typedef unsigned int __attribute__ ((bitwidth(715))) uint715;
typedef unsigned int __attribute__ ((bitwidth(716))) uint716;
typedef unsigned int __attribute__ ((bitwidth(717))) uint717;
typedef unsigned int __attribute__ ((bitwidth(718))) uint718;
typedef unsigned int __attribute__ ((bitwidth(719))) uint719;
typedef unsigned int __attribute__ ((bitwidth(720))) uint720;
typedef unsigned int __attribute__ ((bitwidth(721))) uint721;
typedef unsigned int __attribute__ ((bitwidth(722))) uint722;
typedef unsigned int __attribute__ ((bitwidth(723))) uint723;
typedef unsigned int __attribute__ ((bitwidth(724))) uint724;
typedef unsigned int __attribute__ ((bitwidth(725))) uint725;
typedef unsigned int __attribute__ ((bitwidth(726))) uint726;
typedef unsigned int __attribute__ ((bitwidth(727))) uint727;
typedef unsigned int __attribute__ ((bitwidth(728))) uint728;
typedef unsigned int __attribute__ ((bitwidth(729))) uint729;
typedef unsigned int __attribute__ ((bitwidth(730))) uint730;
typedef unsigned int __attribute__ ((bitwidth(731))) uint731;
typedef unsigned int __attribute__ ((bitwidth(732))) uint732;
typedef unsigned int __attribute__ ((bitwidth(733))) uint733;
typedef unsigned int __attribute__ ((bitwidth(734))) uint734;
typedef unsigned int __attribute__ ((bitwidth(735))) uint735;
typedef unsigned int __attribute__ ((bitwidth(736))) uint736;
typedef unsigned int __attribute__ ((bitwidth(737))) uint737;
typedef unsigned int __attribute__ ((bitwidth(738))) uint738;
typedef unsigned int __attribute__ ((bitwidth(739))) uint739;
typedef unsigned int __attribute__ ((bitwidth(740))) uint740;
typedef unsigned int __attribute__ ((bitwidth(741))) uint741;
typedef unsigned int __attribute__ ((bitwidth(742))) uint742;
typedef unsigned int __attribute__ ((bitwidth(743))) uint743;
typedef unsigned int __attribute__ ((bitwidth(744))) uint744;
typedef unsigned int __attribute__ ((bitwidth(745))) uint745;
typedef unsigned int __attribute__ ((bitwidth(746))) uint746;
typedef unsigned int __attribute__ ((bitwidth(747))) uint747;
typedef unsigned int __attribute__ ((bitwidth(748))) uint748;
typedef unsigned int __attribute__ ((bitwidth(749))) uint749;
typedef unsigned int __attribute__ ((bitwidth(750))) uint750;
typedef unsigned int __attribute__ ((bitwidth(751))) uint751;
typedef unsigned int __attribute__ ((bitwidth(752))) uint752;
typedef unsigned int __attribute__ ((bitwidth(753))) uint753;
typedef unsigned int __attribute__ ((bitwidth(754))) uint754;
typedef unsigned int __attribute__ ((bitwidth(755))) uint755;
typedef unsigned int __attribute__ ((bitwidth(756))) uint756;
typedef unsigned int __attribute__ ((bitwidth(757))) uint757;
typedef unsigned int __attribute__ ((bitwidth(758))) uint758;
typedef unsigned int __attribute__ ((bitwidth(759))) uint759;
typedef unsigned int __attribute__ ((bitwidth(760))) uint760;
typedef unsigned int __attribute__ ((bitwidth(761))) uint761;
typedef unsigned int __attribute__ ((bitwidth(762))) uint762;
typedef unsigned int __attribute__ ((bitwidth(763))) uint763;
typedef unsigned int __attribute__ ((bitwidth(764))) uint764;
typedef unsigned int __attribute__ ((bitwidth(765))) uint765;
typedef unsigned int __attribute__ ((bitwidth(766))) uint766;
typedef unsigned int __attribute__ ((bitwidth(767))) uint767;
typedef unsigned int __attribute__ ((bitwidth(768))) uint768;
typedef unsigned int __attribute__ ((bitwidth(769))) uint769;
typedef unsigned int __attribute__ ((bitwidth(770))) uint770;
typedef unsigned int __attribute__ ((bitwidth(771))) uint771;
typedef unsigned int __attribute__ ((bitwidth(772))) uint772;
typedef unsigned int __attribute__ ((bitwidth(773))) uint773;
typedef unsigned int __attribute__ ((bitwidth(774))) uint774;
typedef unsigned int __attribute__ ((bitwidth(775))) uint775;
typedef unsigned int __attribute__ ((bitwidth(776))) uint776;
typedef unsigned int __attribute__ ((bitwidth(777))) uint777;
typedef unsigned int __attribute__ ((bitwidth(778))) uint778;
typedef unsigned int __attribute__ ((bitwidth(779))) uint779;
typedef unsigned int __attribute__ ((bitwidth(780))) uint780;
typedef unsigned int __attribute__ ((bitwidth(781))) uint781;
typedef unsigned int __attribute__ ((bitwidth(782))) uint782;
typedef unsigned int __attribute__ ((bitwidth(783))) uint783;
typedef unsigned int __attribute__ ((bitwidth(784))) uint784;
typedef unsigned int __attribute__ ((bitwidth(785))) uint785;
typedef unsigned int __attribute__ ((bitwidth(786))) uint786;
typedef unsigned int __attribute__ ((bitwidth(787))) uint787;
typedef unsigned int __attribute__ ((bitwidth(788))) uint788;
typedef unsigned int __attribute__ ((bitwidth(789))) uint789;
typedef unsigned int __attribute__ ((bitwidth(790))) uint790;
typedef unsigned int __attribute__ ((bitwidth(791))) uint791;
typedef unsigned int __attribute__ ((bitwidth(792))) uint792;
typedef unsigned int __attribute__ ((bitwidth(793))) uint793;
typedef unsigned int __attribute__ ((bitwidth(794))) uint794;
typedef unsigned int __attribute__ ((bitwidth(795))) uint795;
typedef unsigned int __attribute__ ((bitwidth(796))) uint796;
typedef unsigned int __attribute__ ((bitwidth(797))) uint797;
typedef unsigned int __attribute__ ((bitwidth(798))) uint798;
typedef unsigned int __attribute__ ((bitwidth(799))) uint799;
typedef unsigned int __attribute__ ((bitwidth(800))) uint800;
typedef unsigned int __attribute__ ((bitwidth(801))) uint801;
typedef unsigned int __attribute__ ((bitwidth(802))) uint802;
typedef unsigned int __attribute__ ((bitwidth(803))) uint803;
typedef unsigned int __attribute__ ((bitwidth(804))) uint804;
typedef unsigned int __attribute__ ((bitwidth(805))) uint805;
typedef unsigned int __attribute__ ((bitwidth(806))) uint806;
typedef unsigned int __attribute__ ((bitwidth(807))) uint807;
typedef unsigned int __attribute__ ((bitwidth(808))) uint808;
typedef unsigned int __attribute__ ((bitwidth(809))) uint809;
typedef unsigned int __attribute__ ((bitwidth(810))) uint810;
typedef unsigned int __attribute__ ((bitwidth(811))) uint811;
typedef unsigned int __attribute__ ((bitwidth(812))) uint812;
typedef unsigned int __attribute__ ((bitwidth(813))) uint813;
typedef unsigned int __attribute__ ((bitwidth(814))) uint814;
typedef unsigned int __attribute__ ((bitwidth(815))) uint815;
typedef unsigned int __attribute__ ((bitwidth(816))) uint816;
typedef unsigned int __attribute__ ((bitwidth(817))) uint817;
typedef unsigned int __attribute__ ((bitwidth(818))) uint818;
typedef unsigned int __attribute__ ((bitwidth(819))) uint819;
typedef unsigned int __attribute__ ((bitwidth(820))) uint820;
typedef unsigned int __attribute__ ((bitwidth(821))) uint821;
typedef unsigned int __attribute__ ((bitwidth(822))) uint822;
typedef unsigned int __attribute__ ((bitwidth(823))) uint823;
typedef unsigned int __attribute__ ((bitwidth(824))) uint824;
typedef unsigned int __attribute__ ((bitwidth(825))) uint825;
typedef unsigned int __attribute__ ((bitwidth(826))) uint826;
typedef unsigned int __attribute__ ((bitwidth(827))) uint827;
typedef unsigned int __attribute__ ((bitwidth(828))) uint828;
typedef unsigned int __attribute__ ((bitwidth(829))) uint829;
typedef unsigned int __attribute__ ((bitwidth(830))) uint830;
typedef unsigned int __attribute__ ((bitwidth(831))) uint831;
typedef unsigned int __attribute__ ((bitwidth(832))) uint832;
typedef unsigned int __attribute__ ((bitwidth(833))) uint833;
typedef unsigned int __attribute__ ((bitwidth(834))) uint834;
typedef unsigned int __attribute__ ((bitwidth(835))) uint835;
typedef unsigned int __attribute__ ((bitwidth(836))) uint836;
typedef unsigned int __attribute__ ((bitwidth(837))) uint837;
typedef unsigned int __attribute__ ((bitwidth(838))) uint838;
typedef unsigned int __attribute__ ((bitwidth(839))) uint839;
typedef unsigned int __attribute__ ((bitwidth(840))) uint840;
typedef unsigned int __attribute__ ((bitwidth(841))) uint841;
typedef unsigned int __attribute__ ((bitwidth(842))) uint842;
typedef unsigned int __attribute__ ((bitwidth(843))) uint843;
typedef unsigned int __attribute__ ((bitwidth(844))) uint844;
typedef unsigned int __attribute__ ((bitwidth(845))) uint845;
typedef unsigned int __attribute__ ((bitwidth(846))) uint846;
typedef unsigned int __attribute__ ((bitwidth(847))) uint847;
typedef unsigned int __attribute__ ((bitwidth(848))) uint848;
typedef unsigned int __attribute__ ((bitwidth(849))) uint849;
typedef unsigned int __attribute__ ((bitwidth(850))) uint850;
typedef unsigned int __attribute__ ((bitwidth(851))) uint851;
typedef unsigned int __attribute__ ((bitwidth(852))) uint852;
typedef unsigned int __attribute__ ((bitwidth(853))) uint853;
typedef unsigned int __attribute__ ((bitwidth(854))) uint854;
typedef unsigned int __attribute__ ((bitwidth(855))) uint855;
typedef unsigned int __attribute__ ((bitwidth(856))) uint856;
typedef unsigned int __attribute__ ((bitwidth(857))) uint857;
typedef unsigned int __attribute__ ((bitwidth(858))) uint858;
typedef unsigned int __attribute__ ((bitwidth(859))) uint859;
typedef unsigned int __attribute__ ((bitwidth(860))) uint860;
typedef unsigned int __attribute__ ((bitwidth(861))) uint861;
typedef unsigned int __attribute__ ((bitwidth(862))) uint862;
typedef unsigned int __attribute__ ((bitwidth(863))) uint863;
typedef unsigned int __attribute__ ((bitwidth(864))) uint864;
typedef unsigned int __attribute__ ((bitwidth(865))) uint865;
typedef unsigned int __attribute__ ((bitwidth(866))) uint866;
typedef unsigned int __attribute__ ((bitwidth(867))) uint867;
typedef unsigned int __attribute__ ((bitwidth(868))) uint868;
typedef unsigned int __attribute__ ((bitwidth(869))) uint869;
typedef unsigned int __attribute__ ((bitwidth(870))) uint870;
typedef unsigned int __attribute__ ((bitwidth(871))) uint871;
typedef unsigned int __attribute__ ((bitwidth(872))) uint872;
typedef unsigned int __attribute__ ((bitwidth(873))) uint873;
typedef unsigned int __attribute__ ((bitwidth(874))) uint874;
typedef unsigned int __attribute__ ((bitwidth(875))) uint875;
typedef unsigned int __attribute__ ((bitwidth(876))) uint876;
typedef unsigned int __attribute__ ((bitwidth(877))) uint877;
typedef unsigned int __attribute__ ((bitwidth(878))) uint878;
typedef unsigned int __attribute__ ((bitwidth(879))) uint879;
typedef unsigned int __attribute__ ((bitwidth(880))) uint880;
typedef unsigned int __attribute__ ((bitwidth(881))) uint881;
typedef unsigned int __attribute__ ((bitwidth(882))) uint882;
typedef unsigned int __attribute__ ((bitwidth(883))) uint883;
typedef unsigned int __attribute__ ((bitwidth(884))) uint884;
typedef unsigned int __attribute__ ((bitwidth(885))) uint885;
typedef unsigned int __attribute__ ((bitwidth(886))) uint886;
typedef unsigned int __attribute__ ((bitwidth(887))) uint887;
typedef unsigned int __attribute__ ((bitwidth(888))) uint888;
typedef unsigned int __attribute__ ((bitwidth(889))) uint889;
typedef unsigned int __attribute__ ((bitwidth(890))) uint890;
typedef unsigned int __attribute__ ((bitwidth(891))) uint891;
typedef unsigned int __attribute__ ((bitwidth(892))) uint892;
typedef unsigned int __attribute__ ((bitwidth(893))) uint893;
typedef unsigned int __attribute__ ((bitwidth(894))) uint894;
typedef unsigned int __attribute__ ((bitwidth(895))) uint895;
typedef unsigned int __attribute__ ((bitwidth(896))) uint896;
typedef unsigned int __attribute__ ((bitwidth(897))) uint897;
typedef unsigned int __attribute__ ((bitwidth(898))) uint898;
typedef unsigned int __attribute__ ((bitwidth(899))) uint899;
typedef unsigned int __attribute__ ((bitwidth(900))) uint900;
typedef unsigned int __attribute__ ((bitwidth(901))) uint901;
typedef unsigned int __attribute__ ((bitwidth(902))) uint902;
typedef unsigned int __attribute__ ((bitwidth(903))) uint903;
typedef unsigned int __attribute__ ((bitwidth(904))) uint904;
typedef unsigned int __attribute__ ((bitwidth(905))) uint905;
typedef unsigned int __attribute__ ((bitwidth(906))) uint906;
typedef unsigned int __attribute__ ((bitwidth(907))) uint907;
typedef unsigned int __attribute__ ((bitwidth(908))) uint908;
typedef unsigned int __attribute__ ((bitwidth(909))) uint909;
typedef unsigned int __attribute__ ((bitwidth(910))) uint910;
typedef unsigned int __attribute__ ((bitwidth(911))) uint911;
typedef unsigned int __attribute__ ((bitwidth(912))) uint912;
typedef unsigned int __attribute__ ((bitwidth(913))) uint913;
typedef unsigned int __attribute__ ((bitwidth(914))) uint914;
typedef unsigned int __attribute__ ((bitwidth(915))) uint915;
typedef unsigned int __attribute__ ((bitwidth(916))) uint916;
typedef unsigned int __attribute__ ((bitwidth(917))) uint917;
typedef unsigned int __attribute__ ((bitwidth(918))) uint918;
typedef unsigned int __attribute__ ((bitwidth(919))) uint919;
typedef unsigned int __attribute__ ((bitwidth(920))) uint920;
typedef unsigned int __attribute__ ((bitwidth(921))) uint921;
typedef unsigned int __attribute__ ((bitwidth(922))) uint922;
typedef unsigned int __attribute__ ((bitwidth(923))) uint923;
typedef unsigned int __attribute__ ((bitwidth(924))) uint924;
typedef unsigned int __attribute__ ((bitwidth(925))) uint925;
typedef unsigned int __attribute__ ((bitwidth(926))) uint926;
typedef unsigned int __attribute__ ((bitwidth(927))) uint927;
typedef unsigned int __attribute__ ((bitwidth(928))) uint928;
typedef unsigned int __attribute__ ((bitwidth(929))) uint929;
typedef unsigned int __attribute__ ((bitwidth(930))) uint930;
typedef unsigned int __attribute__ ((bitwidth(931))) uint931;
typedef unsigned int __attribute__ ((bitwidth(932))) uint932;
typedef unsigned int __attribute__ ((bitwidth(933))) uint933;
typedef unsigned int __attribute__ ((bitwidth(934))) uint934;
typedef unsigned int __attribute__ ((bitwidth(935))) uint935;
typedef unsigned int __attribute__ ((bitwidth(936))) uint936;
typedef unsigned int __attribute__ ((bitwidth(937))) uint937;
typedef unsigned int __attribute__ ((bitwidth(938))) uint938;
typedef unsigned int __attribute__ ((bitwidth(939))) uint939;
typedef unsigned int __attribute__ ((bitwidth(940))) uint940;
typedef unsigned int __attribute__ ((bitwidth(941))) uint941;
typedef unsigned int __attribute__ ((bitwidth(942))) uint942;
typedef unsigned int __attribute__ ((bitwidth(943))) uint943;
typedef unsigned int __attribute__ ((bitwidth(944))) uint944;
typedef unsigned int __attribute__ ((bitwidth(945))) uint945;
typedef unsigned int __attribute__ ((bitwidth(946))) uint946;
typedef unsigned int __attribute__ ((bitwidth(947))) uint947;
typedef unsigned int __attribute__ ((bitwidth(948))) uint948;
typedef unsigned int __attribute__ ((bitwidth(949))) uint949;
typedef unsigned int __attribute__ ((bitwidth(950))) uint950;
typedef unsigned int __attribute__ ((bitwidth(951))) uint951;
typedef unsigned int __attribute__ ((bitwidth(952))) uint952;
typedef unsigned int __attribute__ ((bitwidth(953))) uint953;
typedef unsigned int __attribute__ ((bitwidth(954))) uint954;
typedef unsigned int __attribute__ ((bitwidth(955))) uint955;
typedef unsigned int __attribute__ ((bitwidth(956))) uint956;
typedef unsigned int __attribute__ ((bitwidth(957))) uint957;
typedef unsigned int __attribute__ ((bitwidth(958))) uint958;
typedef unsigned int __attribute__ ((bitwidth(959))) uint959;
typedef unsigned int __attribute__ ((bitwidth(960))) uint960;
typedef unsigned int __attribute__ ((bitwidth(961))) uint961;
typedef unsigned int __attribute__ ((bitwidth(962))) uint962;
typedef unsigned int __attribute__ ((bitwidth(963))) uint963;
typedef unsigned int __attribute__ ((bitwidth(964))) uint964;
typedef unsigned int __attribute__ ((bitwidth(965))) uint965;
typedef unsigned int __attribute__ ((bitwidth(966))) uint966;
typedef unsigned int __attribute__ ((bitwidth(967))) uint967;
typedef unsigned int __attribute__ ((bitwidth(968))) uint968;
typedef unsigned int __attribute__ ((bitwidth(969))) uint969;
typedef unsigned int __attribute__ ((bitwidth(970))) uint970;
typedef unsigned int __attribute__ ((bitwidth(971))) uint971;
typedef unsigned int __attribute__ ((bitwidth(972))) uint972;
typedef unsigned int __attribute__ ((bitwidth(973))) uint973;
typedef unsigned int __attribute__ ((bitwidth(974))) uint974;
typedef unsigned int __attribute__ ((bitwidth(975))) uint975;
typedef unsigned int __attribute__ ((bitwidth(976))) uint976;
typedef unsigned int __attribute__ ((bitwidth(977))) uint977;
typedef unsigned int __attribute__ ((bitwidth(978))) uint978;
typedef unsigned int __attribute__ ((bitwidth(979))) uint979;
typedef unsigned int __attribute__ ((bitwidth(980))) uint980;
typedef unsigned int __attribute__ ((bitwidth(981))) uint981;
typedef unsigned int __attribute__ ((bitwidth(982))) uint982;
typedef unsigned int __attribute__ ((bitwidth(983))) uint983;
typedef unsigned int __attribute__ ((bitwidth(984))) uint984;
typedef unsigned int __attribute__ ((bitwidth(985))) uint985;
typedef unsigned int __attribute__ ((bitwidth(986))) uint986;
typedef unsigned int __attribute__ ((bitwidth(987))) uint987;
typedef unsigned int __attribute__ ((bitwidth(988))) uint988;
typedef unsigned int __attribute__ ((bitwidth(989))) uint989;
typedef unsigned int __attribute__ ((bitwidth(990))) uint990;
typedef unsigned int __attribute__ ((bitwidth(991))) uint991;
typedef unsigned int __attribute__ ((bitwidth(992))) uint992;
typedef unsigned int __attribute__ ((bitwidth(993))) uint993;
typedef unsigned int __attribute__ ((bitwidth(994))) uint994;
typedef unsigned int __attribute__ ((bitwidth(995))) uint995;
typedef unsigned int __attribute__ ((bitwidth(996))) uint996;
typedef unsigned int __attribute__ ((bitwidth(997))) uint997;
typedef unsigned int __attribute__ ((bitwidth(998))) uint998;
typedef unsigned int __attribute__ ((bitwidth(999))) uint999;
typedef unsigned int __attribute__ ((bitwidth(1000))) uint1000;
typedef unsigned int __attribute__ ((bitwidth(1001))) uint1001;
typedef unsigned int __attribute__ ((bitwidth(1002))) uint1002;
typedef unsigned int __attribute__ ((bitwidth(1003))) uint1003;
typedef unsigned int __attribute__ ((bitwidth(1004))) uint1004;
typedef unsigned int __attribute__ ((bitwidth(1005))) uint1005;
typedef unsigned int __attribute__ ((bitwidth(1006))) uint1006;
typedef unsigned int __attribute__ ((bitwidth(1007))) uint1007;
typedef unsigned int __attribute__ ((bitwidth(1008))) uint1008;
typedef unsigned int __attribute__ ((bitwidth(1009))) uint1009;
typedef unsigned int __attribute__ ((bitwidth(1010))) uint1010;
typedef unsigned int __attribute__ ((bitwidth(1011))) uint1011;
typedef unsigned int __attribute__ ((bitwidth(1012))) uint1012;
typedef unsigned int __attribute__ ((bitwidth(1013))) uint1013;
typedef unsigned int __attribute__ ((bitwidth(1014))) uint1014;
typedef unsigned int __attribute__ ((bitwidth(1015))) uint1015;
typedef unsigned int __attribute__ ((bitwidth(1016))) uint1016;
typedef unsigned int __attribute__ ((bitwidth(1017))) uint1017;
typedef unsigned int __attribute__ ((bitwidth(1018))) uint1018;
typedef unsigned int __attribute__ ((bitwidth(1019))) uint1019;
typedef unsigned int __attribute__ ((bitwidth(1020))) uint1020;
typedef unsigned int __attribute__ ((bitwidth(1021))) uint1021;
typedef unsigned int __attribute__ ((bitwidth(1022))) uint1022;
typedef unsigned int __attribute__ ((bitwidth(1023))) uint1023;
typedef unsigned int __attribute__ ((bitwidth(1024))) uint1024;
# 109 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h" 2
# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt_ext.def" 1


typedef unsigned int __attribute__ ((bitwidth(1025))) uint1025;
typedef unsigned int __attribute__ ((bitwidth(1026))) uint1026;
typedef unsigned int __attribute__ ((bitwidth(1027))) uint1027;
typedef unsigned int __attribute__ ((bitwidth(1028))) uint1028;
typedef unsigned int __attribute__ ((bitwidth(1029))) uint1029;
typedef unsigned int __attribute__ ((bitwidth(1030))) uint1030;
typedef unsigned int __attribute__ ((bitwidth(1031))) uint1031;
typedef unsigned int __attribute__ ((bitwidth(1032))) uint1032;
typedef unsigned int __attribute__ ((bitwidth(1033))) uint1033;
typedef unsigned int __attribute__ ((bitwidth(1034))) uint1034;
typedef unsigned int __attribute__ ((bitwidth(1035))) uint1035;
typedef unsigned int __attribute__ ((bitwidth(1036))) uint1036;
typedef unsigned int __attribute__ ((bitwidth(1037))) uint1037;
typedef unsigned int __attribute__ ((bitwidth(1038))) uint1038;
typedef unsigned int __attribute__ ((bitwidth(1039))) uint1039;
typedef unsigned int __attribute__ ((bitwidth(1040))) uint1040;
typedef unsigned int __attribute__ ((bitwidth(1041))) uint1041;
typedef unsigned int __attribute__ ((bitwidth(1042))) uint1042;
typedef unsigned int __attribute__ ((bitwidth(1043))) uint1043;
typedef unsigned int __attribute__ ((bitwidth(1044))) uint1044;
typedef unsigned int __attribute__ ((bitwidth(1045))) uint1045;
typedef unsigned int __attribute__ ((bitwidth(1046))) uint1046;
typedef unsigned int __attribute__ ((bitwidth(1047))) uint1047;
typedef unsigned int __attribute__ ((bitwidth(1048))) uint1048;
typedef unsigned int __attribute__ ((bitwidth(1049))) uint1049;
typedef unsigned int __attribute__ ((bitwidth(1050))) uint1050;
typedef unsigned int __attribute__ ((bitwidth(1051))) uint1051;
typedef unsigned int __attribute__ ((bitwidth(1052))) uint1052;
typedef unsigned int __attribute__ ((bitwidth(1053))) uint1053;
typedef unsigned int __attribute__ ((bitwidth(1054))) uint1054;
typedef unsigned int __attribute__ ((bitwidth(1055))) uint1055;
typedef unsigned int __attribute__ ((bitwidth(1056))) uint1056;
typedef unsigned int __attribute__ ((bitwidth(1057))) uint1057;
typedef unsigned int __attribute__ ((bitwidth(1058))) uint1058;
typedef unsigned int __attribute__ ((bitwidth(1059))) uint1059;
typedef unsigned int __attribute__ ((bitwidth(1060))) uint1060;
typedef unsigned int __attribute__ ((bitwidth(1061))) uint1061;
typedef unsigned int __attribute__ ((bitwidth(1062))) uint1062;
typedef unsigned int __attribute__ ((bitwidth(1063))) uint1063;
typedef unsigned int __attribute__ ((bitwidth(1064))) uint1064;
typedef unsigned int __attribute__ ((bitwidth(1065))) uint1065;
typedef unsigned int __attribute__ ((bitwidth(1066))) uint1066;
typedef unsigned int __attribute__ ((bitwidth(1067))) uint1067;
typedef unsigned int __attribute__ ((bitwidth(1068))) uint1068;
typedef unsigned int __attribute__ ((bitwidth(1069))) uint1069;
typedef unsigned int __attribute__ ((bitwidth(1070))) uint1070;
typedef unsigned int __attribute__ ((bitwidth(1071))) uint1071;
typedef unsigned int __attribute__ ((bitwidth(1072))) uint1072;
typedef unsigned int __attribute__ ((bitwidth(1073))) uint1073;
typedef unsigned int __attribute__ ((bitwidth(1074))) uint1074;
typedef unsigned int __attribute__ ((bitwidth(1075))) uint1075;
typedef unsigned int __attribute__ ((bitwidth(1076))) uint1076;
typedef unsigned int __attribute__ ((bitwidth(1077))) uint1077;
typedef unsigned int __attribute__ ((bitwidth(1078))) uint1078;
typedef unsigned int __attribute__ ((bitwidth(1079))) uint1079;
typedef unsigned int __attribute__ ((bitwidth(1080))) uint1080;
typedef unsigned int __attribute__ ((bitwidth(1081))) uint1081;
typedef unsigned int __attribute__ ((bitwidth(1082))) uint1082;
typedef unsigned int __attribute__ ((bitwidth(1083))) uint1083;
typedef unsigned int __attribute__ ((bitwidth(1084))) uint1084;
typedef unsigned int __attribute__ ((bitwidth(1085))) uint1085;
typedef unsigned int __attribute__ ((bitwidth(1086))) uint1086;
typedef unsigned int __attribute__ ((bitwidth(1087))) uint1087;
typedef unsigned int __attribute__ ((bitwidth(1088))) uint1088;
typedef unsigned int __attribute__ ((bitwidth(1089))) uint1089;
typedef unsigned int __attribute__ ((bitwidth(1090))) uint1090;
typedef unsigned int __attribute__ ((bitwidth(1091))) uint1091;
typedef unsigned int __attribute__ ((bitwidth(1092))) uint1092;
typedef unsigned int __attribute__ ((bitwidth(1093))) uint1093;
typedef unsigned int __attribute__ ((bitwidth(1094))) uint1094;
typedef unsigned int __attribute__ ((bitwidth(1095))) uint1095;
typedef unsigned int __attribute__ ((bitwidth(1096))) uint1096;
typedef unsigned int __attribute__ ((bitwidth(1097))) uint1097;
typedef unsigned int __attribute__ ((bitwidth(1098))) uint1098;
typedef unsigned int __attribute__ ((bitwidth(1099))) uint1099;
typedef unsigned int __attribute__ ((bitwidth(1100))) uint1100;
typedef unsigned int __attribute__ ((bitwidth(1101))) uint1101;
typedef unsigned int __attribute__ ((bitwidth(1102))) uint1102;
typedef unsigned int __attribute__ ((bitwidth(1103))) uint1103;
typedef unsigned int __attribute__ ((bitwidth(1104))) uint1104;
typedef unsigned int __attribute__ ((bitwidth(1105))) uint1105;
typedef unsigned int __attribute__ ((bitwidth(1106))) uint1106;
typedef unsigned int __attribute__ ((bitwidth(1107))) uint1107;
typedef unsigned int __attribute__ ((bitwidth(1108))) uint1108;
typedef unsigned int __attribute__ ((bitwidth(1109))) uint1109;
typedef unsigned int __attribute__ ((bitwidth(1110))) uint1110;
typedef unsigned int __attribute__ ((bitwidth(1111))) uint1111;
typedef unsigned int __attribute__ ((bitwidth(1112))) uint1112;
typedef unsigned int __attribute__ ((bitwidth(1113))) uint1113;
typedef unsigned int __attribute__ ((bitwidth(1114))) uint1114;
typedef unsigned int __attribute__ ((bitwidth(1115))) uint1115;
typedef unsigned int __attribute__ ((bitwidth(1116))) uint1116;
typedef unsigned int __attribute__ ((bitwidth(1117))) uint1117;
typedef unsigned int __attribute__ ((bitwidth(1118))) uint1118;
typedef unsigned int __attribute__ ((bitwidth(1119))) uint1119;
typedef unsigned int __attribute__ ((bitwidth(1120))) uint1120;
typedef unsigned int __attribute__ ((bitwidth(1121))) uint1121;
typedef unsigned int __attribute__ ((bitwidth(1122))) uint1122;
typedef unsigned int __attribute__ ((bitwidth(1123))) uint1123;
typedef unsigned int __attribute__ ((bitwidth(1124))) uint1124;
typedef unsigned int __attribute__ ((bitwidth(1125))) uint1125;
typedef unsigned int __attribute__ ((bitwidth(1126))) uint1126;
typedef unsigned int __attribute__ ((bitwidth(1127))) uint1127;
typedef unsigned int __attribute__ ((bitwidth(1128))) uint1128;
typedef unsigned int __attribute__ ((bitwidth(1129))) uint1129;
typedef unsigned int __attribute__ ((bitwidth(1130))) uint1130;
typedef unsigned int __attribute__ ((bitwidth(1131))) uint1131;
typedef unsigned int __attribute__ ((bitwidth(1132))) uint1132;
typedef unsigned int __attribute__ ((bitwidth(1133))) uint1133;
typedef unsigned int __attribute__ ((bitwidth(1134))) uint1134;
typedef unsigned int __attribute__ ((bitwidth(1135))) uint1135;
typedef unsigned int __attribute__ ((bitwidth(1136))) uint1136;
typedef unsigned int __attribute__ ((bitwidth(1137))) uint1137;
typedef unsigned int __attribute__ ((bitwidth(1138))) uint1138;
typedef unsigned int __attribute__ ((bitwidth(1139))) uint1139;
typedef unsigned int __attribute__ ((bitwidth(1140))) uint1140;
typedef unsigned int __attribute__ ((bitwidth(1141))) uint1141;
typedef unsigned int __attribute__ ((bitwidth(1142))) uint1142;
typedef unsigned int __attribute__ ((bitwidth(1143))) uint1143;
typedef unsigned int __attribute__ ((bitwidth(1144))) uint1144;
typedef unsigned int __attribute__ ((bitwidth(1145))) uint1145;
typedef unsigned int __attribute__ ((bitwidth(1146))) uint1146;
typedef unsigned int __attribute__ ((bitwidth(1147))) uint1147;
typedef unsigned int __attribute__ ((bitwidth(1148))) uint1148;
typedef unsigned int __attribute__ ((bitwidth(1149))) uint1149;
typedef unsigned int __attribute__ ((bitwidth(1150))) uint1150;
typedef unsigned int __attribute__ ((bitwidth(1151))) uint1151;
typedef unsigned int __attribute__ ((bitwidth(1152))) uint1152;
typedef unsigned int __attribute__ ((bitwidth(1153))) uint1153;
typedef unsigned int __attribute__ ((bitwidth(1154))) uint1154;
typedef unsigned int __attribute__ ((bitwidth(1155))) uint1155;
typedef unsigned int __attribute__ ((bitwidth(1156))) uint1156;
typedef unsigned int __attribute__ ((bitwidth(1157))) uint1157;
typedef unsigned int __attribute__ ((bitwidth(1158))) uint1158;
typedef unsigned int __attribute__ ((bitwidth(1159))) uint1159;
typedef unsigned int __attribute__ ((bitwidth(1160))) uint1160;
typedef unsigned int __attribute__ ((bitwidth(1161))) uint1161;
typedef unsigned int __attribute__ ((bitwidth(1162))) uint1162;
typedef unsigned int __attribute__ ((bitwidth(1163))) uint1163;
typedef unsigned int __attribute__ ((bitwidth(1164))) uint1164;
typedef unsigned int __attribute__ ((bitwidth(1165))) uint1165;
typedef unsigned int __attribute__ ((bitwidth(1166))) uint1166;
typedef unsigned int __attribute__ ((bitwidth(1167))) uint1167;
typedef unsigned int __attribute__ ((bitwidth(1168))) uint1168;
typedef unsigned int __attribute__ ((bitwidth(1169))) uint1169;
typedef unsigned int __attribute__ ((bitwidth(1170))) uint1170;
typedef unsigned int __attribute__ ((bitwidth(1171))) uint1171;
typedef unsigned int __attribute__ ((bitwidth(1172))) uint1172;
typedef unsigned int __attribute__ ((bitwidth(1173))) uint1173;
typedef unsigned int __attribute__ ((bitwidth(1174))) uint1174;
typedef unsigned int __attribute__ ((bitwidth(1175))) uint1175;
typedef unsigned int __attribute__ ((bitwidth(1176))) uint1176;
typedef unsigned int __attribute__ ((bitwidth(1177))) uint1177;
typedef unsigned int __attribute__ ((bitwidth(1178))) uint1178;
typedef unsigned int __attribute__ ((bitwidth(1179))) uint1179;
typedef unsigned int __attribute__ ((bitwidth(1180))) uint1180;
typedef unsigned int __attribute__ ((bitwidth(1181))) uint1181;
typedef unsigned int __attribute__ ((bitwidth(1182))) uint1182;
typedef unsigned int __attribute__ ((bitwidth(1183))) uint1183;
typedef unsigned int __attribute__ ((bitwidth(1184))) uint1184;
typedef unsigned int __attribute__ ((bitwidth(1185))) uint1185;
typedef unsigned int __attribute__ ((bitwidth(1186))) uint1186;
typedef unsigned int __attribute__ ((bitwidth(1187))) uint1187;
typedef unsigned int __attribute__ ((bitwidth(1188))) uint1188;
typedef unsigned int __attribute__ ((bitwidth(1189))) uint1189;
typedef unsigned int __attribute__ ((bitwidth(1190))) uint1190;
typedef unsigned int __attribute__ ((bitwidth(1191))) uint1191;
typedef unsigned int __attribute__ ((bitwidth(1192))) uint1192;
typedef unsigned int __attribute__ ((bitwidth(1193))) uint1193;
typedef unsigned int __attribute__ ((bitwidth(1194))) uint1194;
typedef unsigned int __attribute__ ((bitwidth(1195))) uint1195;
typedef unsigned int __attribute__ ((bitwidth(1196))) uint1196;
typedef unsigned int __attribute__ ((bitwidth(1197))) uint1197;
typedef unsigned int __attribute__ ((bitwidth(1198))) uint1198;
typedef unsigned int __attribute__ ((bitwidth(1199))) uint1199;
typedef unsigned int __attribute__ ((bitwidth(1200))) uint1200;
typedef unsigned int __attribute__ ((bitwidth(1201))) uint1201;
typedef unsigned int __attribute__ ((bitwidth(1202))) uint1202;
typedef unsigned int __attribute__ ((bitwidth(1203))) uint1203;
typedef unsigned int __attribute__ ((bitwidth(1204))) uint1204;
typedef unsigned int __attribute__ ((bitwidth(1205))) uint1205;
typedef unsigned int __attribute__ ((bitwidth(1206))) uint1206;
typedef unsigned int __attribute__ ((bitwidth(1207))) uint1207;
typedef unsigned int __attribute__ ((bitwidth(1208))) uint1208;
typedef unsigned int __attribute__ ((bitwidth(1209))) uint1209;
typedef unsigned int __attribute__ ((bitwidth(1210))) uint1210;
typedef unsigned int __attribute__ ((bitwidth(1211))) uint1211;
typedef unsigned int __attribute__ ((bitwidth(1212))) uint1212;
typedef unsigned int __attribute__ ((bitwidth(1213))) uint1213;
typedef unsigned int __attribute__ ((bitwidth(1214))) uint1214;
typedef unsigned int __attribute__ ((bitwidth(1215))) uint1215;
typedef unsigned int __attribute__ ((bitwidth(1216))) uint1216;
typedef unsigned int __attribute__ ((bitwidth(1217))) uint1217;
typedef unsigned int __attribute__ ((bitwidth(1218))) uint1218;
typedef unsigned int __attribute__ ((bitwidth(1219))) uint1219;
typedef unsigned int __attribute__ ((bitwidth(1220))) uint1220;
typedef unsigned int __attribute__ ((bitwidth(1221))) uint1221;
typedef unsigned int __attribute__ ((bitwidth(1222))) uint1222;
typedef unsigned int __attribute__ ((bitwidth(1223))) uint1223;
typedef unsigned int __attribute__ ((bitwidth(1224))) uint1224;
typedef unsigned int __attribute__ ((bitwidth(1225))) uint1225;
typedef unsigned int __attribute__ ((bitwidth(1226))) uint1226;
typedef unsigned int __attribute__ ((bitwidth(1227))) uint1227;
typedef unsigned int __attribute__ ((bitwidth(1228))) uint1228;
typedef unsigned int __attribute__ ((bitwidth(1229))) uint1229;
typedef unsigned int __attribute__ ((bitwidth(1230))) uint1230;
typedef unsigned int __attribute__ ((bitwidth(1231))) uint1231;
typedef unsigned int __attribute__ ((bitwidth(1232))) uint1232;
typedef unsigned int __attribute__ ((bitwidth(1233))) uint1233;
typedef unsigned int __attribute__ ((bitwidth(1234))) uint1234;
typedef unsigned int __attribute__ ((bitwidth(1235))) uint1235;
typedef unsigned int __attribute__ ((bitwidth(1236))) uint1236;
typedef unsigned int __attribute__ ((bitwidth(1237))) uint1237;
typedef unsigned int __attribute__ ((bitwidth(1238))) uint1238;
typedef unsigned int __attribute__ ((bitwidth(1239))) uint1239;
typedef unsigned int __attribute__ ((bitwidth(1240))) uint1240;
typedef unsigned int __attribute__ ((bitwidth(1241))) uint1241;
typedef unsigned int __attribute__ ((bitwidth(1242))) uint1242;
typedef unsigned int __attribute__ ((bitwidth(1243))) uint1243;
typedef unsigned int __attribute__ ((bitwidth(1244))) uint1244;
typedef unsigned int __attribute__ ((bitwidth(1245))) uint1245;
typedef unsigned int __attribute__ ((bitwidth(1246))) uint1246;
typedef unsigned int __attribute__ ((bitwidth(1247))) uint1247;
typedef unsigned int __attribute__ ((bitwidth(1248))) uint1248;
typedef unsigned int __attribute__ ((bitwidth(1249))) uint1249;
typedef unsigned int __attribute__ ((bitwidth(1250))) uint1250;
typedef unsigned int __attribute__ ((bitwidth(1251))) uint1251;
typedef unsigned int __attribute__ ((bitwidth(1252))) uint1252;
typedef unsigned int __attribute__ ((bitwidth(1253))) uint1253;
typedef unsigned int __attribute__ ((bitwidth(1254))) uint1254;
typedef unsigned int __attribute__ ((bitwidth(1255))) uint1255;
typedef unsigned int __attribute__ ((bitwidth(1256))) uint1256;
typedef unsigned int __attribute__ ((bitwidth(1257))) uint1257;
typedef unsigned int __attribute__ ((bitwidth(1258))) uint1258;
typedef unsigned int __attribute__ ((bitwidth(1259))) uint1259;
typedef unsigned int __attribute__ ((bitwidth(1260))) uint1260;
typedef unsigned int __attribute__ ((bitwidth(1261))) uint1261;
typedef unsigned int __attribute__ ((bitwidth(1262))) uint1262;
typedef unsigned int __attribute__ ((bitwidth(1263))) uint1263;
typedef unsigned int __attribute__ ((bitwidth(1264))) uint1264;
typedef unsigned int __attribute__ ((bitwidth(1265))) uint1265;
typedef unsigned int __attribute__ ((bitwidth(1266))) uint1266;
typedef unsigned int __attribute__ ((bitwidth(1267))) uint1267;
typedef unsigned int __attribute__ ((bitwidth(1268))) uint1268;
typedef unsigned int __attribute__ ((bitwidth(1269))) uint1269;
typedef unsigned int __attribute__ ((bitwidth(1270))) uint1270;
typedef unsigned int __attribute__ ((bitwidth(1271))) uint1271;
typedef unsigned int __attribute__ ((bitwidth(1272))) uint1272;
typedef unsigned int __attribute__ ((bitwidth(1273))) uint1273;
typedef unsigned int __attribute__ ((bitwidth(1274))) uint1274;
typedef unsigned int __attribute__ ((bitwidth(1275))) uint1275;
typedef unsigned int __attribute__ ((bitwidth(1276))) uint1276;
typedef unsigned int __attribute__ ((bitwidth(1277))) uint1277;
typedef unsigned int __attribute__ ((bitwidth(1278))) uint1278;
typedef unsigned int __attribute__ ((bitwidth(1279))) uint1279;
typedef unsigned int __attribute__ ((bitwidth(1280))) uint1280;
typedef unsigned int __attribute__ ((bitwidth(1281))) uint1281;
typedef unsigned int __attribute__ ((bitwidth(1282))) uint1282;
typedef unsigned int __attribute__ ((bitwidth(1283))) uint1283;
typedef unsigned int __attribute__ ((bitwidth(1284))) uint1284;
typedef unsigned int __attribute__ ((bitwidth(1285))) uint1285;
typedef unsigned int __attribute__ ((bitwidth(1286))) uint1286;
typedef unsigned int __attribute__ ((bitwidth(1287))) uint1287;
typedef unsigned int __attribute__ ((bitwidth(1288))) uint1288;
typedef unsigned int __attribute__ ((bitwidth(1289))) uint1289;
typedef unsigned int __attribute__ ((bitwidth(1290))) uint1290;
typedef unsigned int __attribute__ ((bitwidth(1291))) uint1291;
typedef unsigned int __attribute__ ((bitwidth(1292))) uint1292;
typedef unsigned int __attribute__ ((bitwidth(1293))) uint1293;
typedef unsigned int __attribute__ ((bitwidth(1294))) uint1294;
typedef unsigned int __attribute__ ((bitwidth(1295))) uint1295;
typedef unsigned int __attribute__ ((bitwidth(1296))) uint1296;
typedef unsigned int __attribute__ ((bitwidth(1297))) uint1297;
typedef unsigned int __attribute__ ((bitwidth(1298))) uint1298;
typedef unsigned int __attribute__ ((bitwidth(1299))) uint1299;
typedef unsigned int __attribute__ ((bitwidth(1300))) uint1300;
typedef unsigned int __attribute__ ((bitwidth(1301))) uint1301;
typedef unsigned int __attribute__ ((bitwidth(1302))) uint1302;
typedef unsigned int __attribute__ ((bitwidth(1303))) uint1303;
typedef unsigned int __attribute__ ((bitwidth(1304))) uint1304;
typedef unsigned int __attribute__ ((bitwidth(1305))) uint1305;
typedef unsigned int __attribute__ ((bitwidth(1306))) uint1306;
typedef unsigned int __attribute__ ((bitwidth(1307))) uint1307;
typedef unsigned int __attribute__ ((bitwidth(1308))) uint1308;
typedef unsigned int __attribute__ ((bitwidth(1309))) uint1309;
typedef unsigned int __attribute__ ((bitwidth(1310))) uint1310;
typedef unsigned int __attribute__ ((bitwidth(1311))) uint1311;
typedef unsigned int __attribute__ ((bitwidth(1312))) uint1312;
typedef unsigned int __attribute__ ((bitwidth(1313))) uint1313;
typedef unsigned int __attribute__ ((bitwidth(1314))) uint1314;
typedef unsigned int __attribute__ ((bitwidth(1315))) uint1315;
typedef unsigned int __attribute__ ((bitwidth(1316))) uint1316;
typedef unsigned int __attribute__ ((bitwidth(1317))) uint1317;
typedef unsigned int __attribute__ ((bitwidth(1318))) uint1318;
typedef unsigned int __attribute__ ((bitwidth(1319))) uint1319;
typedef unsigned int __attribute__ ((bitwidth(1320))) uint1320;
typedef unsigned int __attribute__ ((bitwidth(1321))) uint1321;
typedef unsigned int __attribute__ ((bitwidth(1322))) uint1322;
typedef unsigned int __attribute__ ((bitwidth(1323))) uint1323;
typedef unsigned int __attribute__ ((bitwidth(1324))) uint1324;
typedef unsigned int __attribute__ ((bitwidth(1325))) uint1325;
typedef unsigned int __attribute__ ((bitwidth(1326))) uint1326;
typedef unsigned int __attribute__ ((bitwidth(1327))) uint1327;
typedef unsigned int __attribute__ ((bitwidth(1328))) uint1328;
typedef unsigned int __attribute__ ((bitwidth(1329))) uint1329;
typedef unsigned int __attribute__ ((bitwidth(1330))) uint1330;
typedef unsigned int __attribute__ ((bitwidth(1331))) uint1331;
typedef unsigned int __attribute__ ((bitwidth(1332))) uint1332;
typedef unsigned int __attribute__ ((bitwidth(1333))) uint1333;
typedef unsigned int __attribute__ ((bitwidth(1334))) uint1334;
typedef unsigned int __attribute__ ((bitwidth(1335))) uint1335;
typedef unsigned int __attribute__ ((bitwidth(1336))) uint1336;
typedef unsigned int __attribute__ ((bitwidth(1337))) uint1337;
typedef unsigned int __attribute__ ((bitwidth(1338))) uint1338;
typedef unsigned int __attribute__ ((bitwidth(1339))) uint1339;
typedef unsigned int __attribute__ ((bitwidth(1340))) uint1340;
typedef unsigned int __attribute__ ((bitwidth(1341))) uint1341;
typedef unsigned int __attribute__ ((bitwidth(1342))) uint1342;
typedef unsigned int __attribute__ ((bitwidth(1343))) uint1343;
typedef unsigned int __attribute__ ((bitwidth(1344))) uint1344;
typedef unsigned int __attribute__ ((bitwidth(1345))) uint1345;
typedef unsigned int __attribute__ ((bitwidth(1346))) uint1346;
typedef unsigned int __attribute__ ((bitwidth(1347))) uint1347;
typedef unsigned int __attribute__ ((bitwidth(1348))) uint1348;
typedef unsigned int __attribute__ ((bitwidth(1349))) uint1349;
typedef unsigned int __attribute__ ((bitwidth(1350))) uint1350;
typedef unsigned int __attribute__ ((bitwidth(1351))) uint1351;
typedef unsigned int __attribute__ ((bitwidth(1352))) uint1352;
typedef unsigned int __attribute__ ((bitwidth(1353))) uint1353;
typedef unsigned int __attribute__ ((bitwidth(1354))) uint1354;
typedef unsigned int __attribute__ ((bitwidth(1355))) uint1355;
typedef unsigned int __attribute__ ((bitwidth(1356))) uint1356;
typedef unsigned int __attribute__ ((bitwidth(1357))) uint1357;
typedef unsigned int __attribute__ ((bitwidth(1358))) uint1358;
typedef unsigned int __attribute__ ((bitwidth(1359))) uint1359;
typedef unsigned int __attribute__ ((bitwidth(1360))) uint1360;
typedef unsigned int __attribute__ ((bitwidth(1361))) uint1361;
typedef unsigned int __attribute__ ((bitwidth(1362))) uint1362;
typedef unsigned int __attribute__ ((bitwidth(1363))) uint1363;
typedef unsigned int __attribute__ ((bitwidth(1364))) uint1364;
typedef unsigned int __attribute__ ((bitwidth(1365))) uint1365;
typedef unsigned int __attribute__ ((bitwidth(1366))) uint1366;
typedef unsigned int __attribute__ ((bitwidth(1367))) uint1367;
typedef unsigned int __attribute__ ((bitwidth(1368))) uint1368;
typedef unsigned int __attribute__ ((bitwidth(1369))) uint1369;
typedef unsigned int __attribute__ ((bitwidth(1370))) uint1370;
typedef unsigned int __attribute__ ((bitwidth(1371))) uint1371;
typedef unsigned int __attribute__ ((bitwidth(1372))) uint1372;
typedef unsigned int __attribute__ ((bitwidth(1373))) uint1373;
typedef unsigned int __attribute__ ((bitwidth(1374))) uint1374;
typedef unsigned int __attribute__ ((bitwidth(1375))) uint1375;
typedef unsigned int __attribute__ ((bitwidth(1376))) uint1376;
typedef unsigned int __attribute__ ((bitwidth(1377))) uint1377;
typedef unsigned int __attribute__ ((bitwidth(1378))) uint1378;
typedef unsigned int __attribute__ ((bitwidth(1379))) uint1379;
typedef unsigned int __attribute__ ((bitwidth(1380))) uint1380;
typedef unsigned int __attribute__ ((bitwidth(1381))) uint1381;
typedef unsigned int __attribute__ ((bitwidth(1382))) uint1382;
typedef unsigned int __attribute__ ((bitwidth(1383))) uint1383;
typedef unsigned int __attribute__ ((bitwidth(1384))) uint1384;
typedef unsigned int __attribute__ ((bitwidth(1385))) uint1385;
typedef unsigned int __attribute__ ((bitwidth(1386))) uint1386;
typedef unsigned int __attribute__ ((bitwidth(1387))) uint1387;
typedef unsigned int __attribute__ ((bitwidth(1388))) uint1388;
typedef unsigned int __attribute__ ((bitwidth(1389))) uint1389;
typedef unsigned int __attribute__ ((bitwidth(1390))) uint1390;
typedef unsigned int __attribute__ ((bitwidth(1391))) uint1391;
typedef unsigned int __attribute__ ((bitwidth(1392))) uint1392;
typedef unsigned int __attribute__ ((bitwidth(1393))) uint1393;
typedef unsigned int __attribute__ ((bitwidth(1394))) uint1394;
typedef unsigned int __attribute__ ((bitwidth(1395))) uint1395;
typedef unsigned int __attribute__ ((bitwidth(1396))) uint1396;
typedef unsigned int __attribute__ ((bitwidth(1397))) uint1397;
typedef unsigned int __attribute__ ((bitwidth(1398))) uint1398;
typedef unsigned int __attribute__ ((bitwidth(1399))) uint1399;
typedef unsigned int __attribute__ ((bitwidth(1400))) uint1400;
typedef unsigned int __attribute__ ((bitwidth(1401))) uint1401;
typedef unsigned int __attribute__ ((bitwidth(1402))) uint1402;
typedef unsigned int __attribute__ ((bitwidth(1403))) uint1403;
typedef unsigned int __attribute__ ((bitwidth(1404))) uint1404;
typedef unsigned int __attribute__ ((bitwidth(1405))) uint1405;
typedef unsigned int __attribute__ ((bitwidth(1406))) uint1406;
typedef unsigned int __attribute__ ((bitwidth(1407))) uint1407;
typedef unsigned int __attribute__ ((bitwidth(1408))) uint1408;
typedef unsigned int __attribute__ ((bitwidth(1409))) uint1409;
typedef unsigned int __attribute__ ((bitwidth(1410))) uint1410;
typedef unsigned int __attribute__ ((bitwidth(1411))) uint1411;
typedef unsigned int __attribute__ ((bitwidth(1412))) uint1412;
typedef unsigned int __attribute__ ((bitwidth(1413))) uint1413;
typedef unsigned int __attribute__ ((bitwidth(1414))) uint1414;
typedef unsigned int __attribute__ ((bitwidth(1415))) uint1415;
typedef unsigned int __attribute__ ((bitwidth(1416))) uint1416;
typedef unsigned int __attribute__ ((bitwidth(1417))) uint1417;
typedef unsigned int __attribute__ ((bitwidth(1418))) uint1418;
typedef unsigned int __attribute__ ((bitwidth(1419))) uint1419;
typedef unsigned int __attribute__ ((bitwidth(1420))) uint1420;
typedef unsigned int __attribute__ ((bitwidth(1421))) uint1421;
typedef unsigned int __attribute__ ((bitwidth(1422))) uint1422;
typedef unsigned int __attribute__ ((bitwidth(1423))) uint1423;
typedef unsigned int __attribute__ ((bitwidth(1424))) uint1424;
typedef unsigned int __attribute__ ((bitwidth(1425))) uint1425;
typedef unsigned int __attribute__ ((bitwidth(1426))) uint1426;
typedef unsigned int __attribute__ ((bitwidth(1427))) uint1427;
typedef unsigned int __attribute__ ((bitwidth(1428))) uint1428;
typedef unsigned int __attribute__ ((bitwidth(1429))) uint1429;
typedef unsigned int __attribute__ ((bitwidth(1430))) uint1430;
typedef unsigned int __attribute__ ((bitwidth(1431))) uint1431;
typedef unsigned int __attribute__ ((bitwidth(1432))) uint1432;
typedef unsigned int __attribute__ ((bitwidth(1433))) uint1433;
typedef unsigned int __attribute__ ((bitwidth(1434))) uint1434;
typedef unsigned int __attribute__ ((bitwidth(1435))) uint1435;
typedef unsigned int __attribute__ ((bitwidth(1436))) uint1436;
typedef unsigned int __attribute__ ((bitwidth(1437))) uint1437;
typedef unsigned int __attribute__ ((bitwidth(1438))) uint1438;
typedef unsigned int __attribute__ ((bitwidth(1439))) uint1439;
typedef unsigned int __attribute__ ((bitwidth(1440))) uint1440;
typedef unsigned int __attribute__ ((bitwidth(1441))) uint1441;
typedef unsigned int __attribute__ ((bitwidth(1442))) uint1442;
typedef unsigned int __attribute__ ((bitwidth(1443))) uint1443;
typedef unsigned int __attribute__ ((bitwidth(1444))) uint1444;
typedef unsigned int __attribute__ ((bitwidth(1445))) uint1445;
typedef unsigned int __attribute__ ((bitwidth(1446))) uint1446;
typedef unsigned int __attribute__ ((bitwidth(1447))) uint1447;
typedef unsigned int __attribute__ ((bitwidth(1448))) uint1448;
typedef unsigned int __attribute__ ((bitwidth(1449))) uint1449;
typedef unsigned int __attribute__ ((bitwidth(1450))) uint1450;
typedef unsigned int __attribute__ ((bitwidth(1451))) uint1451;
typedef unsigned int __attribute__ ((bitwidth(1452))) uint1452;
typedef unsigned int __attribute__ ((bitwidth(1453))) uint1453;
typedef unsigned int __attribute__ ((bitwidth(1454))) uint1454;
typedef unsigned int __attribute__ ((bitwidth(1455))) uint1455;
typedef unsigned int __attribute__ ((bitwidth(1456))) uint1456;
typedef unsigned int __attribute__ ((bitwidth(1457))) uint1457;
typedef unsigned int __attribute__ ((bitwidth(1458))) uint1458;
typedef unsigned int __attribute__ ((bitwidth(1459))) uint1459;
typedef unsigned int __attribute__ ((bitwidth(1460))) uint1460;
typedef unsigned int __attribute__ ((bitwidth(1461))) uint1461;
typedef unsigned int __attribute__ ((bitwidth(1462))) uint1462;
typedef unsigned int __attribute__ ((bitwidth(1463))) uint1463;
typedef unsigned int __attribute__ ((bitwidth(1464))) uint1464;
typedef unsigned int __attribute__ ((bitwidth(1465))) uint1465;
typedef unsigned int __attribute__ ((bitwidth(1466))) uint1466;
typedef unsigned int __attribute__ ((bitwidth(1467))) uint1467;
typedef unsigned int __attribute__ ((bitwidth(1468))) uint1468;
typedef unsigned int __attribute__ ((bitwidth(1469))) uint1469;
typedef unsigned int __attribute__ ((bitwidth(1470))) uint1470;
typedef unsigned int __attribute__ ((bitwidth(1471))) uint1471;
typedef unsigned int __attribute__ ((bitwidth(1472))) uint1472;
typedef unsigned int __attribute__ ((bitwidth(1473))) uint1473;
typedef unsigned int __attribute__ ((bitwidth(1474))) uint1474;
typedef unsigned int __attribute__ ((bitwidth(1475))) uint1475;
typedef unsigned int __attribute__ ((bitwidth(1476))) uint1476;
typedef unsigned int __attribute__ ((bitwidth(1477))) uint1477;
typedef unsigned int __attribute__ ((bitwidth(1478))) uint1478;
typedef unsigned int __attribute__ ((bitwidth(1479))) uint1479;
typedef unsigned int __attribute__ ((bitwidth(1480))) uint1480;
typedef unsigned int __attribute__ ((bitwidth(1481))) uint1481;
typedef unsigned int __attribute__ ((bitwidth(1482))) uint1482;
typedef unsigned int __attribute__ ((bitwidth(1483))) uint1483;
typedef unsigned int __attribute__ ((bitwidth(1484))) uint1484;
typedef unsigned int __attribute__ ((bitwidth(1485))) uint1485;
typedef unsigned int __attribute__ ((bitwidth(1486))) uint1486;
typedef unsigned int __attribute__ ((bitwidth(1487))) uint1487;
typedef unsigned int __attribute__ ((bitwidth(1488))) uint1488;
typedef unsigned int __attribute__ ((bitwidth(1489))) uint1489;
typedef unsigned int __attribute__ ((bitwidth(1490))) uint1490;
typedef unsigned int __attribute__ ((bitwidth(1491))) uint1491;
typedef unsigned int __attribute__ ((bitwidth(1492))) uint1492;
typedef unsigned int __attribute__ ((bitwidth(1493))) uint1493;
typedef unsigned int __attribute__ ((bitwidth(1494))) uint1494;
typedef unsigned int __attribute__ ((bitwidth(1495))) uint1495;
typedef unsigned int __attribute__ ((bitwidth(1496))) uint1496;
typedef unsigned int __attribute__ ((bitwidth(1497))) uint1497;
typedef unsigned int __attribute__ ((bitwidth(1498))) uint1498;
typedef unsigned int __attribute__ ((bitwidth(1499))) uint1499;
typedef unsigned int __attribute__ ((bitwidth(1500))) uint1500;
typedef unsigned int __attribute__ ((bitwidth(1501))) uint1501;
typedef unsigned int __attribute__ ((bitwidth(1502))) uint1502;
typedef unsigned int __attribute__ ((bitwidth(1503))) uint1503;
typedef unsigned int __attribute__ ((bitwidth(1504))) uint1504;
typedef unsigned int __attribute__ ((bitwidth(1505))) uint1505;
typedef unsigned int __attribute__ ((bitwidth(1506))) uint1506;
typedef unsigned int __attribute__ ((bitwidth(1507))) uint1507;
typedef unsigned int __attribute__ ((bitwidth(1508))) uint1508;
typedef unsigned int __attribute__ ((bitwidth(1509))) uint1509;
typedef unsigned int __attribute__ ((bitwidth(1510))) uint1510;
typedef unsigned int __attribute__ ((bitwidth(1511))) uint1511;
typedef unsigned int __attribute__ ((bitwidth(1512))) uint1512;
typedef unsigned int __attribute__ ((bitwidth(1513))) uint1513;
typedef unsigned int __attribute__ ((bitwidth(1514))) uint1514;
typedef unsigned int __attribute__ ((bitwidth(1515))) uint1515;
typedef unsigned int __attribute__ ((bitwidth(1516))) uint1516;
typedef unsigned int __attribute__ ((bitwidth(1517))) uint1517;
typedef unsigned int __attribute__ ((bitwidth(1518))) uint1518;
typedef unsigned int __attribute__ ((bitwidth(1519))) uint1519;
typedef unsigned int __attribute__ ((bitwidth(1520))) uint1520;
typedef unsigned int __attribute__ ((bitwidth(1521))) uint1521;
typedef unsigned int __attribute__ ((bitwidth(1522))) uint1522;
typedef unsigned int __attribute__ ((bitwidth(1523))) uint1523;
typedef unsigned int __attribute__ ((bitwidth(1524))) uint1524;
typedef unsigned int __attribute__ ((bitwidth(1525))) uint1525;
typedef unsigned int __attribute__ ((bitwidth(1526))) uint1526;
typedef unsigned int __attribute__ ((bitwidth(1527))) uint1527;
typedef unsigned int __attribute__ ((bitwidth(1528))) uint1528;
typedef unsigned int __attribute__ ((bitwidth(1529))) uint1529;
typedef unsigned int __attribute__ ((bitwidth(1530))) uint1530;
typedef unsigned int __attribute__ ((bitwidth(1531))) uint1531;
typedef unsigned int __attribute__ ((bitwidth(1532))) uint1532;
typedef unsigned int __attribute__ ((bitwidth(1533))) uint1533;
typedef unsigned int __attribute__ ((bitwidth(1534))) uint1534;
typedef unsigned int __attribute__ ((bitwidth(1535))) uint1535;
typedef unsigned int __attribute__ ((bitwidth(1536))) uint1536;
typedef unsigned int __attribute__ ((bitwidth(1537))) uint1537;
typedef unsigned int __attribute__ ((bitwidth(1538))) uint1538;
typedef unsigned int __attribute__ ((bitwidth(1539))) uint1539;
typedef unsigned int __attribute__ ((bitwidth(1540))) uint1540;
typedef unsigned int __attribute__ ((bitwidth(1541))) uint1541;
typedef unsigned int __attribute__ ((bitwidth(1542))) uint1542;
typedef unsigned int __attribute__ ((bitwidth(1543))) uint1543;
typedef unsigned int __attribute__ ((bitwidth(1544))) uint1544;
typedef unsigned int __attribute__ ((bitwidth(1545))) uint1545;
typedef unsigned int __attribute__ ((bitwidth(1546))) uint1546;
typedef unsigned int __attribute__ ((bitwidth(1547))) uint1547;
typedef unsigned int __attribute__ ((bitwidth(1548))) uint1548;
typedef unsigned int __attribute__ ((bitwidth(1549))) uint1549;
typedef unsigned int __attribute__ ((bitwidth(1550))) uint1550;
typedef unsigned int __attribute__ ((bitwidth(1551))) uint1551;
typedef unsigned int __attribute__ ((bitwidth(1552))) uint1552;
typedef unsigned int __attribute__ ((bitwidth(1553))) uint1553;
typedef unsigned int __attribute__ ((bitwidth(1554))) uint1554;
typedef unsigned int __attribute__ ((bitwidth(1555))) uint1555;
typedef unsigned int __attribute__ ((bitwidth(1556))) uint1556;
typedef unsigned int __attribute__ ((bitwidth(1557))) uint1557;
typedef unsigned int __attribute__ ((bitwidth(1558))) uint1558;
typedef unsigned int __attribute__ ((bitwidth(1559))) uint1559;
typedef unsigned int __attribute__ ((bitwidth(1560))) uint1560;
typedef unsigned int __attribute__ ((bitwidth(1561))) uint1561;
typedef unsigned int __attribute__ ((bitwidth(1562))) uint1562;
typedef unsigned int __attribute__ ((bitwidth(1563))) uint1563;
typedef unsigned int __attribute__ ((bitwidth(1564))) uint1564;
typedef unsigned int __attribute__ ((bitwidth(1565))) uint1565;
typedef unsigned int __attribute__ ((bitwidth(1566))) uint1566;
typedef unsigned int __attribute__ ((bitwidth(1567))) uint1567;
typedef unsigned int __attribute__ ((bitwidth(1568))) uint1568;
typedef unsigned int __attribute__ ((bitwidth(1569))) uint1569;
typedef unsigned int __attribute__ ((bitwidth(1570))) uint1570;
typedef unsigned int __attribute__ ((bitwidth(1571))) uint1571;
typedef unsigned int __attribute__ ((bitwidth(1572))) uint1572;
typedef unsigned int __attribute__ ((bitwidth(1573))) uint1573;
typedef unsigned int __attribute__ ((bitwidth(1574))) uint1574;
typedef unsigned int __attribute__ ((bitwidth(1575))) uint1575;
typedef unsigned int __attribute__ ((bitwidth(1576))) uint1576;
typedef unsigned int __attribute__ ((bitwidth(1577))) uint1577;
typedef unsigned int __attribute__ ((bitwidth(1578))) uint1578;
typedef unsigned int __attribute__ ((bitwidth(1579))) uint1579;
typedef unsigned int __attribute__ ((bitwidth(1580))) uint1580;
typedef unsigned int __attribute__ ((bitwidth(1581))) uint1581;
typedef unsigned int __attribute__ ((bitwidth(1582))) uint1582;
typedef unsigned int __attribute__ ((bitwidth(1583))) uint1583;
typedef unsigned int __attribute__ ((bitwidth(1584))) uint1584;
typedef unsigned int __attribute__ ((bitwidth(1585))) uint1585;
typedef unsigned int __attribute__ ((bitwidth(1586))) uint1586;
typedef unsigned int __attribute__ ((bitwidth(1587))) uint1587;
typedef unsigned int __attribute__ ((bitwidth(1588))) uint1588;
typedef unsigned int __attribute__ ((bitwidth(1589))) uint1589;
typedef unsigned int __attribute__ ((bitwidth(1590))) uint1590;
typedef unsigned int __attribute__ ((bitwidth(1591))) uint1591;
typedef unsigned int __attribute__ ((bitwidth(1592))) uint1592;
typedef unsigned int __attribute__ ((bitwidth(1593))) uint1593;
typedef unsigned int __attribute__ ((bitwidth(1594))) uint1594;
typedef unsigned int __attribute__ ((bitwidth(1595))) uint1595;
typedef unsigned int __attribute__ ((bitwidth(1596))) uint1596;
typedef unsigned int __attribute__ ((bitwidth(1597))) uint1597;
typedef unsigned int __attribute__ ((bitwidth(1598))) uint1598;
typedef unsigned int __attribute__ ((bitwidth(1599))) uint1599;
typedef unsigned int __attribute__ ((bitwidth(1600))) uint1600;
typedef unsigned int __attribute__ ((bitwidth(1601))) uint1601;
typedef unsigned int __attribute__ ((bitwidth(1602))) uint1602;
typedef unsigned int __attribute__ ((bitwidth(1603))) uint1603;
typedef unsigned int __attribute__ ((bitwidth(1604))) uint1604;
typedef unsigned int __attribute__ ((bitwidth(1605))) uint1605;
typedef unsigned int __attribute__ ((bitwidth(1606))) uint1606;
typedef unsigned int __attribute__ ((bitwidth(1607))) uint1607;
typedef unsigned int __attribute__ ((bitwidth(1608))) uint1608;
typedef unsigned int __attribute__ ((bitwidth(1609))) uint1609;
typedef unsigned int __attribute__ ((bitwidth(1610))) uint1610;
typedef unsigned int __attribute__ ((bitwidth(1611))) uint1611;
typedef unsigned int __attribute__ ((bitwidth(1612))) uint1612;
typedef unsigned int __attribute__ ((bitwidth(1613))) uint1613;
typedef unsigned int __attribute__ ((bitwidth(1614))) uint1614;
typedef unsigned int __attribute__ ((bitwidth(1615))) uint1615;
typedef unsigned int __attribute__ ((bitwidth(1616))) uint1616;
typedef unsigned int __attribute__ ((bitwidth(1617))) uint1617;
typedef unsigned int __attribute__ ((bitwidth(1618))) uint1618;
typedef unsigned int __attribute__ ((bitwidth(1619))) uint1619;
typedef unsigned int __attribute__ ((bitwidth(1620))) uint1620;
typedef unsigned int __attribute__ ((bitwidth(1621))) uint1621;
typedef unsigned int __attribute__ ((bitwidth(1622))) uint1622;
typedef unsigned int __attribute__ ((bitwidth(1623))) uint1623;
typedef unsigned int __attribute__ ((bitwidth(1624))) uint1624;
typedef unsigned int __attribute__ ((bitwidth(1625))) uint1625;
typedef unsigned int __attribute__ ((bitwidth(1626))) uint1626;
typedef unsigned int __attribute__ ((bitwidth(1627))) uint1627;
typedef unsigned int __attribute__ ((bitwidth(1628))) uint1628;
typedef unsigned int __attribute__ ((bitwidth(1629))) uint1629;
typedef unsigned int __attribute__ ((bitwidth(1630))) uint1630;
typedef unsigned int __attribute__ ((bitwidth(1631))) uint1631;
typedef unsigned int __attribute__ ((bitwidth(1632))) uint1632;
typedef unsigned int __attribute__ ((bitwidth(1633))) uint1633;
typedef unsigned int __attribute__ ((bitwidth(1634))) uint1634;
typedef unsigned int __attribute__ ((bitwidth(1635))) uint1635;
typedef unsigned int __attribute__ ((bitwidth(1636))) uint1636;
typedef unsigned int __attribute__ ((bitwidth(1637))) uint1637;
typedef unsigned int __attribute__ ((bitwidth(1638))) uint1638;
typedef unsigned int __attribute__ ((bitwidth(1639))) uint1639;
typedef unsigned int __attribute__ ((bitwidth(1640))) uint1640;
typedef unsigned int __attribute__ ((bitwidth(1641))) uint1641;
typedef unsigned int __attribute__ ((bitwidth(1642))) uint1642;
typedef unsigned int __attribute__ ((bitwidth(1643))) uint1643;
typedef unsigned int __attribute__ ((bitwidth(1644))) uint1644;
typedef unsigned int __attribute__ ((bitwidth(1645))) uint1645;
typedef unsigned int __attribute__ ((bitwidth(1646))) uint1646;
typedef unsigned int __attribute__ ((bitwidth(1647))) uint1647;
typedef unsigned int __attribute__ ((bitwidth(1648))) uint1648;
typedef unsigned int __attribute__ ((bitwidth(1649))) uint1649;
typedef unsigned int __attribute__ ((bitwidth(1650))) uint1650;
typedef unsigned int __attribute__ ((bitwidth(1651))) uint1651;
typedef unsigned int __attribute__ ((bitwidth(1652))) uint1652;
typedef unsigned int __attribute__ ((bitwidth(1653))) uint1653;
typedef unsigned int __attribute__ ((bitwidth(1654))) uint1654;
typedef unsigned int __attribute__ ((bitwidth(1655))) uint1655;
typedef unsigned int __attribute__ ((bitwidth(1656))) uint1656;
typedef unsigned int __attribute__ ((bitwidth(1657))) uint1657;
typedef unsigned int __attribute__ ((bitwidth(1658))) uint1658;
typedef unsigned int __attribute__ ((bitwidth(1659))) uint1659;
typedef unsigned int __attribute__ ((bitwidth(1660))) uint1660;
typedef unsigned int __attribute__ ((bitwidth(1661))) uint1661;
typedef unsigned int __attribute__ ((bitwidth(1662))) uint1662;
typedef unsigned int __attribute__ ((bitwidth(1663))) uint1663;
typedef unsigned int __attribute__ ((bitwidth(1664))) uint1664;
typedef unsigned int __attribute__ ((bitwidth(1665))) uint1665;
typedef unsigned int __attribute__ ((bitwidth(1666))) uint1666;
typedef unsigned int __attribute__ ((bitwidth(1667))) uint1667;
typedef unsigned int __attribute__ ((bitwidth(1668))) uint1668;
typedef unsigned int __attribute__ ((bitwidth(1669))) uint1669;
typedef unsigned int __attribute__ ((bitwidth(1670))) uint1670;
typedef unsigned int __attribute__ ((bitwidth(1671))) uint1671;
typedef unsigned int __attribute__ ((bitwidth(1672))) uint1672;
typedef unsigned int __attribute__ ((bitwidth(1673))) uint1673;
typedef unsigned int __attribute__ ((bitwidth(1674))) uint1674;
typedef unsigned int __attribute__ ((bitwidth(1675))) uint1675;
typedef unsigned int __attribute__ ((bitwidth(1676))) uint1676;
typedef unsigned int __attribute__ ((bitwidth(1677))) uint1677;
typedef unsigned int __attribute__ ((bitwidth(1678))) uint1678;
typedef unsigned int __attribute__ ((bitwidth(1679))) uint1679;
typedef unsigned int __attribute__ ((bitwidth(1680))) uint1680;
typedef unsigned int __attribute__ ((bitwidth(1681))) uint1681;
typedef unsigned int __attribute__ ((bitwidth(1682))) uint1682;
typedef unsigned int __attribute__ ((bitwidth(1683))) uint1683;
typedef unsigned int __attribute__ ((bitwidth(1684))) uint1684;
typedef unsigned int __attribute__ ((bitwidth(1685))) uint1685;
typedef unsigned int __attribute__ ((bitwidth(1686))) uint1686;
typedef unsigned int __attribute__ ((bitwidth(1687))) uint1687;
typedef unsigned int __attribute__ ((bitwidth(1688))) uint1688;
typedef unsigned int __attribute__ ((bitwidth(1689))) uint1689;
typedef unsigned int __attribute__ ((bitwidth(1690))) uint1690;
typedef unsigned int __attribute__ ((bitwidth(1691))) uint1691;
typedef unsigned int __attribute__ ((bitwidth(1692))) uint1692;
typedef unsigned int __attribute__ ((bitwidth(1693))) uint1693;
typedef unsigned int __attribute__ ((bitwidth(1694))) uint1694;
typedef unsigned int __attribute__ ((bitwidth(1695))) uint1695;
typedef unsigned int __attribute__ ((bitwidth(1696))) uint1696;
typedef unsigned int __attribute__ ((bitwidth(1697))) uint1697;
typedef unsigned int __attribute__ ((bitwidth(1698))) uint1698;
typedef unsigned int __attribute__ ((bitwidth(1699))) uint1699;
typedef unsigned int __attribute__ ((bitwidth(1700))) uint1700;
typedef unsigned int __attribute__ ((bitwidth(1701))) uint1701;
typedef unsigned int __attribute__ ((bitwidth(1702))) uint1702;
typedef unsigned int __attribute__ ((bitwidth(1703))) uint1703;
typedef unsigned int __attribute__ ((bitwidth(1704))) uint1704;
typedef unsigned int __attribute__ ((bitwidth(1705))) uint1705;
typedef unsigned int __attribute__ ((bitwidth(1706))) uint1706;
typedef unsigned int __attribute__ ((bitwidth(1707))) uint1707;
typedef unsigned int __attribute__ ((bitwidth(1708))) uint1708;
typedef unsigned int __attribute__ ((bitwidth(1709))) uint1709;
typedef unsigned int __attribute__ ((bitwidth(1710))) uint1710;
typedef unsigned int __attribute__ ((bitwidth(1711))) uint1711;
typedef unsigned int __attribute__ ((bitwidth(1712))) uint1712;
typedef unsigned int __attribute__ ((bitwidth(1713))) uint1713;
typedef unsigned int __attribute__ ((bitwidth(1714))) uint1714;
typedef unsigned int __attribute__ ((bitwidth(1715))) uint1715;
typedef unsigned int __attribute__ ((bitwidth(1716))) uint1716;
typedef unsigned int __attribute__ ((bitwidth(1717))) uint1717;
typedef unsigned int __attribute__ ((bitwidth(1718))) uint1718;
typedef unsigned int __attribute__ ((bitwidth(1719))) uint1719;
typedef unsigned int __attribute__ ((bitwidth(1720))) uint1720;
typedef unsigned int __attribute__ ((bitwidth(1721))) uint1721;
typedef unsigned int __attribute__ ((bitwidth(1722))) uint1722;
typedef unsigned int __attribute__ ((bitwidth(1723))) uint1723;
typedef unsigned int __attribute__ ((bitwidth(1724))) uint1724;
typedef unsigned int __attribute__ ((bitwidth(1725))) uint1725;
typedef unsigned int __attribute__ ((bitwidth(1726))) uint1726;
typedef unsigned int __attribute__ ((bitwidth(1727))) uint1727;
typedef unsigned int __attribute__ ((bitwidth(1728))) uint1728;
typedef unsigned int __attribute__ ((bitwidth(1729))) uint1729;
typedef unsigned int __attribute__ ((bitwidth(1730))) uint1730;
typedef unsigned int __attribute__ ((bitwidth(1731))) uint1731;
typedef unsigned int __attribute__ ((bitwidth(1732))) uint1732;
typedef unsigned int __attribute__ ((bitwidth(1733))) uint1733;
typedef unsigned int __attribute__ ((bitwidth(1734))) uint1734;
typedef unsigned int __attribute__ ((bitwidth(1735))) uint1735;
typedef unsigned int __attribute__ ((bitwidth(1736))) uint1736;
typedef unsigned int __attribute__ ((bitwidth(1737))) uint1737;
typedef unsigned int __attribute__ ((bitwidth(1738))) uint1738;
typedef unsigned int __attribute__ ((bitwidth(1739))) uint1739;
typedef unsigned int __attribute__ ((bitwidth(1740))) uint1740;
typedef unsigned int __attribute__ ((bitwidth(1741))) uint1741;
typedef unsigned int __attribute__ ((bitwidth(1742))) uint1742;
typedef unsigned int __attribute__ ((bitwidth(1743))) uint1743;
typedef unsigned int __attribute__ ((bitwidth(1744))) uint1744;
typedef unsigned int __attribute__ ((bitwidth(1745))) uint1745;
typedef unsigned int __attribute__ ((bitwidth(1746))) uint1746;
typedef unsigned int __attribute__ ((bitwidth(1747))) uint1747;
typedef unsigned int __attribute__ ((bitwidth(1748))) uint1748;
typedef unsigned int __attribute__ ((bitwidth(1749))) uint1749;
typedef unsigned int __attribute__ ((bitwidth(1750))) uint1750;
typedef unsigned int __attribute__ ((bitwidth(1751))) uint1751;
typedef unsigned int __attribute__ ((bitwidth(1752))) uint1752;
typedef unsigned int __attribute__ ((bitwidth(1753))) uint1753;
typedef unsigned int __attribute__ ((bitwidth(1754))) uint1754;
typedef unsigned int __attribute__ ((bitwidth(1755))) uint1755;
typedef unsigned int __attribute__ ((bitwidth(1756))) uint1756;
typedef unsigned int __attribute__ ((bitwidth(1757))) uint1757;
typedef unsigned int __attribute__ ((bitwidth(1758))) uint1758;
typedef unsigned int __attribute__ ((bitwidth(1759))) uint1759;
typedef unsigned int __attribute__ ((bitwidth(1760))) uint1760;
typedef unsigned int __attribute__ ((bitwidth(1761))) uint1761;
typedef unsigned int __attribute__ ((bitwidth(1762))) uint1762;
typedef unsigned int __attribute__ ((bitwidth(1763))) uint1763;
typedef unsigned int __attribute__ ((bitwidth(1764))) uint1764;
typedef unsigned int __attribute__ ((bitwidth(1765))) uint1765;
typedef unsigned int __attribute__ ((bitwidth(1766))) uint1766;
typedef unsigned int __attribute__ ((bitwidth(1767))) uint1767;
typedef unsigned int __attribute__ ((bitwidth(1768))) uint1768;
typedef unsigned int __attribute__ ((bitwidth(1769))) uint1769;
typedef unsigned int __attribute__ ((bitwidth(1770))) uint1770;
typedef unsigned int __attribute__ ((bitwidth(1771))) uint1771;
typedef unsigned int __attribute__ ((bitwidth(1772))) uint1772;
typedef unsigned int __attribute__ ((bitwidth(1773))) uint1773;
typedef unsigned int __attribute__ ((bitwidth(1774))) uint1774;
typedef unsigned int __attribute__ ((bitwidth(1775))) uint1775;
typedef unsigned int __attribute__ ((bitwidth(1776))) uint1776;
typedef unsigned int __attribute__ ((bitwidth(1777))) uint1777;
typedef unsigned int __attribute__ ((bitwidth(1778))) uint1778;
typedef unsigned int __attribute__ ((bitwidth(1779))) uint1779;
typedef unsigned int __attribute__ ((bitwidth(1780))) uint1780;
typedef unsigned int __attribute__ ((bitwidth(1781))) uint1781;
typedef unsigned int __attribute__ ((bitwidth(1782))) uint1782;
typedef unsigned int __attribute__ ((bitwidth(1783))) uint1783;
typedef unsigned int __attribute__ ((bitwidth(1784))) uint1784;
typedef unsigned int __attribute__ ((bitwidth(1785))) uint1785;
typedef unsigned int __attribute__ ((bitwidth(1786))) uint1786;
typedef unsigned int __attribute__ ((bitwidth(1787))) uint1787;
typedef unsigned int __attribute__ ((bitwidth(1788))) uint1788;
typedef unsigned int __attribute__ ((bitwidth(1789))) uint1789;
typedef unsigned int __attribute__ ((bitwidth(1790))) uint1790;
typedef unsigned int __attribute__ ((bitwidth(1791))) uint1791;
typedef unsigned int __attribute__ ((bitwidth(1792))) uint1792;
typedef unsigned int __attribute__ ((bitwidth(1793))) uint1793;
typedef unsigned int __attribute__ ((bitwidth(1794))) uint1794;
typedef unsigned int __attribute__ ((bitwidth(1795))) uint1795;
typedef unsigned int __attribute__ ((bitwidth(1796))) uint1796;
typedef unsigned int __attribute__ ((bitwidth(1797))) uint1797;
typedef unsigned int __attribute__ ((bitwidth(1798))) uint1798;
typedef unsigned int __attribute__ ((bitwidth(1799))) uint1799;
typedef unsigned int __attribute__ ((bitwidth(1800))) uint1800;
typedef unsigned int __attribute__ ((bitwidth(1801))) uint1801;
typedef unsigned int __attribute__ ((bitwidth(1802))) uint1802;
typedef unsigned int __attribute__ ((bitwidth(1803))) uint1803;
typedef unsigned int __attribute__ ((bitwidth(1804))) uint1804;
typedef unsigned int __attribute__ ((bitwidth(1805))) uint1805;
typedef unsigned int __attribute__ ((bitwidth(1806))) uint1806;
typedef unsigned int __attribute__ ((bitwidth(1807))) uint1807;
typedef unsigned int __attribute__ ((bitwidth(1808))) uint1808;
typedef unsigned int __attribute__ ((bitwidth(1809))) uint1809;
typedef unsigned int __attribute__ ((bitwidth(1810))) uint1810;
typedef unsigned int __attribute__ ((bitwidth(1811))) uint1811;
typedef unsigned int __attribute__ ((bitwidth(1812))) uint1812;
typedef unsigned int __attribute__ ((bitwidth(1813))) uint1813;
typedef unsigned int __attribute__ ((bitwidth(1814))) uint1814;
typedef unsigned int __attribute__ ((bitwidth(1815))) uint1815;
typedef unsigned int __attribute__ ((bitwidth(1816))) uint1816;
typedef unsigned int __attribute__ ((bitwidth(1817))) uint1817;
typedef unsigned int __attribute__ ((bitwidth(1818))) uint1818;
typedef unsigned int __attribute__ ((bitwidth(1819))) uint1819;
typedef unsigned int __attribute__ ((bitwidth(1820))) uint1820;
typedef unsigned int __attribute__ ((bitwidth(1821))) uint1821;
typedef unsigned int __attribute__ ((bitwidth(1822))) uint1822;
typedef unsigned int __attribute__ ((bitwidth(1823))) uint1823;
typedef unsigned int __attribute__ ((bitwidth(1824))) uint1824;
typedef unsigned int __attribute__ ((bitwidth(1825))) uint1825;
typedef unsigned int __attribute__ ((bitwidth(1826))) uint1826;
typedef unsigned int __attribute__ ((bitwidth(1827))) uint1827;
typedef unsigned int __attribute__ ((bitwidth(1828))) uint1828;
typedef unsigned int __attribute__ ((bitwidth(1829))) uint1829;
typedef unsigned int __attribute__ ((bitwidth(1830))) uint1830;
typedef unsigned int __attribute__ ((bitwidth(1831))) uint1831;
typedef unsigned int __attribute__ ((bitwidth(1832))) uint1832;
typedef unsigned int __attribute__ ((bitwidth(1833))) uint1833;
typedef unsigned int __attribute__ ((bitwidth(1834))) uint1834;
typedef unsigned int __attribute__ ((bitwidth(1835))) uint1835;
typedef unsigned int __attribute__ ((bitwidth(1836))) uint1836;
typedef unsigned int __attribute__ ((bitwidth(1837))) uint1837;
typedef unsigned int __attribute__ ((bitwidth(1838))) uint1838;
typedef unsigned int __attribute__ ((bitwidth(1839))) uint1839;
typedef unsigned int __attribute__ ((bitwidth(1840))) uint1840;
typedef unsigned int __attribute__ ((bitwidth(1841))) uint1841;
typedef unsigned int __attribute__ ((bitwidth(1842))) uint1842;
typedef unsigned int __attribute__ ((bitwidth(1843))) uint1843;
typedef unsigned int __attribute__ ((bitwidth(1844))) uint1844;
typedef unsigned int __attribute__ ((bitwidth(1845))) uint1845;
typedef unsigned int __attribute__ ((bitwidth(1846))) uint1846;
typedef unsigned int __attribute__ ((bitwidth(1847))) uint1847;
typedef unsigned int __attribute__ ((bitwidth(1848))) uint1848;
typedef unsigned int __attribute__ ((bitwidth(1849))) uint1849;
typedef unsigned int __attribute__ ((bitwidth(1850))) uint1850;
typedef unsigned int __attribute__ ((bitwidth(1851))) uint1851;
typedef unsigned int __attribute__ ((bitwidth(1852))) uint1852;
typedef unsigned int __attribute__ ((bitwidth(1853))) uint1853;
typedef unsigned int __attribute__ ((bitwidth(1854))) uint1854;
typedef unsigned int __attribute__ ((bitwidth(1855))) uint1855;
typedef unsigned int __attribute__ ((bitwidth(1856))) uint1856;
typedef unsigned int __attribute__ ((bitwidth(1857))) uint1857;
typedef unsigned int __attribute__ ((bitwidth(1858))) uint1858;
typedef unsigned int __attribute__ ((bitwidth(1859))) uint1859;
typedef unsigned int __attribute__ ((bitwidth(1860))) uint1860;
typedef unsigned int __attribute__ ((bitwidth(1861))) uint1861;
typedef unsigned int __attribute__ ((bitwidth(1862))) uint1862;
typedef unsigned int __attribute__ ((bitwidth(1863))) uint1863;
typedef unsigned int __attribute__ ((bitwidth(1864))) uint1864;
typedef unsigned int __attribute__ ((bitwidth(1865))) uint1865;
typedef unsigned int __attribute__ ((bitwidth(1866))) uint1866;
typedef unsigned int __attribute__ ((bitwidth(1867))) uint1867;
typedef unsigned int __attribute__ ((bitwidth(1868))) uint1868;
typedef unsigned int __attribute__ ((bitwidth(1869))) uint1869;
typedef unsigned int __attribute__ ((bitwidth(1870))) uint1870;
typedef unsigned int __attribute__ ((bitwidth(1871))) uint1871;
typedef unsigned int __attribute__ ((bitwidth(1872))) uint1872;
typedef unsigned int __attribute__ ((bitwidth(1873))) uint1873;
typedef unsigned int __attribute__ ((bitwidth(1874))) uint1874;
typedef unsigned int __attribute__ ((bitwidth(1875))) uint1875;
typedef unsigned int __attribute__ ((bitwidth(1876))) uint1876;
typedef unsigned int __attribute__ ((bitwidth(1877))) uint1877;
typedef unsigned int __attribute__ ((bitwidth(1878))) uint1878;
typedef unsigned int __attribute__ ((bitwidth(1879))) uint1879;
typedef unsigned int __attribute__ ((bitwidth(1880))) uint1880;
typedef unsigned int __attribute__ ((bitwidth(1881))) uint1881;
typedef unsigned int __attribute__ ((bitwidth(1882))) uint1882;
typedef unsigned int __attribute__ ((bitwidth(1883))) uint1883;
typedef unsigned int __attribute__ ((bitwidth(1884))) uint1884;
typedef unsigned int __attribute__ ((bitwidth(1885))) uint1885;
typedef unsigned int __attribute__ ((bitwidth(1886))) uint1886;
typedef unsigned int __attribute__ ((bitwidth(1887))) uint1887;
typedef unsigned int __attribute__ ((bitwidth(1888))) uint1888;
typedef unsigned int __attribute__ ((bitwidth(1889))) uint1889;
typedef unsigned int __attribute__ ((bitwidth(1890))) uint1890;
typedef unsigned int __attribute__ ((bitwidth(1891))) uint1891;
typedef unsigned int __attribute__ ((bitwidth(1892))) uint1892;
typedef unsigned int __attribute__ ((bitwidth(1893))) uint1893;
typedef unsigned int __attribute__ ((bitwidth(1894))) uint1894;
typedef unsigned int __attribute__ ((bitwidth(1895))) uint1895;
typedef unsigned int __attribute__ ((bitwidth(1896))) uint1896;
typedef unsigned int __attribute__ ((bitwidth(1897))) uint1897;
typedef unsigned int __attribute__ ((bitwidth(1898))) uint1898;
typedef unsigned int __attribute__ ((bitwidth(1899))) uint1899;
typedef unsigned int __attribute__ ((bitwidth(1900))) uint1900;
typedef unsigned int __attribute__ ((bitwidth(1901))) uint1901;
typedef unsigned int __attribute__ ((bitwidth(1902))) uint1902;
typedef unsigned int __attribute__ ((bitwidth(1903))) uint1903;
typedef unsigned int __attribute__ ((bitwidth(1904))) uint1904;
typedef unsigned int __attribute__ ((bitwidth(1905))) uint1905;
typedef unsigned int __attribute__ ((bitwidth(1906))) uint1906;
typedef unsigned int __attribute__ ((bitwidth(1907))) uint1907;
typedef unsigned int __attribute__ ((bitwidth(1908))) uint1908;
typedef unsigned int __attribute__ ((bitwidth(1909))) uint1909;
typedef unsigned int __attribute__ ((bitwidth(1910))) uint1910;
typedef unsigned int __attribute__ ((bitwidth(1911))) uint1911;
typedef unsigned int __attribute__ ((bitwidth(1912))) uint1912;
typedef unsigned int __attribute__ ((bitwidth(1913))) uint1913;
typedef unsigned int __attribute__ ((bitwidth(1914))) uint1914;
typedef unsigned int __attribute__ ((bitwidth(1915))) uint1915;
typedef unsigned int __attribute__ ((bitwidth(1916))) uint1916;
typedef unsigned int __attribute__ ((bitwidth(1917))) uint1917;
typedef unsigned int __attribute__ ((bitwidth(1918))) uint1918;
typedef unsigned int __attribute__ ((bitwidth(1919))) uint1919;
typedef unsigned int __attribute__ ((bitwidth(1920))) uint1920;
typedef unsigned int __attribute__ ((bitwidth(1921))) uint1921;
typedef unsigned int __attribute__ ((bitwidth(1922))) uint1922;
typedef unsigned int __attribute__ ((bitwidth(1923))) uint1923;
typedef unsigned int __attribute__ ((bitwidth(1924))) uint1924;
typedef unsigned int __attribute__ ((bitwidth(1925))) uint1925;
typedef unsigned int __attribute__ ((bitwidth(1926))) uint1926;
typedef unsigned int __attribute__ ((bitwidth(1927))) uint1927;
typedef unsigned int __attribute__ ((bitwidth(1928))) uint1928;
typedef unsigned int __attribute__ ((bitwidth(1929))) uint1929;
typedef unsigned int __attribute__ ((bitwidth(1930))) uint1930;
typedef unsigned int __attribute__ ((bitwidth(1931))) uint1931;
typedef unsigned int __attribute__ ((bitwidth(1932))) uint1932;
typedef unsigned int __attribute__ ((bitwidth(1933))) uint1933;
typedef unsigned int __attribute__ ((bitwidth(1934))) uint1934;
typedef unsigned int __attribute__ ((bitwidth(1935))) uint1935;
typedef unsigned int __attribute__ ((bitwidth(1936))) uint1936;
typedef unsigned int __attribute__ ((bitwidth(1937))) uint1937;
typedef unsigned int __attribute__ ((bitwidth(1938))) uint1938;
typedef unsigned int __attribute__ ((bitwidth(1939))) uint1939;
typedef unsigned int __attribute__ ((bitwidth(1940))) uint1940;
typedef unsigned int __attribute__ ((bitwidth(1941))) uint1941;
typedef unsigned int __attribute__ ((bitwidth(1942))) uint1942;
typedef unsigned int __attribute__ ((bitwidth(1943))) uint1943;
typedef unsigned int __attribute__ ((bitwidth(1944))) uint1944;
typedef unsigned int __attribute__ ((bitwidth(1945))) uint1945;
typedef unsigned int __attribute__ ((bitwidth(1946))) uint1946;
typedef unsigned int __attribute__ ((bitwidth(1947))) uint1947;
typedef unsigned int __attribute__ ((bitwidth(1948))) uint1948;
typedef unsigned int __attribute__ ((bitwidth(1949))) uint1949;
typedef unsigned int __attribute__ ((bitwidth(1950))) uint1950;
typedef unsigned int __attribute__ ((bitwidth(1951))) uint1951;
typedef unsigned int __attribute__ ((bitwidth(1952))) uint1952;
typedef unsigned int __attribute__ ((bitwidth(1953))) uint1953;
typedef unsigned int __attribute__ ((bitwidth(1954))) uint1954;
typedef unsigned int __attribute__ ((bitwidth(1955))) uint1955;
typedef unsigned int __attribute__ ((bitwidth(1956))) uint1956;
typedef unsigned int __attribute__ ((bitwidth(1957))) uint1957;
typedef unsigned int __attribute__ ((bitwidth(1958))) uint1958;
typedef unsigned int __attribute__ ((bitwidth(1959))) uint1959;
typedef unsigned int __attribute__ ((bitwidth(1960))) uint1960;
typedef unsigned int __attribute__ ((bitwidth(1961))) uint1961;
typedef unsigned int __attribute__ ((bitwidth(1962))) uint1962;
typedef unsigned int __attribute__ ((bitwidth(1963))) uint1963;
typedef unsigned int __attribute__ ((bitwidth(1964))) uint1964;
typedef unsigned int __attribute__ ((bitwidth(1965))) uint1965;
typedef unsigned int __attribute__ ((bitwidth(1966))) uint1966;
typedef unsigned int __attribute__ ((bitwidth(1967))) uint1967;
typedef unsigned int __attribute__ ((bitwidth(1968))) uint1968;
typedef unsigned int __attribute__ ((bitwidth(1969))) uint1969;
typedef unsigned int __attribute__ ((bitwidth(1970))) uint1970;
typedef unsigned int __attribute__ ((bitwidth(1971))) uint1971;
typedef unsigned int __attribute__ ((bitwidth(1972))) uint1972;
typedef unsigned int __attribute__ ((bitwidth(1973))) uint1973;
typedef unsigned int __attribute__ ((bitwidth(1974))) uint1974;
typedef unsigned int __attribute__ ((bitwidth(1975))) uint1975;
typedef unsigned int __attribute__ ((bitwidth(1976))) uint1976;
typedef unsigned int __attribute__ ((bitwidth(1977))) uint1977;
typedef unsigned int __attribute__ ((bitwidth(1978))) uint1978;
typedef unsigned int __attribute__ ((bitwidth(1979))) uint1979;
typedef unsigned int __attribute__ ((bitwidth(1980))) uint1980;
typedef unsigned int __attribute__ ((bitwidth(1981))) uint1981;
typedef unsigned int __attribute__ ((bitwidth(1982))) uint1982;
typedef unsigned int __attribute__ ((bitwidth(1983))) uint1983;
typedef unsigned int __attribute__ ((bitwidth(1984))) uint1984;
typedef unsigned int __attribute__ ((bitwidth(1985))) uint1985;
typedef unsigned int __attribute__ ((bitwidth(1986))) uint1986;
typedef unsigned int __attribute__ ((bitwidth(1987))) uint1987;
typedef unsigned int __attribute__ ((bitwidth(1988))) uint1988;
typedef unsigned int __attribute__ ((bitwidth(1989))) uint1989;
typedef unsigned int __attribute__ ((bitwidth(1990))) uint1990;
typedef unsigned int __attribute__ ((bitwidth(1991))) uint1991;
typedef unsigned int __attribute__ ((bitwidth(1992))) uint1992;
typedef unsigned int __attribute__ ((bitwidth(1993))) uint1993;
typedef unsigned int __attribute__ ((bitwidth(1994))) uint1994;
typedef unsigned int __attribute__ ((bitwidth(1995))) uint1995;
typedef unsigned int __attribute__ ((bitwidth(1996))) uint1996;
typedef unsigned int __attribute__ ((bitwidth(1997))) uint1997;
typedef unsigned int __attribute__ ((bitwidth(1998))) uint1998;
typedef unsigned int __attribute__ ((bitwidth(1999))) uint1999;
typedef unsigned int __attribute__ ((bitwidth(2000))) uint2000;
typedef unsigned int __attribute__ ((bitwidth(2001))) uint2001;
typedef unsigned int __attribute__ ((bitwidth(2002))) uint2002;
typedef unsigned int __attribute__ ((bitwidth(2003))) uint2003;
typedef unsigned int __attribute__ ((bitwidth(2004))) uint2004;
typedef unsigned int __attribute__ ((bitwidth(2005))) uint2005;
typedef unsigned int __attribute__ ((bitwidth(2006))) uint2006;
typedef unsigned int __attribute__ ((bitwidth(2007))) uint2007;
typedef unsigned int __attribute__ ((bitwidth(2008))) uint2008;
typedef unsigned int __attribute__ ((bitwidth(2009))) uint2009;
typedef unsigned int __attribute__ ((bitwidth(2010))) uint2010;
typedef unsigned int __attribute__ ((bitwidth(2011))) uint2011;
typedef unsigned int __attribute__ ((bitwidth(2012))) uint2012;
typedef unsigned int __attribute__ ((bitwidth(2013))) uint2013;
typedef unsigned int __attribute__ ((bitwidth(2014))) uint2014;
typedef unsigned int __attribute__ ((bitwidth(2015))) uint2015;
typedef unsigned int __attribute__ ((bitwidth(2016))) uint2016;
typedef unsigned int __attribute__ ((bitwidth(2017))) uint2017;
typedef unsigned int __attribute__ ((bitwidth(2018))) uint2018;
typedef unsigned int __attribute__ ((bitwidth(2019))) uint2019;
typedef unsigned int __attribute__ ((bitwidth(2020))) uint2020;
typedef unsigned int __attribute__ ((bitwidth(2021))) uint2021;
typedef unsigned int __attribute__ ((bitwidth(2022))) uint2022;
typedef unsigned int __attribute__ ((bitwidth(2023))) uint2023;
typedef unsigned int __attribute__ ((bitwidth(2024))) uint2024;
typedef unsigned int __attribute__ ((bitwidth(2025))) uint2025;
typedef unsigned int __attribute__ ((bitwidth(2026))) uint2026;
typedef unsigned int __attribute__ ((bitwidth(2027))) uint2027;
typedef unsigned int __attribute__ ((bitwidth(2028))) uint2028;
typedef unsigned int __attribute__ ((bitwidth(2029))) uint2029;
typedef unsigned int __attribute__ ((bitwidth(2030))) uint2030;
typedef unsigned int __attribute__ ((bitwidth(2031))) uint2031;
typedef unsigned int __attribute__ ((bitwidth(2032))) uint2032;
typedef unsigned int __attribute__ ((bitwidth(2033))) uint2033;
typedef unsigned int __attribute__ ((bitwidth(2034))) uint2034;
typedef unsigned int __attribute__ ((bitwidth(2035))) uint2035;
typedef unsigned int __attribute__ ((bitwidth(2036))) uint2036;
typedef unsigned int __attribute__ ((bitwidth(2037))) uint2037;
typedef unsigned int __attribute__ ((bitwidth(2038))) uint2038;
typedef unsigned int __attribute__ ((bitwidth(2039))) uint2039;
typedef unsigned int __attribute__ ((bitwidth(2040))) uint2040;
typedef unsigned int __attribute__ ((bitwidth(2041))) uint2041;
typedef unsigned int __attribute__ ((bitwidth(2042))) uint2042;
typedef unsigned int __attribute__ ((bitwidth(2043))) uint2043;
typedef unsigned int __attribute__ ((bitwidth(2044))) uint2044;
typedef unsigned int __attribute__ ((bitwidth(2045))) uint2045;
typedef unsigned int __attribute__ ((bitwidth(2046))) uint2046;
typedef unsigned int __attribute__ ((bitwidth(2047))) uint2047;
typedef unsigned int __attribute__ ((bitwidth(2048))) uint2048;
# 110 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_dt.h" 2








         typedef int __attribute__ ((bitwidth(64))) ap_int64;
         typedef unsigned int __attribute__ ((bitwidth(64))) ap_uint64;
# 58 "D:/Vivado/2018.3/common/technology/autopilot/etc/autopilot_apint.h" 2
# 1 "D:/Vivado/2018.3/common/technology/autopilot\\etc/autopilot_ssdm_bits.h" 1
# 59 "D:/Vivado/2018.3/common/technology/autopilot/etc/autopilot_apint.h" 2
# 84 "D:/Vivado/2018.3/common/technology/autopilot\\ap_cint.h" 2
# 5 "source/CONV.h" 2

# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 1 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
# 41 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
# 76 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {



  template<typename _Tp>
    _Tp __cmath_power(_Tp, unsigned int);

  template<typename _Tp>
    inline _Tp
    __pow_helper(_Tp __x, int __n)
    {
      return __n < 0
        ? _Tp(1)/__cmath_power(__x, -__n)
        : __cmath_power(__x, __n);
    }

  inline double
  abs(double __x)
  { return __builtin_fabs(__x); }

  inline float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::acos;

  inline float
  acos(float __x)
  { return __builtin_acosf(__x); }

  inline long double
  acos(long double __x)
  { return __builtin_acosl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }

  using ::asin;

  inline float
  asin(float __x)
  { return __builtin_asinf(__x); }

  inline long double
  asin(long double __x)
  { return __builtin_asinl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;

  inline float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline long double
  atan(long double __x)
  { return __builtin_atanl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;

  inline float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }

  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }

  using ::ceil;

  inline float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;

  inline float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline long double
  cos(long double __x)
  { return __builtin_cosl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;

  inline float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;

  inline float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline long double
  exp(long double __x)
  { return __builtin_expl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;

  inline float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;

  inline float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline long double
  floor(long double __x)
  { return __builtin_floorl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;

  inline float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }

  using ::frexp;

  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;

  inline float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
  ldexp(_Tp __x, int __exp)
  { return __builtin_ldexp(__x, __exp); }

  using ::log;

  inline float
  log(float __x)
  { return __builtin_logf(__x); }

  inline long double
  log(long double __x)
  { return __builtin_logl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;

  inline float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline long double
  log10(long double __x)
  { return __builtin_log10l(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;

  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }

  using ::pow;

  inline float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }




  inline double
  pow(double __x, int __i)
  { return __builtin_powi(__x, __i); }

  inline float
  pow(float __x, int __n)
  { return __builtin_powif(__x, __n); }

  inline long double
  pow(long double __x, int __n)
  { return __builtin_powil(__x, __n); }


  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<
    typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value
        && __is_arithmetic<_Up>::__value,
        _Tp>::__type, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }

  using ::sin;

  inline float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline long double
  sin(long double __x)
  { return __builtin_sinl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;

  inline float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;

  inline float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;

  inline float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline long double
  tan(long double __x)
  { return __builtin_tanl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;

  inline float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
        double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }

}
# 497 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 3
namespace std {

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    fpclassify(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_fpclassify(0x0100, (0x0100 | 0x0400), 0x0400,
      (0x0400 | 0x4000), 0x4000, __type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isfinite(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isfinite(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isinf(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isinf(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnan(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnan(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnormal(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnormal(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    signbit(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_signbit(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreaterequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreaterequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isless(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isless(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isunordered(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isunordered(__type(__f1), __type(__f2));
    }

}






# 1 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 1 3
# 35 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cmath.tcc" 3
namespace std {

  template<typename _Tp>
    inline _Tp
    __cmath_power(_Tp __x, unsigned int __n)
    {
      _Tp __y = __n % 2 ? __x : _Tp(1);

      while (__n >>= 1)
        {
          __x = __x * __x;
          if (__n % 2)
            __y = __y * __x;
        }

      return __y;
    }

}
# 615 "D:/Vivado/2018.3/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cmath" 2 3
# 6 "source/CONV.h" 2

using namespace std;
# 29 "source/CONV.h"
char relu(char x);

void CONV(
   const char input_img[100*100],
   const char kernel[3*3],
   const char bias,
   const bool init,
   char output_img[98*98]);

void POOL(
   const char input_img[8*8],
   const bool pooling_type,
   const bool init,
   char output_img[4*4]);

void acc(const char input_img1[98*98],
   const char input_img2[98*98],
   char output_img[98*98]);

void CNN(
   volatile char *img_port,
   const char kernel[3*3*3],
   const char bias[8]);
# 2 "source/CNN.cpp" 2


char relu(char x){
#pragma HLS inline
 return x>0 ? x : 0;
}

void CONV(
   const char input_img[100*100],
   const char kernel[3*3],
   const char bias,
   const bool init,
   char output_img[98*98])
{_ssdm_SpecArrayDimSize(input_img, 10000);_ssdm_SpecArrayDimSize(kernel, 9);_ssdm_SpecArrayDimSize(output_img, 9604);

 char IBRAM[100][100];
 char OBRAM[98*98];
 char biasBRAM;
 char WBRAM[3][3];


 char i,j=0;
 char m,n=0;
 int k=0;


 for(i=0;i<100;i++){
  for(j=0;j<100;j++){
#pragma HLS PIPELINE II=1
 IBRAM[i][j] = input_img[i*100 +j];
  }
 }


 if(init){
  for(m=0;m<3;m++){
   for(n=0;n<3;n++){
#pragma HLS PIPELINE II=1
 WBRAM[m][n] = kernel[m*3 +n];
   }
  }
  biasBRAM=bias;
 }




 for(m=0;m<3;m++){
  for(n=0;n<3;n++){
   for (i = 0; i < 98; i++) {
    for (j = 0; j < 98; j++) {
#pragma HLS PIPELINE II=1
 char input_pixel = IBRAM[i+m][j+n];
     char temp = (input_pixel*WBRAM[m][n])>>8;
      if(m==0&&n==0)
       OBRAM[i*98 +j] = temp;
      else
       OBRAM[i*98 +j] += temp;
    }
   }
  }
 }


 for(k=0;k<98*98;k++){
#pragma HLS PIPELINE II=1
 output_img[k]=relu(OBRAM[k]+biasBRAM);
 }

}

void POOL(
   const char input_img[8*8],
   const bool pooling_type,
   const bool init,
   char output_img[4*4])
{_ssdm_SpecArrayDimSize(input_img, 64);_ssdm_SpecArrayDimSize(output_img, 16);

 char IBRAM[8][8];
 char OBRAM[4*4];


 char i,j=0;
 char m,n=0;
 int k=0;


 for(i=0;i<8;i++){
  for(j=0;j<8;j++){
#pragma HLS PIPELINE II=1
 IBRAM[i][j] = input_img[i*8 +j];
  }
 }




 for (i = 0; i < 4; i++) {
  for (j = 0; j < 4; j++) {
   if(pooling_type==1){
    char max=0;
    for(m=0;m<2;m++){
     for(n=0;n<2;n++){
#pragma HLS PIPELINE II=1
 char input_pixel = IBRAM[i*2 +m][j*2 +n];
      if(input_pixel>max)
       max=input_pixel;
     }
    }
    OBRAM[i*4 +j]=max;
   }
  }
 }


 for(k=0;k<4*4;k++){
#pragma HLS PIPELINE II=1
 output_img[k]=OBRAM[k];
 }

}

void acc(const char input_img1[98*98],
   const char input_img2[98*98],
   char output_img[98*98])
{_ssdm_SpecArrayDimSize(input_img1, 9604);_ssdm_SpecArrayDimSize(input_img2, 9604);_ssdm_SpecArrayDimSize(output_img, 9604);

 char i=0;

 for(i=0;i<98*98;i++){





   output_img[i]=input_img1[i]+input_img2[i];

 }
}


void CNN(
   volatile char *img_port,
   const char kernel[3*3*3],
   const char bias[8])
{_ssdm_SpecArrayDimSize(kernel, 27);_ssdm_SpecArrayDimSize(bias, 8);
#pragma HLS INTERFACE m_axi port=&img_port

 char buff_input_img[100*100];
#pragma HLS RESOURCE variable=&buff_input_img core=RAM_2P_BRAM
 char buff_output_img[98*98];
 char buff_result_img[98*98];


 char i,j=0;

 CNN_label0:for(i=0;i<3;i++){
  CNN_label1:for (j=0;j<8;j++){
   cout<<"img"<<i<<" & kerel"<<j<<"\n";
   if(i==0){

    memcpy(buff_input_img , (const char*)img_port+i*100*100 +0 , sizeof(buff_input_img));

    CONV(buff_input_img,kernel+(j*3*3)+(i*8*3*3),bias[i*8 +j],1,buff_output_img);

    memcpy((char *)img_port+j*98*98 +3*100*100 , buff_output_img , sizeof(buff_output_img));
    cout<<"writing on:"<<(char *)img_port+j*98*98 +3*100*100<<"\n";
   }
   else{

    memcpy(buff_input_img , (const char*)img_port+i*100*100 +0 , sizeof(buff_input_img));

    memcpy(buff_result_img , (const char*)img_port+j*98*98 +3*100*100 , sizeof(buff_result_img));
    cout<<"reading last result from:"<<(const char*)img_port+j*98*98 +3*100*100<<"\n";

    CONV(buff_input_img,kernel+(j*3*3)+(i*8*3*3),bias[i*8 +j],1,buff_output_img);

    acc(buff_result_img,buff_output_img,buff_output_img);

    memcpy((char *)img_port+j*98*98 +3*100*100 , buff_output_img , sizeof(buff_output_img));
    cout<<"writing on:"<<(char *)img_port+j*98*98 +3*100*100<<"\n";

   }
   cout<<"_______________________________\n";
  }
 }

}

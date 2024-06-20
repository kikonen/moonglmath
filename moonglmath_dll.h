// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the MOONGLMATH_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// MOONGLMATH_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef MOONGLMATH_EXPORTS
#define MOONGLMATH_API __declspec(dllexport)
#else
#define MOONGLMATH_API __declspec(dllimport)
#endif

//// This class is exported from the dll
//class MOONGLMATH_API Cmoonglmath {
//public:
//	Cmoonglmath(void);
//	// TODO: add your methods here.
//};
//
//extern MOONGLMATH_API int nmoonglmath;
//
//MOONGLMATH_API int fnmoonglmath(void);

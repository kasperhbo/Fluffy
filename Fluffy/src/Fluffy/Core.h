#pragma once


#ifdef HZ_PLATFORM_WINDOWS
	#ifdef HZ_BUILD_DLL
		#define FLUFFY_API __declspec(dllexport)
	#else
		#define FLUFFY_API __declspec(dllimport)
	#endif
#else
#error Fluffy only supports Windows!
#endif

#define BIT(x) (1 << x)
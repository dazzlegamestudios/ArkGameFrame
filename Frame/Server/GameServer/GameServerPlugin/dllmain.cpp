#include "SDK/Interface/AFPlatform.h"

#ifdef _DEBUG

#if NF_PLATFORM == NF_PLATFORM_WIN
#pragma comment( lib, "ws2_32" )
#pragma comment( lib, "AFCore_d.lib" )
#pragma comment( lib, "NFMessageDefine_d.lib" )
#pragma comment( lib, "libprotobuf_d.lib" )
//#pragma comment( lib, "libglog_static_d.lib" )


#elif NF_PLATFORM == NF_PLATFORM_LINUX || NF_PLATFORM == NF_PLATFORM_ANDROID
#pragma comment( lib, "AFCore_d.a" )
#pragma comment( lib, "NFMessageDefine_d.a" )
//#pragma comment( lib, "libglog_d.lib" )

#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
#endif

#else

#if NF_PLATFORM == NF_PLATFORM_WIN
#pragma comment( lib, "AFCore.lib" )
#pragma comment( lib, "NFMessageDefine.lib" )
#pragma comment( lib, "libprotobuf.lib" )

#elif NF_PLATFORM == NF_PLATFORM_LINUX || NF_PLATFORM == NF_PLATFORM_ANDROID
#pragma comment( lib, "AFCore.a" )
#pragma comment( lib, "NFMessageDefine.a" )
#pragma comment( lib, "libprotobuf.a" )
#elif NF_PLATFORM == NF_PLATFORM_APPLE || NF_PLATFORM == NF_PLATFORM_APPLE_IOS
#endif

#endif
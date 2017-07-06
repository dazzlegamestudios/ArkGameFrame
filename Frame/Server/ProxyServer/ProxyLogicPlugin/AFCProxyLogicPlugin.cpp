// -------------------------------------------------------------------------
//    @FileName			:    AFCProxyPlugin.h
//    @Author           :    Ark Game Tech
//    @Date             :    2013-05-06
//    @Module           :    AFCProxyPlugin
//
// -------------------------------------------------------------------------


#include "AFCProxyLogicPlugin.h"
#include "AFCProxyLogicModule.h"

//
//
#ifdef NF_DYNAMIC_PLUGIN

NF_EXPORT void DllStartPlugin(AFIPluginManager* pm)
{
#if NF_PLATFORM == NF_PLATFORM_WIN
    SetConsoleTitle("NFProxyServer");
#endif
    CREATE_PLUGIN(pm, NFProxyLogicPlugin)

};

NF_EXPORT void DllStopPlugin(AFIPluginManager* pm)
{
    DESTROY_PLUGIN(pm, NFProxyLogicPlugin)
};

#endif
//////////////////////////////////////////////////////////////////////////

const int NFProxyLogicPlugin::GetPluginVersion()
{
    return 0;
}

const std::string NFProxyLogicPlugin::GetPluginName()
{
    return GET_CLASS_NAME(NFProxyLogicPlugin)
}

void NFProxyLogicPlugin::Install()
{

    REGISTER_MODULE(pPluginManager, AFIProxyLogicModule, AFCProxyLogicModule)

}

void NFProxyLogicPlugin::Uninstall()
{
    UNREGISTER_MODULE(pPluginManager, AFIProxyLogicModule, AFCProxyLogicModule)
}
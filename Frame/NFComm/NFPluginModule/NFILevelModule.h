// -------------------------------------------------------------------------
//    @FileName         ��    NFIBuffModule.h
//    @Author           ��    Ark Game Tech
//    @Date             ��    2012-12-15
//    @Module           ��    NFIBuffModule
//
// -------------------------------------------------------------------------

#ifndef NFI_LEVEL_MODULE_H
#define NFI_LEVEL_MODULE_H

#include <iostream>
#include "NFIModule.h"


class NFILevelModule
    : public NFIModule
{
public:
    //nType:����ԭ��
    virtual int AddExp(const NFGUID& self, const int nExp) = 0;

};

#endif
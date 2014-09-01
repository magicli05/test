//
//  GlobalDefine.h
//  ball
//
//  Created by li jialiang on 8/26/14.
//
//

#ifndef __ball__GlobalDefine__
#define __ball__GlobalDefine__
#include "singleton.h"

class GlobalDefine {
public:
    float ratio = 48.0f;
public:
    GlobalDefine() = default;
    ~GlobalDefine() = default;
};
#define GlobalVar Singleton<GlobalDefine>::shareInstance
#endif /* defined(__ball__GlobalDefine__) */

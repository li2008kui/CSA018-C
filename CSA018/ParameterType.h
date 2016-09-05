//
//  ParameterType.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef ParameterType_h
#define ParameterType_h

#include <stdio.h>

#endif /* ParameterType_h */

typedef enum _ParameterType {
    GatewayId = 0x0001,// 网关ID
    ServerIP = 0x0002,// 服务器IP地址
    ServerPort = 0x0003,// 服务器端口号
} ParameterType;
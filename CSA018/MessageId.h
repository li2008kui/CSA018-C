//
//  MessageId.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef MessageId_h
#define MessageId_h

#include <stdio.h>

#endif /* MessageId_h */

typedef enum _MessageId {
    ConfigurationCommand = 0x1001,// 配置
    OperationMaintenance = 0x1002,// 维护
    SettingDefaultTurnOnTime = 0x1201,// 设置默认开灯时间
} MessageId;
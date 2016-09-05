//
//  MessageType.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef MessageType_h
#define MessageType_h

#include <stdio.h>

#endif /* MessageType_h */

typedef enum _MessageType {
    Command = 0x01,// 请求命令
    CommandACK = 0x02,// 响应命令
    Event = 0x03,// 事件和告警命令
    EventACK = 0x04,// 事件和告警响应命令
    CommandResult = 0x05,// 结果命令
    HeartbeatData = 0xff,// 心跳包数据命令
    HeartbeatResponse = 0xfe// 心跳包响应命令
} MessageType;
//
//  MessageHead.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef MessageHead_h
#define MessageHead_h

#include <stdio.h>
#include "MessageType.h"

#endif /* MessageHead_h */

typedef struct _MessageHead {
    MessageType MessageType;// 消息类型
    unsigned int SeqNumber;// 消息序号
    unsigned short Length;// 消息体长度
    unsigned long Reserved;// 预留字段
    unsigned int Crc32;// 消息体CRC32校验
} MessageHead;
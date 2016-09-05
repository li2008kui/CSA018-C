//
//  Datagram.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef Datagram_h
#define Datagram_h

#include <stdio.h>
#include "MessageHead.h"
#include "MessageBody.h"

#endif /* Datagram_h */

typedef struct _Datagram {
    unsigned char Stx;// 起始符
    MessageHead MessageHead;// 消息头
    MessageBody MessageBody;// 消息体
    unsigned char Etx;// 结束符
    char IsCryptographic;// 是否加密
} Datagram;
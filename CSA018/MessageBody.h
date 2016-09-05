//
//  MessageBody.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef MessageBody_h
#define MessageBody_h

#include <stdio.h>
#include "MessageId.h"
#include "Parameter.h"
#include "ErrorCode.h"

#endif /* MessageBody_h */

typedef struct _MessageBody {
    MessageId MessageId;// 消息ID
    unsigned int GatewayId;// 网关ID
    unsigned int LuminaireId;// 灯具ID
    Parameter Parameter;// 参数，链表头元素
    ErrorCode ErrorCode;// 错误代码
    char *ErrorInfo;// 错误信息
    unsigned char *DESKey;// DES 密钥
} MessageBody;
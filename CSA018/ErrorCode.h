//
//  ErrorCode.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef ErrorCode_h
#define ErrorCode_h

#include <stdio.h>

#endif /* ErrorCode_h */

typedef enum _ErrorCode {
    Succeed = 0x30303030,// 成功
    MessageParseError = 0x30303031,// 消息解析错误
} ErrorCode;
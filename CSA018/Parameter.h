//
//  Parameter.h
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#ifndef Parameter_h
#define Parameter_h

#include <stdio.h>
#include "ParameterType.h"

#endif /* Parameter_h */

typedef struct _Parameter {
    ParameterType Type;// 参数类型
    char *Value;// 参数值
    unsigned char End;// 参数值结束符
    struct _Parameter *Next;// 指向下一个参数
} Parameter;
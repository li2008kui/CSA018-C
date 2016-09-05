//
//  main.c
//  CSA018
//
//  Created by This Coder on 16/9/3.
//  Copyright © 2016年 ThisCoder. All rights reserved.
//

#include <stdio.h>
#include "Datagram.h"

Datagram GetDatagram() {
    Parameter pmt1 = {GatewayId, "aaa", 0};
    Parameter pmt2 = {ServerIP, "bbb", 0};
    Parameter pmt3 = {ServerPort, "ccc", 0};
    
    pmt1.Next = &pmt2;
    pmt2.Next = &pmt3;
    
    MessageHead head = {Command, 0, 0, 0, 0};
    MessageBody body = {ConfigurationCommand, 0, 0, pmt1};
    Datagram datagram = {0x02, head, body, 0x03, 0x00};
    return datagram;
}

int main(int argc, const char * argv[]) {
    Datagram datagram = GetDatagram();
    Parameter pmt = datagram.MessageBody.Parameter;
    
    while (pmt.Next) {
        pmt = *(pmt.Next);
    }
    
    return 0;
}
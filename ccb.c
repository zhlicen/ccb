#include <stdio.h>
#include "ccb.h"

PCb mcb = 0;

void SetCb(PCb cb){
    mcb = cb;
}

void CallC(int var){
    printf("C: CallC:%d\n", var);
    if(mcb != 0) {
        mcb(var);
    }
}
#include <stdio.h>
#include "ccb.h"

PCb mcb = 0;

void SetCb(PCb cb){
    mcb = cb;
}

void CallC(char** str_slice, int size){
    printf("C: CallC:%d\n", size);
    if(mcb != 0) {
        mcb(str_slice, size);
    }
}
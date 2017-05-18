#include <stdio.h>
#include "libccb.h"

int CB(char** str_slice, int size) {
    int i = 0;
    for(i = 0; i < size; i++) {
        char *s = str_slice[i];
        printf("[%d]%s\n", i, s);
    }
    return 0;
}

int main() {
    printf("ccb_test\n");
    SetCb(&CB);
    CallGo(5);
    return 0;
}
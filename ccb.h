#ifndef _CCB_H_
#define _CCB_H_
// Callback definition
typedef int (*PCb)(char**, int);
extern void SetCb(PCb pf);

// Interface for go to call this callback
extern void CallC(char** str_slice, int size);

#endif



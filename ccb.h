#ifndef _CCB_H_
#define _CCB_H_
// Callback definition
typedef int (*PCb)(int);
extern void SetCb(PCb pf);

// Interface for go to call this callback
extern void CallC(int var);

#endif



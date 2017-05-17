package main

/*
#cgo LDFLAGS: libccbc.a
#include "ccb.h"
*/
import "C"
import "fmt"

//export CallGo
func CallGo(param int) {
	fmt.Println("go:CallGo: %d", param)
	C.CallC(C.int(param))
}

func main() {

}

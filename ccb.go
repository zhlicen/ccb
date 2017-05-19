package main

/*
#cgo LDFLAGS: libccbc.a
#include <stdlib.h>
#include "ccb.h"
*/
import "C"
import (
	"fmt"
	"unsafe"
)

//export CallGo
func CallGo(param int) {
	// goResult := strings.Split(C.GoString(original), C.GoString(split))
	cArray := C.malloc(C.size_t(param) * C.size_t(unsafe.Sizeof(uintptr(0))))

	// convert the C array to a Go Array so we can index it
	a := (*[1<<30 - 1]*C.char)(cArray)
	idx := 0
	for idx := 0; idx < param; idx++ {
		a[idx] = C.CString(fmt.Sprintf("go string slice:%d", idx))
	}

	fmt.Println("go:CallGo:", param)
	C.CallC((**C.char)(cArray), C.int(param))
	for idx := 0; idx < param; idx++ {
		C.free(unsafe.Pointer(a[idx]))
	}
	C.free(unsafe.Pointer(a))
}

func main() {

}

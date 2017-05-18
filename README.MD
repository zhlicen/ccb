# CCB

## Example of C callback from go

### Background

When you call a go static library in C/C++ application, the C/C++ need callback from go for some purposes.
This example shows how to implement a C callback from go.

### Code Construction

- C Bridge: ccb.c/ccb.h
- Go Library: ccb.go
- C Application: ccb_test.c

## Usage

### Generate ccb library

```bash
gcc -c ccb.c -o ccb.o
ar -rvs libccbc.a ccb.o
```

### Generate go static library

```bash
go build --ldflags '-extldflags "-static"' -buildmode=c-archive -o libccb.a ccb.go
```

### Generate C application

```bash
gcc -c ccb_test.c -o ccb_test.o
gcc ccb_test.o -pthread libccb.a libccbc.a -o ccb_test.out
```

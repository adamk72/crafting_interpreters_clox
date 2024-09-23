#ifndef clox_compiler_h
#define clox_compiler_h

#include "../include/object.h"
#include "../include/chunk.h"

ObjFunction* compile(const char* source);
void markCompilerRoots(void);

#endif

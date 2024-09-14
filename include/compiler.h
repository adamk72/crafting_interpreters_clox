#ifndef clox_compiler_h
#define clox_compiler_h

#include "../include/object.h"
#include "../include/chunk.h"

bool compile(const char* source, Chunk* chunk);

#endif

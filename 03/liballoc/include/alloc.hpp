#pragma once

#include <iostream>

namespace alc {
struct Allocator;

Allocator* init_allocator(size_t maxSize);
char* alloc(Allocator *alloc, size_t size);
void reset(Allocator *alloc);
void clear(Allocator *alloc);
} //end of alc
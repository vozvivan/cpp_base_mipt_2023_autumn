#include "alloc.hpp"

struct alc::Allocator {
    char* pointer;
    size_t size;
    size_t offset;
};

alc::Allocator* alc::init_allocator(size_t maxSize) {
    alc::Allocator* allocator = new alc::Allocator;
    allocator->size = maxSize;
    allocator->offset = 0;
    allocator->pointer = new char[maxSize];
    return allocator;
}
char* alc::alloc(alc::Allocator *alloc, size_t size) {
    if(alloc->offset + size > alloc ->size) {
        return nullptr; // недостаточно памяти
    }
    char* allocatedMemory = alloc->pointer + alloc->offset;
    alloc->offset += size;
    return allocatedMemory;
}
void alc::reset(alc::Allocator *alloc) {
    alloc->offset = 0;
}
void alc::clear(alc::Allocator *alloc) {
    delete[] alloc->pointer;
    delete alloc;
}


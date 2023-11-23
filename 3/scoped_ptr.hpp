#pragma once

namespace my {

// scoped_ptr mp = ...
// scoped_ptr<int> mp = ...
template<typename T> class scoped_ptr {
private:
    T* _ptr;

public:
    scoped_ptr(T* ptr) : _ptr(ptr) {}
    ~scoped_ptr() { delete _ptr; }

    T* operator->() const { return _ptr; }
    T operator*() const { return *_ptr; }

    T* get() const { return _ptr; }

    scoped_ptr(const scoped_ptr& rhs) = delete;
    scoped_ptr(scoped_ptr&& rhs) = delete;
};

} // namespace my
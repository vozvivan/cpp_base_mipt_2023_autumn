#include <fib.h>

int fib::ops::Fib(int n) {
    if (n < 0) {
        return 0;
    }
    if (n < 2) {
        return n;
    }

    return Fib(n-1) + Fib(n-2);
}

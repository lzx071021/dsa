//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_SEARCH_FIBNACCI_H
#define DSA_VECTOR_SEARCH_FIBNACCI_H

#include "../_shared/Fib.h"
#include "vector.h"

template <typename T>
static Rank fibSearch(T *A, const T &e, Rank lo, Rank hi) {
    Fib fib(hi - lo);
    while (lo < hi) {
        while (hi - lo < fib.get()) fib.prev();
        Rank mi = lo + fib.get() - 1;
        if (e < A[mi]) hi = mi;
        else if (A[mi] < e) lo = mi + 1;
        else return mi;
    }
    return -1;
}


#endif //DSA_VECTOR_SEARCH_FIBNACCI_H

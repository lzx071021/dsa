//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_SEARCH_BINARY_C_H
#define DSA_VECTOR_SEARCH_BINARY_C_H

#include "vector.h"

template <typename T>
static Rank binSearch(T *A, const T &e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (hi + lo) >> 1;
        (e < A[mi]) ? hi = mi : lo = mi + 1;
    }
    return lo - 1;
}

#endif //DSA_VECTOR_SEARCH_BINARY_C_H

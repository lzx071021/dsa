//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_SEARCH_BINARY_B_H
#define DSA_VECTOR_SEARCH_BINARY_B_H

#include "vector.h"

template <typename T>
static Rank binSearch(T *A, const T &e, Rank lo, Rank hi) {
    while (hi - lo > 1) {
        Rank mi = (hi + lo) >> 1;
        (e < A[mi]) ? hi = mi : lo = mi;
    }
    return (e == A[lo]) ? lo : -1;
}
#endif //DSA_VECTOR_SEARCH_BINARY_B_H

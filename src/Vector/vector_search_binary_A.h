//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_BINSEARCH_H
#define DSA_BINSEARCH_H

#include "vector.h"

template<typename T>
static Rank binSearch(T *A, const T &e, Rank lo, Rank hi) {
    while (lo < hi) {
        Rank mi = (hi + lo) >> 1;
        if (e < A[mi]) hi = mi;
        else if (e > A[mi]) lo = mi + 1;
        else return mi;
    }
    return -1;
}
#endif //DSA_BINSEARCH_H

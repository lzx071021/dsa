//
// Created by 聂师聪 on 2019-03-30.
//

#ifndef DSA_VECTOR_SORT_MERGE_H
#define DSA_VECTOR_SORT_MERGE_H

#include "vector.h"

template <typename T>
void Vector<T>::merge(Rank lo, Rank mi, Rank hi) {
    T *A = _elem + lo;
    Rank lb = mi - lo; T *B = new T[lb]; for (Rank i = 0; i < lb; B[i++] = A[i]);
    Rank lc = hi - mi; T *C = _elem + mi;
    for (Rank i = 0, j = 0, k = 0; (j < lb) || (k < lc)) {
        if ((j < lb) && (!(k < lc) || (B[j] <= C[k]))) A[i++] = B[j++];
        if ((k < lc) && (!(j < lb) || (C[k] < B[j])))  A[i++] = C[k++];
    }
    delete [] B;
}

template <typename T>
void Vector<T>::mergeSort(Rank lo, Rank hi) {
    if (hi - lo <= 1) return;
    Rank mi = (lo + hi) >> 1;
    mergeSort(lo, mi); mergeSort(mi, hi);
    merge(lo, mi, hi);
}
#endif //DSA_VECTOR_SORT_MERGE_H

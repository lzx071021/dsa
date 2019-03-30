//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_REMOVE_H
#define DSA_VECTOR_REMOVE_H

#include "vector.h"

template <typename T>
int Vector<T>::remove(Rank lo, Rank hi) {
    if (hi - lo == 0) return 0;
    while (hi < _size) _elem[lo++] = _elem[hi++];
    _size = lo;
    shrink();
    return hi - lo;
}

template <typename T>
T Vector<T>::remove(Rank r) {
    T e = _elem[r];
    remove(r, r + 1);
    return e;
}


#endif //DSA_VECTOR_REMOVE_H

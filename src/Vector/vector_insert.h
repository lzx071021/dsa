//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_INSERT_H
#define DSA_VECTOR_INSERT_H

#include "vector.h"

template <typename T>
Rank Vector<T>::insert(Rank r, const T &e) {
    expand();
    for (int i = _size; i > r; --i)
        _elem[i] = _elem[i - 1];
    _elem[r] = e;
    ++_size;
    return r;
}

#endif //DSA_VECTOR_INSERT_H

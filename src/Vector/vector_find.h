//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_FIND_H
#define DSA_VECTOR_FIND_H

#include "vector.h"

template <typename T>
Rank Vector<T>::find(const T &e, Rank lo, Rank hi) const {
    // assert: 0 <= lo < hi <= _size
    while ((lo < hi--) && (e != _elem[hi]));
    return hi;
}

#endif //DSA_VECTOR_FIND_H

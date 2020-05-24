//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_DISORDERED_H
#define DSA_VECTOR_DISORDERED_H

#include "vector.h"

template <typename T>
int Vector<T>::disordered() const {
    int n = 0;
    for (int i = 1; i < _size; ++i)
        if (_elem[i - 1] < _elem[i]) ++n;
    return n;
}
#endif //DSA_VECTOR_DISORDERED_H

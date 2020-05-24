//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_SHRINK_H
#define DSA_VECTOR_SHRINK_H

#include "vector.h"

template<typename T>
void Vector<T>::shrink() {
    if (_capacity < DEFAULT_CAPACITY << 1) return;
    if (_size << 2 > _capacity) return;
    T * oldElem = _elem;
    _elem = new T[_capacity >> 1];
    for (int i = 0; i < _size; _elem[i++] = oldElem[i++]);
    delete [] oldElem;
}

#endif //DSA_VECTOR_SHRINK_H

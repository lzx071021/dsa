//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_EXPAND_H
#define DSA_VECTOR_EXPAND_H

#include "vector.h"

template<typename T>
void Vector<T>::expand() {
    if (_size < _capacity) return;
    if (_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
    T *oldElem = _elem;
    _elem = new T[_capacity <<= 1];
    for (int i = 0; i < _size; _elem[i++] = oldElem[i++]);
    delete [] oldElem;
}

#endif //DSA_VECTOR_EXPAND_H

//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_TRAVERSE_H
#define DSA_VECTOR_TRAVERSE_H

#include "vector.h"
#include "../_shared/increase.h"

template <typename T>
void Vector<T>::traverse(void (*visit)(T &e)) {
    for (int i = 0; i < _size; visit(_elem[i++]));
}

template <typename T> template <typename VST>
void Vector<T>::traverse(VST &visit) {
    for (int i = 0; i < _size; visit(_elem[i++]));
}
#endif //DSA_VECTOR_TRAVERSE_H

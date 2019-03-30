//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_DEDUPLICATE_H
#define DSA_VECTOR_DEDUPLICATE_H

#include "vector.h"

template<typename T>
int Vector<T>::deduplicate() {
    int oldSize = _size;
    Rank i = 1;
    while (i < _size)
        (find(_elem[i], 0, i) < 0) ? ++i : remove(i);
    return oldSize - _size;
}



#endif //DSA_VECTOR_DEDUPLICATE_H

//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_UNIQUIFY_H
#define DSA_VECTOR_UNIQUIFY_H

#include "vector.h"

template<typename t>
int Vector<t>::uniquify() {
    int oldSize = _size;
    Rank i = 0, j = 0;
    while (++j < _size)
        if (_elem[j] != _elem[i])
            _elem[++i] = _elem[j];
    _size = i + 1;
    shrink();
    return oldSize - _size;
}

#endif //DSA_VECTOR_UNIQUIFY_H

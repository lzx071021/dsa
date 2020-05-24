//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_UNSORT_H
#define DSA_VECTOR_UNSORT_H

#include <cstdlib>
#include <ctime>

#include "vector.h"

template <typename T>
void Vector<T>::unsort(Rank lo, Rank hi) {
    srand(time(NULL));
    T *V = _elem + lo;
    for (Rank i = hi - lo; i > 0; --i)
        swap(V[i - 1], V[rand() % i]);
}

#endif //DSA_VECTOR_UNSORT_H

//
// Created by 聂师聪 on 2019-03-30.
//

#ifndef DSA_VECTOR_SORT_BUBBLESORT_H
#define DSA_VECTOR_SORT_BUBBLESORT_H

#include "vector.h"
#include "../_shared/swap.h"

template <typename T>
void Vector<T>::bubbleSort(Rank lo, Rank hi) {
    while (!bubble(lo, hi--));
}

template <typename T>
bool Vector<T>::bubble(Rank lo, Rank hi) {
    bool sorted = true;
    while (lo++ < hi) {
        if (_elem[lo - 1] > _elem[lo])
            sorted = false;
        swap(_elem[lo - 1], _elem[lo]);
    }
    return sorted;
}
#endif //DSA_VECTOR_SORT_BUBBLESORT_H

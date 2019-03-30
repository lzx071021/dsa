//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_SORT_H
#define DSA_VECTOR_SORT_H

#include <cstdlib>
#include <ctime>

#include "vector.h"
#include "vector_sort_bubble.h"
#include "vector_sort_merge.h"

template <typename T>
void Vector<T>::sort(Rank lo, Rank hi) {
    srand(time(NULL));
    switch (rand() % 2) {
        case 0: bubbleSort(lo, hi); break;
        case 1: mergeSort(lo, hi); break;
    }
}
#endif //DSA_VECTOR_SORT_H

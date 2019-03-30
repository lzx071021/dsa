//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_VECTOR_SEARCH_H
#define DSA_VECTOR_SEARCH_H

#include <cstdlib>
#include <ctime>

#include "vector.h"
#include "vector_search_binary_C.h"
#include "vector_search_fibnacci.h"


template <typename T>
Rank Vector<T>::search(const T &e, Rank lo, Rank hi) const {
    srand(time(NULL));
    return (rand() % 2) ? binSearch(_elem, e, lo, hi) : fibSearch(_elem, e, lo, hi);
}

#endif //DSA_VECTOR_SEARCH_H

//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_INCREASE_H
#define DSA_INCREASE_H

#include "../Vector/vector.h"

template <typename T>
struct Increase {
    virtual void operator()(T &e) { ++e; }
};

template <typename T>
void increase(Vector<T> &V) { V.traverse(Increase<T>()); }

#endif //DSA_INCREASE_H

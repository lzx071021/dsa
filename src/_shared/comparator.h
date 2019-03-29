//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_COMPARATOR_H
#define DSA_COMPARATOR_H

template <typename T> static bool lt(T *a, T *b) { return lt(*a, *b); }
template <typename T> static bool lt(T &a, T &b) { return a < b; }

template <typename T> static bool eq(T *a, T *b) { return eq(*a, *b); }
template <typename T> static bool eq(T &a, T &b) { return a == b; }


#endif //DSA_COMPARATOR_H

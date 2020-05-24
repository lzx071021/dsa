//
// Created by 聂师聪 on 2019-03-29.
//

#ifndef DSA_SWAP_H
#define DSA_SWAP_H

template <typename T>
void swap(T &a, T &b) {
    T tmp = a;
    a = b;
    b = tmp;
}

#endif //DSA_SWAP_H

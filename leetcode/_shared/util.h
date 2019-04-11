//
// Created by 聂师聪 on 2019-04-03.
//

#ifndef DSA_UTIL_H
#define DSA_UTIL_H

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void print_vec(vector<T> &vec) {
    for (auto e : vec)
        cout << e << " ";
    cout << endl;
}
#endif //DSA_UTIL_H

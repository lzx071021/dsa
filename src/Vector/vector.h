//
// Created by 聂师聪 on 2019-03-27.
//

#ifndef DSA_DSA_VECTOR_H
#define DSA_DSA_VECTOR_H

typedef int Rank;
#define DEFAULT_CAPACITY 3

template <typename T> class Vector {
  public:
    // constructors
    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0) // 容量为c， 规模为s， 所有元素初始化为v
    { _elem = new T[_capacity = c];}
    Vector(T const *A, Rank n) { copyFrom(A, 0, n); } // 数组整体复制
    Vector(T const *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); } // 区间复制

    // destructor
    ~Vector() { delete [] _elem; }


  protected:
    // data members
    Rank _size; int _capacity; T *_elem; // 当前规模， 当前最大容量， 数据域

    void copyFrom(const T *A, Rank lo, Rank hi);
    void expand();
    void shrink();

    // sort algorithms
};

#endif //DSA_DSA_VECTOR_H

//
// Created by 聂师聪 on 2019-03-27.
// My own Vector
//


#ifndef DSA_SRC_VECTOR_H
#define DSA_SRC_VECTOR_H

typedef int Rank;
#define DEFAULT_CAPACITY 3


template<typename T> class Vector {
  public:
    Vector(int c = DEFAULT_CAPACITY, int s = 0, T v = 0); // 容量为c， 规模为s， 所有元素初始化为v
    Vector(const T *A, Rank n) { copyFrom(A, 0, n); } // 数组整体复制
    Vector(const T *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); } // 区间复制

    ~Vector() { delete [] _elem; }

    // Writeable
    T& operator[](Rank r) const;
    Vector<T>& operator=(const Vector<T> &);
    Rank insert(Rank r, const T &e);
    int remove(Rank lo, Rank hi);
    T remove(Rank r);
    void unsort(Rank lo, Rank hi);
    void unsort() { unsort(0, _size); }
    int deduplicate();
    int uniquify();

    void traverse(void (*) (T &));
    template <typename VST> void traverse(VST &);

    // Read-only
    Rank size() const { return _size; }
    bool empty() const { return !_size; }
    Rank find(const T &e, Rank lo, Rank hi) const;
    Rank find(const T &e) const { return find(e, 0, _size); }

    int disordered() const;
    Rank search(const T &e, Rank lo, Rank hi) const;
    Rank search(const T &e) const { return (_size <= 0) ? -1 : search(e, 0, _size); }
    void sort(Rank lo, Rank hi);
    void sort() { sort(0, _size); }

  protected:
    Rank _size; int _capacity; T *_elem; // 当前规模， 当前最大容量(以元素为单位）， 数据域

    void copyFrom(const T *A, Rank lo, Rank hi);
    void expand();
    void shrink();
    bool bubble(Rank lo, Rank hi);
    void bubbleSort(Rank lo, Rank hi);
    void merge(Rank lo, Rank hi);
    void mergeSort(Rank lo, Rank hi);

}; // Vector

template<typename T>
Vector<T>::Vector(int c, int s, T v) {
    _elem = new T[_capacity = c];
    for (_size = 0; _size < s; _elem[_size++] = v);
}

template<typename T>
T &Vector<T>::operator[](Rank r) const {
    // TODO
    return _elem[r]; // assert 0 <= r < _size
}

template<typename T>
Vector<T> &Vector<T>::operator=(const Vector<T> &V) {
    if (_elem) delete [] _elem;
    copyFrom(V._elem, 0, V._elem);
    return *this;
}

template<typename T>
void Vector<T>::copyFrom(const T *A, Rank lo, Rank hi) {
    _elem = new T[_capacity = (hi - lo) << 1];
    _size = 0;
    while (lo < hi) _elem[_size++] = A[lo++];
}

#include "vector_implementation.h"

#endif //DSA_SRC_VECTOR_H


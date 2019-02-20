//
// Created by haowei on 2/19/19.
//

#include "Vector.h"

template <typename T>
void Vector<T>::swap(const T& e1, const T& e2) {
    T temp = e1;
    e1 = e2;
    e2 = temp;
}

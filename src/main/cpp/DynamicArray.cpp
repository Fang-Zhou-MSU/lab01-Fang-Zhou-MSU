/**
 * CSC232 - Data Structures
 * Missouri State University, Spring 2025
 *
 * @file    DynamicArray.cpp
 * @author  Jim Daehn <jdaehn@missouristate.edu>
 * @brief   DynamicArray implementation.
 * @version 1.0.0
 * @date    01/01/2025
 *
 * @copyright Copyright (c) 2025 James R. Daehn
 */

#include "DynamicArray.h"

namespace csc232 {

    template<typename T>
    DynamicArray<T>::DynamicArray(const T data[], const size_t size, const size_t capacity) : data_{new T[capacity]}, size_{size},
        capacity_{capacity} {
        for (size_t i = 0; i < size; i++) {
            data_[i] = data[i];
        }
    }

    // TODO: Task 1a - Implement me accordingly
    template<typename T>
    DynamicArray<T>::DynamicArray() :
    data_{new T[DEFAULT_CAPACITY]}, size_{0}, capacity_{DEFAULT_CAPACITY}
    {}

    // TODO: Task 1b - Free resources accordingly
    template<typename T>
    DynamicArray<T>::~DynamicArray() {
        delete[] data_;     // Free the dynamic allocated array
        data_ = nullptr;    // Prevent dangling pointer
    }

    // TODO: Task 1c - Implement me accordingly
    template<typename T>
    DynamicArray<T>::DynamicArray(const DynamicArray &src) : data_{new T[src.capacity_]}, size_{src.size_}, capacity_{src.capacity_}
    //  Allocate new memory and copy size and capacity
    {
        for (size_t i = 0; i < size_; i++){
            data_[i] = src.data_[i];
        }   // end of for loop, copy elements from source array to new array
    }


// TODO: Task 2 - Implement me accordingly
template<typename T>
DynamicArray<T> &DynamicArray<T>::operator=(const DynamicArray &rhs) {
  return *this;
}

template<typename T>
const T &DynamicArray<T>::operator[](int index) const {
    return data_[index];
}

template<typename T>
T &DynamicArray<T>::operator[](int index) {
  return data_[index];
}

template<typename T>
size_t DynamicArray<T>::size() const {
    return size_;
}

template<typename T>
size_t DynamicArray<T>::capacity() const {
    return capacity_;
}
} // csc232

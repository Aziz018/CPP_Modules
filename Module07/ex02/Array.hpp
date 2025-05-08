/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: p4nd4 <p4nd4@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 16:59:00 by aelkheta@st       #+#    #+#             */
/*   Updated: 2025/05/08 08:53:03 by p4nd4            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>         // std::cout
#include <stdexcept>        // std::out_of_range

template <typename T>
class Array
{
    private:
        unsigned int _size;
        T *_array;

    public:
        Array();
        Array( unsigned int n );
        Array( const Array& other );
        Array<T>& operator= ( T& copy );

        T& operator[] ( unsigned int index );
        unsigned int size();
        ~Array();
};

template <typename T>
Array<T>::Array() : _size( 0 ) , _array( NULL ) {
}

template <typename T>
Array<T>::Array( unsigned int n ) {
    this->_size = n;
    if (this->_size == 0) {
        this->_array = NULL;
    }
    else {
        this->_array = new T[this->_size]; // should init with default.
        for (unsigned int i = 0; i < this->_size; i++) {
            this->_array[i] = 0;
        }
    }
}

template <typename T>
Array<T>::Array( const Array& other ) {
    this->_size = other._size;
    if (this->_size == 0) {
        this->_size = 0;
        this->_array = NULL;
    }
    else {
        this->_array = new T[other._size];
        for (unsigned int i = 0; i < _size; i++) {
            this->_array[i] = other._array[i];
        }
    }
}

template <typename T>
Array<T>& Array<T>::operator= ( T& copy ) {
    if (this != &copy) {
        this->_size = copy._size;
        if (this->_size == 0) {
            this->_size = 0;
            this->_array = NULL;
        }
        else {
            this->_array = new T[copy._size];
            for (unsigned int i = 0; i < _size; i++) {
                this->_array[i] = copy._array[i];
            }
        }
    }
    return *this;
}

template <typename T>
unsigned int Array<T>::size() {
    return this->_size;
}

template <typename T>
T& Array<T>::operator[] ( unsigned int index ) {
    if (index >= this->_size) {
        throw std::out_of_range("index is out of bounds");
        // throw std::exception("index is out of bounds");
    }
    return this->_array[index];
}

template <typename T>
Array<T>::~Array() {
    delete[] this->_array;
}

// template <typename T>
// class Array
// {
//     private:
//         unsigned int _size;
//         T *_array;

//     public:
//         Array() : _size( 0 ) , _array( NULL ) {
//         }

//         Array( unsigned int n ) {
//             this->_size = n;
//             if (this->_size == 0) {
//                 this->_array = NULL;
//             }
//             else {
//                 this->_array = new T[this->_size]; // should init with default.
//                 for (unsigned int i = 0; i < this->_size; i++) {
//                     this->_array[i] = 0;
//                 }
//             }
//         }

//         Array( const Array& other ) {
//             this->_size = other._size;
//             if (this->_size == 0) {
//                 this->_size = 0;
//                 this->_array = NULL;
//             }
//             else {
//                 this->_array = new T[other._size];
//                 for (unsigned int i = 0; i < _size; i++) {
//                     this->_array[i] = other._array[i];
//                 }
//             }
//         }

//         Array<T>& operator= ( T& copy ) {
//             if (this != &copy) {
//                 this->_size = copy._size;
//                 if (this->_size == 0) {
//                     this->_size = 0;
//                     this->_array = NULL;
//                 }
//                 else {
//                     this->_array = new T[copy._size];
//                     for (unsigned int i = 0; i < _size; i++) {
//                         this->_array[i] = copy._array[i];
//                     }
//                 }
//             }
//             return *this;
//         }

//         unsigned int size() {
//             return this->_size;
//         }

//         T& operator[] ( unsigned int index ) {
//             if (index >= this->_size) {
//                 throw std::out_of_range("index is out of bounds");
//                 // throw std::exception("index is out of bounds");
//             }
//             return this->_array[index];
//         }

//         ~Array() {
//             delete[] this->_array;
//         }
// };

#endif
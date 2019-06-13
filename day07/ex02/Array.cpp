/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:45:09 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/13 22:34:00 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
# include <iostream>

template<typename T>
Array<T>::Array(void) : _length(0), _arr(0) {
    //Array<T> Allows the construstion of the class
    return;
}

template<typename T>
Array<T>::Array(unsigned int len) : _length(len) {
    this->_arr = new T[len];
}

template<typename T>
Array<T>::Array(Array const &obj) {
    *this = obj;
    return;
}

// Construction by assignment operator? given length and some form of values?

template<typename T>
Array<T>::~Array(void) {
    delete[] this->_arr;
    this->_arr = 0; //Set it to nothing so it can be deleted.
    this->_length = 0;

}

template<typename T>
Array<T>				&Array<T>::operator=(const Array &obj) {
    this->_length = obj._length;
    if (this->_arr) {
        delete[] this->_arr; //Get rid of exsiting array, if there is one
    }
    this->_arr = new T[this->_length];          //Copy
    for (int i=0; i< this->_length; i++) {
        this->_arr[i] = obj._arr[i];
    }
    return (*this);
}

//Used to access elements of the array, else throw exception (i.e. out of range)
template<typename T>
T					&Array<T>::operator[](unsigned int i) {
    if (i < this->_length) {
        return (this->_arr[i]);
    } else {
        throw std::exception();
    }
}

template<typename T>
unsigned int		Array<T>::size() const {
    return (this->_length);
}
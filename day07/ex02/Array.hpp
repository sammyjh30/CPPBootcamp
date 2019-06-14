/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:46:32 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/14 10:51:07 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

// https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp
#include <iostream>
#include <exception>

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int len);
		Array<T>(Array<T> const &obj);
		~Array<T>(void);
		Array<T>			&operator=(const Array<T> &obj);

		unsigned int		size() const;		//unsigned because there would never be a negative value
		T					&operator[](unsigned int i);
	private:
		unsigned int		_length;			// Keeps the size, so that we don't take variables in the size function
		T					*_arr;

};

//Definition needs to be in the hpp file when using templates

template<typename T>
Array<T>::Array(void) : _length(0), _arr(nullptr) {
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

template<typename T>
Array<T>::~Array(void) {
	delete[] this->_arr;
	this->_arr = nullptr;									//Set it to nothing so it can be deleted.
	this->_length = 0;

}

template<typename T>
Array<T>				&Array<T>::operator=(const Array &obj) {
	if (this->_arr) {
		delete[] this->_arr; 							//Get rid of exsiting array, if there is one
	}
	this->_length = obj._length;
	this->_arr = new T[obj._length];					//Copy
	for (unsigned int i=0; i < this->_length; i++) {
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

#endif
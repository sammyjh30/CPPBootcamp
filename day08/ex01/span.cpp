/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 18:24:28 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/14 18:24:30 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(void) {
	std::vector<int> vector(0); 
	this->_vector = vector;
}

Span::Span(unsigned int N) {
	std::vector<int> vector(N); 
	this->_vector = vector;
}

Span::Span(unsigned int N, int *nums) {
	std::vector<int> vector(N); 
	this->_vector = vector;
	for (int i=0; i < sizeof(nums); i++) {
		if (this->_vector.size() < this->_vector.capacity()) {
			this->_vector.push_back(nums[i]);
		} else {
			throw std::range_error("Error: Capacity exceeded.");
		}
	}
}

Span::Span(Span const &obj) {
	*this = obj;
}

Span::~Span(void) { return; }

Span			&Span::operator=(const Span &obj) {
	this->_vector = obj._vector;
	return (*this);
}

void			Span::addNumber(int n) {
	if (this->_vector.size() < this->_vector.capacity()) {
		this->_vector.push_back(n);
	} else {
		throw std::range_error("Error: Capacity exceeded.");
	}
}

void			Span::addNumbers(int *nums) {
	for (int i=0; i < sizeof(nums); i++) {
		if (this->_vector.size() < this->_vector.capacity()) {
			this->_vector.push_back(nums[i]);
		} else {
			throw std::range_error("Error: Capacity exceeded.");
		}
	}
}

int				Span::shortestSpan(void) {
	if (this->_vector.size() < 2) {
		throw std::range_error("Error: Cannot get span, size of vector too small.");
	}
	std::vector<int> temp = this->_vector; 
	std::sort(temp.begin(), temp.end());
	for (int i = 1; i < temp.size(); i++) {
		
	}
}

int				Span::longestSpan(void) {
	if (this->_vector.size() < 2) {
		throw std::range_error("Error: Cannot get span, size of vector too small.");
	}
	std::vector<int> temp = this->_vector; 
	// sort, then get the difference from max or min
	std::sort(temp.begin(), temp.end());
	int max = *(std::max_element(temp.begin(), temp.end()));
	int min = *(std::min_element(temp.begin(), temp.end()));
	return (max - min);
}
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
	std::list<int> list(0); 
	this->_list = list;
}

Span::Span(unsigned int N) {
	std::list<int> list(N); 
	this->_list = list;
}

Span::Span(unsigned int N, int *nums) {

}

Span::~Span(void) {

}

Span			&Span::operator=(const Span &obj) {

}

void			Span::addNumber(int n) {
	if (this->_list.size() < this->_list.)
}

std::string		Span::shortestSpan(void) {

}

std::string		Span::longestSpan(void) {

}
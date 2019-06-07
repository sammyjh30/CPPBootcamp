/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:02:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/07 15:28:42 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout<<"Default constructor called"<<std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(const int n) {
	std::cout<<"Int constructor called"<<std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(const float f) {
	std::cout<<"Default constructor called"<<std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout<<"Copy constructor called"<<std::endl;
	this->_fixedPointValue = obj._fixedPointValue;
	return ;
}

Fixed::~Fixed() {
	std::cout<<"Destructor called"<<std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &f) {
	this->_fixedPointValue = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const{
	return (this->_fixedPointValue);
}

void	Fixed::setRawbits(int const raw) {
	this->_fixedPointValue = raw;
}
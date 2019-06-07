/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:02:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/07 17:26:18 by shillebr         ###   ########.fr       */
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
	this->_fixedPointValue = n << (1 * this->_fractionalBits);
	return ;
}

Fixed::Fixed(const float f) {
	std::cout<<"Float constructor called"<<std::endl;
	// https://embeddedartistry.com/blog/2018/7/9/template-rayb2
	this->_fixedPointValue = (int)roundf((f * (double)(1 << _fractionalBits)));
	return ;
}

Fixed::Fixed(const Fixed &obj) {
	std::cout<<"Copy constructor called"<<std::endl;
	// this->_fixedPointValue = obj.getRawBits();
	*this= obj;
	return ;
}

Fixed::~Fixed() {
	std::cout<<"Destructor called"<<std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &f) {
	std::cout<<"Assignation operator called"<<std::endl;
	this->_fixedPointValue = f.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const{
	return (this->_fixedPointValue);
}

void	Fixed::setRawbits(int const raw) {
	this->_fixedPointValue = raw;
}

float	Fixed::toFloat(void) const {
	return (this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int		Fixed::toInt(void) const {
	return (this->_fixedPointValue >> this->_fractionalBits);	
}

std::ostream	&operator<<(std::ostream &out, Fixed const &f) {
	out << f.toFloat();
	return out;
}

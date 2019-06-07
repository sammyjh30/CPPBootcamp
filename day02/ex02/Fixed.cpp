/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:02:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/07 18:35:14 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	// std::cout<<"Default constructor called"<<std::endl;
	this->_fixedPointValue = 0;
	return ;
}

Fixed::Fixed(const int n) {
	// std::cout<<"Int constructor called"<<std::endl;
	this->_fixedPointValue = n << (1 * this->_fractionalBits);
	return ;
}

Fixed::Fixed(const float f) {
	// std::cout<<"Float constructor called"<<std::endl;
	// https://embeddedartistry.com/blog/2018/7/9/template-rayb2
	this->_fixedPointValue = (int)roundf((f * (double)(1 << _fractionalBits)));
	return ;
}

Fixed::Fixed(const Fixed &obj) {
	// std::cout<<"Copy constructor called"<<std::endl;
	// this->_fixedPointValue = obj.getRawBits();
	*this= obj;
	return ;
}

Fixed::~Fixed() {
	// std::cout<<"Destructor called"<<std::endl;
	return ;
}

Fixed	&Fixed::operator=(const Fixed &f) {
	// std::cout<<"Assignation operator called"<<std::endl;
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

//comparison operators

bool	Fixed::operator>(const Fixed& f) {
	return (this->getRawBits() > f.getRawBits());
}

bool	Fixed::operator<(const Fixed& f) {
	return (this->getRawBits() < f.getRawBits());
}

bool	Fixed::operator>=(const Fixed& f) {
	return (this->getRawBits() >= f.getRawBits());
}

bool	Fixed::operator<=(const Fixed& f) {
	return (this->getRawBits() <= f.getRawBits());
}

bool	Fixed::operator==(const Fixed& f) {
	return (this->getRawBits() == f.getRawBits());
}

bool	Fixed::operator!=(const Fixed& f) {
	return (this->getRawBits() != f.getRawBits());
}

//arithmetic operators

Fixed	Fixed::operator+(const Fixed& f) {
	Fixed ret = Fixed(this->getRawBits() + f.getRawBits());
	return ret;
}

Fixed	Fixed::operator-(const Fixed& f) {
	Fixed ret = Fixed(this->getRawBits() - f.getRawBits());
	return ret;
}

Fixed	Fixed::operator*(const Fixed& f) {
	Fixed ret = Fixed(this->toFloat() * f.toFloat());
	return ret;
}

Fixed	Fixed::operator/(const Fixed& f) {
	Fixed ret = Fixed(this->toFloat() / f.toFloat());
	return ret;
}

//min-max

Fixed		Fixed::min(const Fixed &a, const Fixed &b) {
	return (a.toFloat() < b.toFloat() ? a : b);
}

Fixed		Fixed::max(const Fixed &a, const Fixed &b) {
	return (a.toFloat() > b.toFloat() ? a : b);
}

//pre-increment, post-increment, pre-decrement and post-decrement operators
//Pre
Fixed	&Fixed::operator++() {
	this->_fixedPointValue++;
	return (*this);
	//Adjusting the value before it gets used
}

Fixed	&Fixed::operator--() {
	this->_fixedPointValue--;
	return (*this);
	//Adjusting the value before it gets used
}

Fixed	Fixed::operator++(int) {
	Fixed temp = *this;
	++this->_fixedPointValue;
	return (temp);
}

Fixed	Fixed::operator--(int) {
	Fixed temp = *this;
	--this->_fixedPointValue;
	return (temp);
}
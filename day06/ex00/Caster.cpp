/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:33:34 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 10:23:57 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

// Impossible

	Caster::Impossible::Impossible(void) : std::exception() {return;}

	Caster::Impossible::Impossible(const Impossible &obj) {
		*this = obj;
		return;
	}

	Caster::Impossible::~Impossible(void) throw() { return; }

	Caster::Impossible	&Caster::Impossible::operator=(const Impossible &obj) {
		(void)obj;
		return (*this);
	}

	const char* Caster::Impossible::what() const throw() {
		return ("impossible");
	}

//////////////////////////////////////////////////

// NonDisplayable

	Caster::NonDisplayable::NonDisplayable(void) : std::exception() {return;}

	Caster::NonDisplayable::NonDisplayable(const NonDisplayable &obj) {
		*this = obj;
		return;
	}

	Caster::NonDisplayable::~NonDisplayable(void) throw() { return; }

	Caster::NonDisplayable	&Caster::NonDisplayable::operator=(const NonDisplayable &obj) {
		(void)obj;
		return (*this);
	}

	const char* Caster::NonDisplayable::what() const throw() {
		return ("Non displayable");
	}

//////////////////////////////////////////////////

// Caster
	Caster::Caster(void) {return;}

	Caster::Caster(Caster const &obj) {
		*this = obj;
	}

	Caster::~Caster(void) {return;}

	Caster			&Caster::operator=(const Caster& obj) {
		(void)obj;
		return(*this);
	}

	int					Caster::getPrecisionSize(char *str) {
		std::string search = str;
		std::size_t found = search.find('.');
		int size;
		if (found!=std::string::npos) {
			size = found + 1;
		} else {
			return 1;
		}
		while (str[size] && isdigit(str[size])) {
			size++;
		}
		size -= found;
		if (size == 1 || strlen(str) == found) {
			return 1;
		} else {
			return size - 1;
		}
	}

	void				Caster::tryChar(double n) {
		char c;
		std::cout<<"char: ";
		try {
			c = this->castToChar(n);
			std::cout<<"'"<<c<<"'";
		} catch (std::exception &e) {
			std::cout<<e.what();
		}
		std::cout<<std::endl;
	}

	void				Caster::tryInt(double n) {
		std::cout<<"int: ";
		try {
			std::cout<<this->castToInt(n);
		} catch (std::exception &e) {
			std::cout<<e.what();
		}
		std::cout<<std::endl;
	}

	void				Caster::tryFloat(double n, int precisionSize) {
		std::cout<<"float: ";
		try {
			std::cout<< std::setprecision(precisionSize)<<std::fixed<<this->castToFloat(n)<<"f";
		} catch (std::exception &e) {
			std::cout<<e.what();
		}
		std::cout<<std::endl;
	}

	void				Caster::tryDouble(double n, int precisionSize) {
		std::cout<<"double: ";
		try {
			std::cout<< std::setprecision(precisionSize)<<std::fixed<<this->castToDouble(n);
		} catch (std::exception &e) {
			std::cout<<e.what();
		}
		std::cout<<std::endl;
	}



	char				Caster::castToChar(double n)
	{
		char	c;

		if (std::isnan(n) == true)
		{
			throw Caster::Impossible();
		}
		c = static_cast<char>(n);
		if (std::isprint(c) == false)
		{
			throw Caster::NonDisplayable();
		}
		return (c);
	}

	int					Caster::castToInt(double n)
	{
		if (std::isnan(n) || std::isinf(n))
		{
			throw Caster::Impossible();
		}
		if (n > static_cast<double>(INT_MAX) || n < static_cast<double>(INT_MIN))
		{
			throw Caster::Impossible();
		}
		return (static_cast<int>(n));
	}

	float				Caster::castToFloat(double n)
	{
		return (static_cast<float>(n));
	}

	double				Caster::castToDouble(double n)
	{
		return (static_cast<double>(n));
	}

//////////////////////////////////////////////////

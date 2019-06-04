/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 14:01:56 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/04 14:09:28 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(void) {return;}
Pony::~Pony(void) {return;}

void			Pony::setName(std::string name)
{
	this->name = name;
}

void			Pony::setAge(std::string age)
{
	this->age = age;
}

void			Pony::setSound(std::string sound)
{
	this->sound = sound;
}

void			Pony::setBreed(std::string breed)
{
	this->breed = breed;
}

void			Pony::setColour(std::string colour)
{
	this->colour = colour;
}

std::string		Pony::getName(void)
{
	return(this->name);
}

std::string		Pony::getAge(void)
{
	return(this->age);
}

std::string		Pony::getSound(void)
{
	return(this->sound);
}

std::string		Pony::getBreed(void)
{
	return(this->breed);
}

std::string		Pony::getColour(void)
{
	return(this->colour);
}

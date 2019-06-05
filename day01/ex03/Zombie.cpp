/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 06:59:06 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 09:45:30 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) {return;}
Zombie::~Zombie(void) {
	// std::cout<<"test"<<std::endl;
	return;
}

void			Zombie::setType(std::string type) {
	this->type = type;
}

void			Zombie::setName(std::string name) {
	this->name = name;;
}

void			Zombie::setLine(std::string line) {
	this->line = line;
}

std::string		Zombie::getType(void) {
	return (this->type);
}

std::string		Zombie::getName(void) {
	return (this->name);
}

std::string		Zombie::getLine(void) {
	return (this->line);
}

void			Zombie::announce() {
	std::cout<<"<"<<this->getName()<<" ("<<this->getType()<<")> "<<this->getLine()<<std::endl;
}
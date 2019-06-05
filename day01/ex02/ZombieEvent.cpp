/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:20:14 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 09:44:51 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {return;}
ZombieEvent::~ZombieEvent(void) {return;}

void		ZombieEvent::setZombieType(std::string type) {
	this->ZombieType = type;
}

std::string ZombieEvent::getZombieType(void) {
	return (this->ZombieType);
}

Zombie*		ZombieEvent::newZombie(std::string name) {
	Zombie* newZombie = new Zombie();

	newZombie->setName(name);
	newZombie->setType(this->getZombieType());
	newZombie->setLine("Braiiiiiiinnnssss...");
	
	return newZombie;
}
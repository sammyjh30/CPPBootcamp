/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:03:32 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 12:39:29 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->setSize(n);
	this->horde = new Zombie[n];
	for (int i =0; i<n; i++) {
		this->horde[i].setName(this->gen_random((std::rand() % ( 8 +1 - 2)) + 2));
		this->horde[i].setType("standard zombie");
		this->horde[i].setLine("Braiiiiiiinnnssss...");
	}
	return;
}
ZombieHorde::~ZombieHorde(void) {
	delete[] horde;
	std::cout<<"The horde is gone."<<std::endl;
	return;
}

void			ZombieHorde::setSize(int num) {
	this->size = num;
}

int			ZombieHorde::getSize(void) {
	return(this->size);
}

std::string		ZombieHorde::gen_random(int len) {
	char letters[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";
	char name[len];

	for (int i = 0; i < len; ++i) {
		name[i] = letters[std::rand() % (sizeof(letters) - 1)];
	}
	name[len] = 0;
	return ((std::string)name);
}

void			ZombieHorde::announce(void) {
	for (int i=0; i < this->getSize(); i++) {
		this->horde[i].announce();
	}
}
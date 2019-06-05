/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:03:32 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 18:27:33 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n) {
	this->setSize(n);
	this->horde = new Zombie*[n];
	for (int i =0; i<n; i++) {
		Zombie *nz = new Zombie;
		nz->setName(this->gen_random((std::rand() % ( 8 +1 - 2)) + 2));
		nz->setType("standard zombie");
		nz->setLine("Braiiiiiiinnnssss...");
		this->horde[i] = nz;

	}
	return;
}
ZombieHorde::~ZombieHorde(void) {
	for (int i=0; i<this->getSize(); i++) {
		std::cout<<"Zombie number "<<i<<" has gone."<<std::endl;
		delete((this->horde[i]));
	}
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
		this->horde[i]->announce();
	}
}
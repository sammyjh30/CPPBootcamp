/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 22:15:18 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/05 11:18:12 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Zombie.hpp"
#include "ZombieEvent.hpp"

std::string		gen_random(int len) {
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

Zombie			randomChump(std::string type, std::string line) {
	Zombie	newZombie;
	std::string name;

	name = gen_random( (std::rand() % ( 8 +1 - 2)) + 2);
	newZombie.setName(name);
	newZombie.setType(type);
	newZombie.setLine(line);
	newZombie.announce();
	return (newZombie);
}

int				main(void) {
	Zombie jock = randomChump("jock", "Gaaaaaaiiiiiiiinnnnnns....");
	Zombie vampire = randomChump("vampire", "Veeeeeeeiiiiinnnnnsssss....");
	Zombie laundry = randomChump("laundry", "Staaaaaaaaaiiiiiiinnnnnnnssss.....");
	Zombie conductor = randomChump("conductor", "Traaaaaaaaaaiiiiiiiiinnnnnnsssss....");
	ZombieEvent eventZombie;
	Zombie* newGuy = eventZombie.newZombie("Steve");
	newGuy->announce();
	delete(newGuy);
	return 0;
}
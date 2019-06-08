/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:06:21 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 17:56:11 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : hitPoints(100),
							maxHitPoints(100),
							energyPoints(50),
							maxEnergyPoints(50),
							level(1),
							meleeAttackDamage(20),
							rangedAttackDamage(15),
							armorDamageReduction(3) 
{
	this->name = "NoNameMadeByPickNPay";
	std::cout<<"Minion! Your master awakens!"<<std::endl;
	return;
}

ScavTrap::ScavTrap(std::string name) : hitPoints(100),
										maxHitPoints(100),
										energyPoints(100),
										maxEnergyPoints(100),
										level(1),
										meleeAttackDamage(30),
										rangedAttackDamage(20),
										armorDamageReduction(5) 
{
	this->name = name;
	std::cout<<"Minion! Your master awakens!"<<std::endl;
	return;
}

ScavTrap::ScavTrap(const ScavTrap &obj) {
	std::cout<<"Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP"<<std::endl;
	*this = obj;
	return ;
}

ScavTrap::~ScavTrap() {
	std::cout<<"I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"<<std::endl;
	return;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &f) {
	//const ScavTrap allows you to not use the getters -> safe.
	this->hitPoints = f.hitPoints;
	this->maxHitPoints = f.maxHitPoints;
	this->energyPoints = f.energyPoints;
	this->maxEnergyPoints = f.maxEnergyPoints;
	this->level = f.level;
	this->meleeAttackDamage = f.meleeAttackDamage;
	this->rangedAttackDamage = f.rangedAttackDamage;
	this->armorDamageReduction = f.armorDamageReduction;
	this->name = f.name;
	return (*this);
}

void		ScavTrap::challengeNewcomer(std::string const & target) {

	std::string challenges[11] = {"You versus me! Me versus you! Either way!",
								"I will prove to you my robotic superiority!",
								"Dance battle! Or, you know... regular battle.",
								"Man versus machine! Very tiny streamlined machine!",
								"Care to have a friendly duel?",
								"I can take ya! ... I think.",
								"Ow, what was that for?",
								"Oh, it's on now!",
								"You wanna fight with me?! Put 'em up! ... Put 'em up?",
								"A million baddies, and you wanna hit me? Aww!",
								"Now? But I... I just... okay..."};
	int	i = (std::rand() % 11);

	if (this->energyPoints == 0 || this->energyPoints < 25) {
		std::cout<< "I can see through time..."<<std::endl;
	} else {
		std::cout<<"FR4G-TP <"<<this->getName()<<"> challenges <"<<target<<"> \""<<challenges[i]<<"\""<<std::endl;
		this->energyPoints -= 25;
	}
}

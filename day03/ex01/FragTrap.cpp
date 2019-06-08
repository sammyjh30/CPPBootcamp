/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:38:04 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 14:31:44 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : hitPoints(100),
										maxHitPoints(100),
										energyPoints(100),
										maxEnergyPoints(100),
										level(1),
										meleeAttackDamage(30),
										rangedAttackDamage(20),
										armorDamageReduction(5) 
{
	this->name = "NoNameMadeByPickNPay";
	std::cout<<"Minion! Your master awakens!"<<std::endl;
	return;
}

FragTrap::FragTrap(std::string name) : hitPoints(100),
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

FragTrap::FragTrap(const FragTrap &obj) {
	std::cout<<"Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP"<<std::endl;
	*this = obj;
	return ;
}

FragTrap::~FragTrap() {
	std::cout<<"I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"<<std::endl;
	return;
}

void			FragTrap::setHitPoints(int n) {
	this->hitPoints = n;
}

void			FragTrap::setMaxHitPoints(int n) {
	this->maxHitPoints = n;
}

void			FragTrap::setEnergyPoints(int n) {
	this->energyPoints = n;
}

void			FragTrap::setMaxEnergyPoints(int n) {
	this->maxEnergyPoints = n;
}

void			FragTrap::setLevel(int n) {
	this->level = n;
}

void			FragTrap::setMeleeAttackDamage (int n) {
	this->meleeAttackDamage = n;
}

void			FragTrap::setRangedAttackDamage (int n) {
	this->rangedAttackDamage = n;
}

void			FragTrap::setArmorDamageReduction(int n) {
	this->armorDamageReduction = n;
}

void			FragTrap::setName(std::string str) {
	this->name = str;
}

int				FragTrap::getHitPoints(void) {
	return (this->hitPoints);
}

int				FragTrap::getMaxHitPoints(void) {
	return (this->maxHitPoints);
}

int				FragTrap::getEnergyPoints(void) {
	return (this->energyPoints);
}

int				FragTrap::getMaxEnergyPoints(void) {
	return (this->maxEnergyPoints);
}

int				FragTrap::getLevel(void) {
	return (this->level);
}

int				FragTrap::getMeleeAttackDamage (void) {
	return (this->meleeAttackDamage);
}

int				FragTrap::getRangedAttackDamage (void) {
	return (this->rangedAttackDamage);
}

int				FragTrap::getArmorDamageReduction(void) {
	return (this->armorDamageReduction);
}

std::string		FragTrap::getName(void) {
	return (this->name);
}

void			FragTrap::rangedAttack(std::string const & target) {
	int		damage = this->rangedAttackDamage;

	std::cout<<"FR4G-TP <"<<this->getName()<<"> attacks <"<<target<<"> at range, causing <"<<damage<<"> points of damage !"<<std::endl;
}

void			FragTrap::meleeAttack(std::string const & target) {
	int		damage = this->meleeAttackDamage;

	std::cout<<"FR4G-TP <"<<this->getName()<<"> attacks <"<<target<<"> at range, causing <"<<damage<<"> points of damage !"<<std::endl;
}

void			FragTrap::takeDamage(unsigned int amount) {
	std::cout<<"AAAAHHHHH!"<<std::endl;
	int		hp = this->hitPoints;
	hp -= (amount - this->armorDamageReduction);
	if (hp >= 0) {
		this->hitPoints = hp;
	} else {
		this->hitPoints = 0;
	}
}

void			FragTrap::beRepaired(unsigned int amount) {
	std::cout<<"Hahaha... I ascend!"<<std::endl;
	int		hp = this->hitPoints;
	hp += amount;
	if (hp <= this->maxHitPoints) {
		this->hitPoints = hp;
	} else {
		this->hitPoints = this->maxHitPoints;
	}
}

FragTrap	&FragTrap::operator=(const FragTrap &f) {
	//const FragTrap allows you to not use the getters -> safe.
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

void		FragTrap::vaulthunter_dot_exe(std::string const & target) {

	std::string attacks[8] = {"I am a tornado of death and bullets!", 
								"Ha ha ha! Fall before your robot overlord!",
								"Is it dead? Can, can I open my eyes now?",
								"Is that what people look like inside?",
								"Hey everybody, check out my package!",
								"Recompiling my combat code!",
								"I have an IDEA!",
								"Dance battle! Or, you know... regular battle."};
	int	i = (std::rand() % ( 8));

	if (this->energyPoints == 0 || this->energyPoints < 25) {
		std::cout<< "I can see through time..."<<std::endl;
	} else {
		std::cout<<"FR4G-TP <"<<this->getName()<<"> attacks <"<<target<<"> \""<<attacks[i]<<"\""<<std::endl;
		this->energyPoints -= 25;
	}
}

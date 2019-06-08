/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:41:19 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 17:50:14 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : hitPoints(0),
										maxHitPoints(0),
										energyPoints(0),
										maxEnergyPoints(0),
										level(1),
										meleeAttackDamage(0),
										rangedAttackDamage(0),
										armorDamageReduction(0) 
{
	this->name = "ClapTrap";
	std::cout<<"I'll die the way I lived: annoying!"<<std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : hitPoints(0),
										maxHitPoints(0),
										energyPoints(0),
										maxEnergyPoints(0),
										level(1),
										meleeAttackDamage(0),
										rangedAttackDamage(0),
										armorDamageReduction(0) 
{
	this->name = name;
	std::cout<<"I'll die the way I lived: annoying!"<<std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &obj) {
	std::cout<<"Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP"<<std::endl;
	*this = obj;
	return ;
}

ClapTrap::~ClapTrap() {
	std::cout<<"Robot down!"<<std::endl;
	return;
}

void			ClapTrap::setHitPoints(int n) {
	this->hitPoints = n;
}

void			ClapTrap::setMaxHitPoints(int n) {
	this->maxHitPoints = n;
}

void			ClapTrap::setEnergyPoints(int n) {
	this->energyPoints = n;
}

void			ClapTrap::setMaxEnergyPoints(int n) {
	this->maxEnergyPoints = n;
}

void			ClapTrap::setLevel(int n) {
	this->level = n;
}

void			ClapTrap::setMeleeAttackDamage (int n) {
	this->meleeAttackDamage = n;
}

void			ClapTrap::setRangedAttackDamage (int n) {
	this->rangedAttackDamage = n;
}

void			ClapTrap::setArmorDamageReduction(int n) {
	this->armorDamageReduction = n;
}

void			ClapTrap::setName(std::string str) {
	this->name = str;
}

int				ClapTrap::getHitPoints(void) {
	return (this->hitPoints);
}

int				ClapTrap::getMaxHitPoints(void) {
	return (this->maxHitPoints);
}

int				ClapTrap::getEnergyPoints(void) {
	return (this->energyPoints);
}

int				ClapTrap::getMaxEnergyPoints(void) {
	return (this->maxEnergyPoints);
}

int				ClapTrap::getLevel(void) {
	return (this->level);
}

int				ClapTrap::getMeleeAttackDamage (void) {
	return (this->meleeAttackDamage);
}

int				ClapTrap::getRangedAttackDamage (void) {
	return (this->rangedAttackDamage);
}

int				ClapTrap::getArmorDamageReduction(void) {
	return (this->armorDamageReduction);
}

std::string		ClapTrap::getName(void) {
	return (this->name);
}

void			ClapTrap::rangedAttack(std::string const & target) {
	int		damage = this->rangedAttackDamage;

	std::cout<<"FR4G-TP <"<<this->getName()<<"> attacks <"<<target<<"> at range, causing <"<<damage<<"> points of damage !"<<std::endl;
}

void			ClapTrap::meleeAttack(std::string const & target) {
	int		damage = this->meleeAttackDamage;

	std::cout<<"FR4G-TP <"<<this->getName()<<"> attacks <"<<target<<"> at range, causing <"<<damage<<"> points of damage !"<<std::endl;
}

void			ClapTrap::takeDamage(unsigned int amount) {
	std::cout<<"AAAAHHHHH!"<<std::endl;
	int		hp = this->hitPoints;
	hp -= (amount - this->armorDamageReduction);
	if (hp >= 0) {
		this->hitPoints = hp;
	} else {
		this->hitPoints = 0;
	}
}

void			ClapTrap::beRepaired(unsigned int amount) {
	std::cout<<"Hahaha... I ascend!"<<std::endl;
	int		hp = this->hitPoints;
	hp += amount;
	if (hp <= this->maxHitPoints) {
		this->hitPoints = hp;
	} else {
		this->hitPoints = this->maxHitPoints;
	}
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &f) {
	//const ClapTrap allows you to not use the getters -> safe.
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
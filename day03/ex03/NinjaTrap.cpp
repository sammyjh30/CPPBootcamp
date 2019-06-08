/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:01:56 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 18:16:46 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "NinjaTrap.hpp"
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

NinjaTrap::NinjaTrap(void) : hitPoints(60),
							maxHitPoints(60),
							energyPoints(120),
							maxEnergyPoints(120),
							level(1),
							meleeAttackDamage(60),
							rangedAttackDamage(5),
							armorDamageReduction(0) 
{
	this->name = "NoNameMadeByPickNPay";
	std::cout<<"Minion! Your master awakens!"<<std::endl;
	return;
}

NinjaTrap::NinjaTrap(std::string name) : hitPoints(60),
										maxHitPoints(60),
										energyPoints(120),
										maxEnergyPoints(120),
										level(1),
										meleeAttackDamage(60),
										rangedAttackDamage(5),
										armorDamageReduction(0) 
{
	this->name = name;
	std::cout<<"Minion! Your master awakens!"<<std::endl;
	return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &obj) {
	std::cout<<"Booting sequence complete. Hello! I am your new steward bot. Designation: CL4P-TP"<<std::endl;
	*this = obj;
	return ;
}

NinjaTrap::~NinjaTrap() {
	std::cout<<"I'M DEAD I'M DEAD OHMYGOD I'M DEAD!"<<std::endl;
	return;
}

NinjaTrap	&NinjaTrap::operator=(const NinjaTrap &f) {
	//const NinjaTrap allows you to not use the getters -> safe.
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

void			NinjaTrap::ninjaShoebox(ClapTrap &obj) {
	std::cout<<"Secret handshake ClapTrap! "<<"<"<<obj.getName()<<">"<<std::endl;
}
void			NinjaTrap::ninjaShoebox(FragTrap &obj) {
	std::cout<<"Up top FragTrap! "<<"<"<<obj.getName()<<">"<<std::endl;
}
void			NinjaTrap::ninjaShoebox(ScavTrap &obj) {
	std::cout<<"Gimme five ScavTrap! "<<"<"<<obj.getName()<<">"<<std::endl;
}
void			NinjaTrap::ninjaShoebox(NinjaTrap &obj) {
	std::cout<<"High five NinjaTrap! "<<"<"<<obj.getName()<<">"<<std::endl;
}


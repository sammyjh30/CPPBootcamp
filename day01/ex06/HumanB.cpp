/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:23:00 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 18:58:20 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
	return;
}

HumanB::~HumanB(void) {
	return;
}

void		HumanB::attack(void) {
	std::cout<<this->name<<" attacks with his "<<this->weapon->getType()<<std::endl;
}

void		HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}
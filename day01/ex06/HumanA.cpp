/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:23:20 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 18:57:00 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
	return;
}

HumanA::~HumanA(void) {
	return;
}


void		HumanA::attack(void) {
	std::cout<<this->name<<" attacks with his "<<this->weapon.getType()<<std::endl;
}
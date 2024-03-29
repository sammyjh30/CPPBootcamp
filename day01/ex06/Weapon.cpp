/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:31:36 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 11:09:12 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string t): type(t) 
{
	return;
}
Weapon::~Weapon(void) {return;}

const std::string		&Weapon::getType(void) {
	return (this->type);
}
void			Weapon::setType(std::string w) {
	this->type = w;
}
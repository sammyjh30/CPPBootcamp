/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:33:34 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 18:57:37 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

Caster::Caster(void) {return;}

Caster::Caster(Caster const &obj) {
	*this = obj;
}

Caster::~Caster(void) {return;}

Caster			&Caster::operator=(const Caster& obj) {
	(void)obj;
	return(*this);
}
void			Caster::cast(double const &value) {
	//Do checks for char
	//Do checks for int
	//Do checks for float
	//Do checks for double
}
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


char
Caster::castToChar(double n)
{
    char    c;

    if (std::isnan(d) == true)
    {
        throw (Caster::Impossible());
    }
    c = static_cast<char>(d);
    if (std::isprint(c) == false)
    {
        throw (Caster::NonDisplayable());
    }
    return (c);
}

int					Caster::castToInt(double n)
{
    if (std::isnan(d) == true || std::isinf(d) == true)
    {
        throw (Caster::Impossible());
    }
    if (d > static_cast<double>(INT_MAX) || d < static_cast<double>(INT_MIN))
    {
        throw (Caster::Impossible());
    }
    return (static_cast<int>(d));
}

float				Caster::castToFloat(double n)
{
    return (static_cast<float>(d));
}

double				Caster::castToDouble(double n)
{
     return (static_cast<double>(d));
}

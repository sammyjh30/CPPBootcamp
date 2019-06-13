/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:29 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:53:27 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void) { return; }

C::C(const C &obj) {
	*this = obj;
	return;
}

C	&C::operator=(const C &obj) {
	(void)obj;
	return (*this);
}

C::~C(void) { return; }

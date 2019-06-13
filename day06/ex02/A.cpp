/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:39 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:45:46 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void) { return; }

A::A(const A &obj) {
	*this = obj;
	return;
}

A	&A::operator=(const A &obj) {
	(void)obj;
	return (*this);
}

A::~A(void) { return; }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:35 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:53:17 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B(void) { return; }

B::B(const B &obj) {
	*this = obj;
	return;
}

B	&B::operator=(const B &obj) {
	(void)obj;
	return (*this);
}

B::~B(void) { return; }

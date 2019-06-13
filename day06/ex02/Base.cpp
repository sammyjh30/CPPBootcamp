/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:24 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:49:47 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void) { return; }

Base::Base(const Base &obj) {
	*this = obj;
	return;
}

Base	&Base::operator=(const Base &obj) {
	(void)obj;
	return (*this);
}

Base::~Base(void) { return; }

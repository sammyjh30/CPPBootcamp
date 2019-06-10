/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:18:59 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/10 18:19:01 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(void) { return ;}


Peon::Peon(std::string name) : Victim(name) {
	std::cout<<"Zog zog."<<std::endl;
}

Peon::Peon(const Peon &obj) : Victim(obj) {
	*this = obj;
	std::cout<<"Zog zog."<<std::endl;
	return ;
}

Peon::~Peon(void) {
	std::cout<<"Bleuark..."<<std::endl;
	return ;
}

void			Peon::getPolymorphed(void) const {
	std::cout<<this->getName()<<" has been turned into a pink pony !\n";
	return;
}
  
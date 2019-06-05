/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:09:56 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 15:09:46 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {return;}
Brain::~Brain(void) {
	std::cout<<"Destruction!"<<std::endl;
	return;}

void		Brain::setSize(int n) {
	this->size = n;
}

int			Brain::getSize(void) {
	return (this->size);
}

std::string	Brain::identify(void) {
	std::stringstream addr;
	addr << this;
	return(addr.str());
}
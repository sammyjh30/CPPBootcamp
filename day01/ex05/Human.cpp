/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:30:06 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 15:09:42 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {return;}
Human::~Human(void) {return;}

void		Human::setBrain(Brain brain) {
	this->brain = brain;
}

Brain		&Human::getBrain(void) {
	return (this->brain);
}

std::string		Human::identify(void) {
	return(this->brain.identify());
}
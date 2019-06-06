/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:12:22 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 11:28:02 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const & target) {
	std::cout<<"Melee attack made to "<<target<<std::endl;
}
void	Human::rangedAttack(std::string const & target) {
	std::cout<<"Ranged attack made to "<<target<<std::endl;

}
void	Human::intimidatingShout(std::string const & target) {
	std::cout<<"Intimidating Shout made to "<<target<<std::endl;
}
void	Human::action(std::string const & action_name, std::string const & target) {
	std::string actions[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	
	// https://isocpp.org/wiki/faq/pointers-to-members
	typedef void (Human::*AvailableActions)(std::string const & target);
	AvailableActions all[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i=0; i < 3; i++) {
		if (action_name == actions[i]) {
			(this->*(all[i]))(target);
		}
	}
}

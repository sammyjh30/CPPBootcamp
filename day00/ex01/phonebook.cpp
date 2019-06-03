/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:01:37 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/03 14:08:32 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"


int     main() {
	std::string input;
	contact phonebook[8];

	for (;;) {
		std::cout<<"Please enter a command: ";
		std::cin>>input;
		if (input ==  "EXIT" && input.length() == 4) {
			std::cout<<"Exiting..."<<std::endl;
			return 0; 
		} else if (input == "ADD" && input.length() == 3) {
			std::cout<<"Adding..."<<std::endl;
		} else if (input == "SEARCH" && input.length() == 6) {
			for (int i=0; i<8; i++) {
					phonebook[i].getFirstName();

			}
			std::cout<<"Searching..."<<std::endl;
		} 
	}
	return 0;
}
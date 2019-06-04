/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 10:01:37 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/04 07:56:37 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void		listPhonebook(Contact phonebook[], int index) {

	for (int i = 0; i<index; i++)  {
		std::cout<<"|   First Name    |"<<std::endl;
		if (phonebook[i].getPhoneNumber() == (std::string)"test")
		std::cout<<"test"<<std::endl;
	}

}

Contact		addNewContact() {
	Contact			newContact;
	std::string		input;

	// std::cout<<"Please enter a first name: "<<std::endl;
	// std::cin>>input;
	// newContact.setFirstName(input);
    // std::cout<<"Please enter a last name: "<<std::endl;
	// std::cin>>input;
	// newContact.setLastName(input);
    // std::cout<<"Please enter a nickname: "<<std::endl;
	// std::cin>>input;
	// newContact.setNickname(input);
    // std::cout<<"Please enter a login: "<<std::endl;
	// std::cin>>input;
	// newContact.setLogin(input);
    // std::cout<<"Please enter a postal address: "<<std::endl;
	// std::cin>>input;
	// newContact.setPostalAddress(input);
    // std::cout<<"Please enter a email address: "<<std::endl;
	// std::cin>>input;
	// newContact.setEmailAddress(input);
    // std::cout<<"Please enter a phone nmber: "<<std::endl;
	// std::cin>>input;
	// newContact.setPhoneNumber(input);
    // std::cout<<"Please enter a birthday date: "<<std::endl;
	// std::cin>>input;
	// newContact.setBirthdayDate(input);
    // std::cout<<"Please enter a favorite meal: "<<std::endl;
	// std::cin>>input;
	// newContact.setFavoriteMeal(input);
    // std::cout<<"Please enter a underwear color: "<<std::endl;
	// std::cin>>input;
	// newContact.setUnderwearColor(input);
    // std::cout<<"Please enter a darkest secret: "<<std::endl;
	// std::cin>>input;
	// newContact.setDarkestSecret(input);

	return (newContact);
}

int     	main() {
	std::string input;
	Contact phonebook[8];
	int i = 0;

	for (;;) {
		std::cout<<"Please enter a command: ";
		std::cin>>input;
		if (input ==  "EXIT" && input.length() == 4) {
			std::cout<<"Exiting..."<<std::endl;
			return 0; 
		} else if (input == "ADD" && input.length() == 3) {
			std::cout<<"Adding..."<<std::endl;
			if (i < 8) {
				phonebook[i++] = addNewContact();
				std::cout<<"New contact added successfully!"<<std::endl;
			} else {
				std::cout<<"Insufficient memory. Add failed."<<std::endl;
			}
		} else if (input == "SEARCH" && input.length() == 6) {
			std::cout<<"Searching..."<<std::endl;
			if (i == 0) {
				std::cout<<"Phonebook is empty. Please add a contact first by using the command 'ADD'."<<std::endl;
			} else {
				listPhonebook(phonebook, i);
			}
		} 
	}
	return 0;
}
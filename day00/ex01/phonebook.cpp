/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 12:40:03 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 17:47:59 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

void		listPhonebook(Contact phonebook[], int index) {
	std::cout<<"|   Index  |First Name| Last Name| Nickname |"<<std::endl;
	std::cout<<"|__________|__________|__________|__________|"<<std::endl;
	for (int i = 0; i<index; i++)  {
		// std::cout<<std::setw(10);
		std::cout<<"|    "<<i<<"     |";
		if (phonebook[i].getFirstName().length() >= 10) {
			std::cout<<phonebook[i].getFirstName().substr(0, 9)<<".|";
		} else {
			std::cout<<phonebook[i].getFirstName()<<std::setw(11 - phonebook[i].getFirstName().length())<<"|";
		}
		if (phonebook[i].getLastName().length() >= 10) {
			std::cout<<phonebook[i].getLastName().substr(0, 9)<<".|";
		} else {
			std::cout<<phonebook[i].getLastName()<<std::setw(11 - phonebook[i].getLastName().length())<<"|";
		}
		if (phonebook[i].getNickname().length() >= 10) {
			std::cout<<phonebook[i].getNickname().substr(0, 9)<<".|";
		} else {
			std::cout<<phonebook[i].getNickname()<<std::setw(11 - phonebook[i].getNickname().length())<<"|";
		}
		std::cout<<std::endl;
	}
	
}

Contact		addNewContact() {
	Contact			newContact;
	std::string		input;

	std::cout<<"Please enter a first name: ";
	std::getline(std::cin, input);
	newContact.setFirstName(input);
    std::cout<<"Please enter a last name: ";
	std::getline(std::cin, input);
	newContact.setLastName(input);
    std::cout<<"Please enter a nickname: ";
	std::getline(std::cin, input);
	newContact.setNickname(input);
    std::cout<<"Please enter a login: ";
	std::getline(std::cin, input);
	newContact.setLogin(input);
    std::cout<<"Please enter a postal address: ";
	std::getline(std::cin, input);
	newContact.setPostalAddress(input);
    std::cout<<"Please enter a email address: ";
	std::getline(std::cin, input);
	newContact.setEmailAddress(input);
    std::cout<<"Please enter a phone nmber: ";
	std::getline(std::cin, input);
	newContact.setPhoneNumber(input);
    std::cout<<"Please enter a birthday date: ";
	std::getline(std::cin, input);
	newContact.setBirthdayDate(input);
    std::cout<<"Please enter a favorite meal: ";
	std::getline(std::cin, input);
	newContact.setFavoriteMeal(input);
    std::cout<<"Please enter a underwear color: ";
	std::getline(std::cin, input);
	newContact.setUnderwearColor(input);
    std::cout<<"Please enter a darkest secret: ";
	std::getline(std::cin, input);
	newContact.setDarkestSecret(input);

	return (newContact);
}

int			main() {
	std::string input;
	Contact phonebook[8];
	int i = 0;
	int index = 0;

	for (;;) {
		std::cout<<"Please enter a command: ";
		std::getline(std::cin, input);
		if (input ==  "EXIT" && input.length() == 4) {
			std::cout<<"Exiting..."<<std::endl;
			return 0; 
		} else if (input == "ADD" && input.length() == 3) {
			if (i < 8) {
				phonebook[i++] = addNewContact();
				std::cout<<"New contact added successfully!"<<std::endl;
			} else {
				std::cout<<"Insufficient memory. Add failed."<<std::endl;
			}
		} else if (input == "SEARCH" && input.length() == 6) {
			if (i == 0) {
				std::cout<<"Phonebook is empty. Please add a contact first by using the command 'ADD'."<<std::endl;
			} else {
				listPhonebook(phonebook, i);
				std::cout<<"Please select an index: ";
				std::getline(std::cin, input);
				std::cout<<std::endl;
				index = input[0] - 48;
				if (input.length() == 1 && input[0] >= '0' && input[0] <= '7' && index < i) {
					std::cout<<"firstName: "<<phonebook[index].getFirstName()<<std::endl;
					std::cout<<"lastName: "<<phonebook[index].getLastName()<<std::endl;
					std::cout<<"nickname: "<<phonebook[index].getNickname()<<std::endl;
					std::cout<<"login: "<<phonebook[index].getLogin()<<std::endl;
					std::cout<<"postalAddress: "<<phonebook[index].getPostalAddress()<<std::endl;
					std::cout<<"emailAddress: "<<phonebook[index].getEmailAddress()<<std::endl;
					std::cout<<"phoneNumber: "<<phonebook[index].getPhoneNumber()<<std::endl;
					std::cout<<"birthdayDate: "<<phonebook[index].getBirthdayDate()<<std::endl;
					std::cout<<"favoriteMeal: "<<phonebook[index].getFavoriteMeal()<<std::endl;
					std::cout<<"underwearColor: "<<phonebook[index].getUnderwearColor()<<std::endl;
					std::cout<<"darkestSecret: "<<phonebook[index].getDarkestSecret()<<std::endl;
				} else {
					std::cout<<"Invalid input. Search failed."<<std::endl;
				}
			}
		} 
	}
	return 0;
}
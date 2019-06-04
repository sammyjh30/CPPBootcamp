/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:49:04 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/04 12:43:29 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {return;}
Contact::~Contact(void) {return;}

void		Contact::setFirstName(std::string firstname)
{
	this->firstName = firstname;
}

void		Contact::setLastName(std::string lastname)
{
	this->lastName = lastname;
}

void		Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void		Contact::setLogin(std::string login)
{
	this->login = login;
}

void		Contact::setPostalAddress(std::string postal)
{
	this->postalAddress = postal;
}

void		Contact::setEmailAddress(std::string email)
{
	this->emailAddress = email;
}

void		Contact::setPhoneNumber(std::string number)
{
	this->phoneNumber = number;
}

void		Contact::setBirthdayDate(std::string birthdate)
{
	this->birthdayDate = birthdate;
}

void		Contact::setFavoriteMeal(std::string meal)
{
	this->favoriteMeal = meal;
}

void		Contact::setUnderwearColor(std::string color)
{
	this->underwearColor = color;
}

void		Contact::setDarkestSecret(std::string secret)
{
	this->darkestSecret = secret;
}

std::string Contact::getFirstName(void)
{
	return (this->firstName);
}

std::string Contact::getLastName(void)
{
	return (this->lastName);
}

std::string Contact::getNickname(void)
{
	return (this->nickname);
}

std::string Contact::getLogin(void)
{
	return (this->login);
}

std::string Contact::getPostalAddress(void)
{
	return (this->postalAddress);
}

std::string Contact::getEmailAddress(void)
{
	return (this->emailAddress);
}

std::string Contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string Contact::getBirthdayDate(void)
{
	return (this->birthdayDate);
}

std::string Contact::getFavoriteMeal(void)
{
	return (this->favoriteMeal);
}

std::string Contact::getUnderwearColor(void)
{
	return (this->underwearColor);
}

std::string Contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 18:49:04 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/03 23:45:10 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

// https://stackoverflow.com/questions/9579930/separating-class-code-into-a-header-and-cpp-file
// C++ variables are default private

void		contact::setFirstName(std::string firstname)
{
	this->firstName = firstname;
}

void		contact::setLastName(std::string lastname)
{
	this->lastName = lastname;
}

void		contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void		contact::setLogin(std::string login)
{
	this->login = login;
}

void		contact::setPostalAddress(std::string postal)
{
	this->postalAddress = postal;
}

void		contact::setEmailAddress(std::string email)
{
	this->emailAddress = email;
}

void		contact::setPhoneNumber(std::string number)
{
	this->phoneNumber = number;
}

void		contact::setBirthdayDate(std::string birthdate)
{
	this->birthdayDate = birthdate;
}

void		contact::setFavoriteMeal(std::string meal)
{
	this->favoriteMeal = meal;
}

void		contact::setUnderwearColor(std::string color)
{
	this->underwearColor = color;
}

void		contact::setDarkestSecret(std::string secret)
{
	this->darkestSecret = secret;
}

std::string contact::getFirstName(void)
{
	return (this->firstName);
}

std::string contact::getLastName(void)
{
	return (this->lastName);
}

std::string contact::getNickname(void)
{
	return (this->nickname);
}

std::string contact::getLogin(void)
{
	return (this->login);
}

std::string contact::getPostalAddress(void)
{
	return (this->postalAddress);
}

std::string contact::getEmailAddress(void)
{
	return (this->emailAddress);
}

std::string contact::getPhoneNumber(void)
{
	return (this->phoneNumber);
}

std::string contact::getBirthdayDate(void)
{
	return (this->birthdayDate);
}

std::string contact::getFavoriteMeal(void)
{
	return (this->favoriteMeal);
}

std::string contact::getUnderwearColor(void)
{
	return (this->underwearColor);
}

std::string contact::getDarkestSecret(void)
{
	return (this->darkestSecret);
}
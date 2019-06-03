/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:53:09 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/03 13:55:47 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class contact
{
    private:
        int         _index;
        std::string _firstName;
        std::string _lastName;
        std::string _nickname;
        std::string _login;
        std::string _postalAddress;
        std::string _emailAddress;
        std::string _phoneNumber;
        std::string _birthdayDate;
        std::string _favoriteMeal;
        std::string _underwaerColor;
        std::string _darkestSecret;

    public:
        void        setIndex(int);
        void        setFirstName(std::string);
        void        setLastName(std::string);
        void        setNickname(std::string);
        void        setLogin(std::string);
        void        setPostalAddress(std::string);
        void        setEmailAddress(std::string);
        void        setPhoneNumber(std::string);
        void        setBirthdayDate(std::string);
        void        setFavoriteMeal(std::string);
        void        setUnderwearColor(std::string);
        void        setDarkestSecret(std::string);
        int         getIndex(void);
        std::string getFirstName(void);
        std::string getLastName(void);
        std::string getNickname(void);
        std::string getLogin(void);
        std::string getPostalAddress(void);
        std::string getEmailAddress(void);
        std::string getPhoneNumber(void);
        std::string getBirthdayDate(void);
        std::string getFavoriteMeal(void);
        std::string getUnderwearColor(void);
        std::string getDarkestSecret(void);
};
#endif
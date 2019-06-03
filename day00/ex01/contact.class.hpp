/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 11:53:09 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/03 23:36:35 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

#include <iostream>
#include <string>

class contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickname;
        std::string login;
        std::string postalAddress;
        std::string emailAddress;
        std::string phoneNumber;
        std::string birthdayDate;
        std::string favoriteMeal;
        std::string underwearColor;
        std::string darkestSecret;

    public:
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
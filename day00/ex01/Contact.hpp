/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 07:27:54 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/04 09:24:01 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

# include <iostream>
# include <string>
#include <iomanip>

class Contact {
    private:
        std::string firstName, lastName, nickname, login, postalAddress, emailAddress, phoneNumber, birthdayDate, favoriteMeal,  underwearColor, darkestSecret;

    public:
        Contact(void);
        ~Contact(void);
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
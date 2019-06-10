/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:19:20 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/10 18:19:22 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
	private:
		Sorcerer(void);				//Still following Coplien's form. Not allowing the use of this constructor by keeping it private.
		std::string		_name;
		std::string		_title;

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(const Sorcerer &obj);
		~Sorcerer(void);
		void			setName(std::string name);
		void			setTitle(std::string title);
		std::string		getName(void) const;
		std::string		getTitle(void) const;
		Sorcerer		&operator=(Sorcerer const &obj);
		void			polymorph(Victim const &vict) const;
};

//outputstream - afterwards because we need Sorcerer to be defined.
std::ostream	&operator<<(std::ostream &out, const Sorcerer &s);

#endif
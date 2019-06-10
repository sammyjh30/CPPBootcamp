/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:19:35 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/10 18:19:37 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>
# include "Victim.hpp"

class Victim
{
	private:
		std::string		_name;

	public:
		Victim(void);										//Still following Coplien's form. Not allowing the use of this constructor by keeping it private.
		Victim(std::string name);
		Victim(const Victim &obj);
		~Victim(void);
		void			setName(std::string name);
		std::string		getName(void) const;
		Victim			&operator=(Victim const &obj);
		virtual void	getPolymorphed(void) const;				// virtual so that Peon can inherit Victim, but can override this function
};

//outputstream - afterwards because we need Victim to be defined.
std::ostream	&operator<<(std::ostream &out, Victim const &v);

#endif
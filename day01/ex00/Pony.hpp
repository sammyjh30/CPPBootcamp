/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:34:15 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/04 14:04:18 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony
{
	private:
		std::string name;
		std::string age;
		std::string sound;
		std::string breed;
		std::string colour;
		
	public:
		Pony(void);
		~Pony(void);
		void			setName(std::string);
		void			setAge(std::string);
		void			setSound(std::string);
		void			setBreed(std::string);
		void			setColour(std::string);
		std::string		getName(void);
		std::string		getAge(void);
		std::string		getSound(void);
		std::string		getBreed(void);
		std::string		getColour(void);
};

#endif
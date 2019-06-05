/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 22:16:17 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/05 07:12:16 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string		type;
		std::string		name;
		std::string		line;

	public:
		Zombie(void);
		~Zombie(void);
		void			setType(std::string);
		void			setName(std::string);
		void			setLine(std::string);
		std::string		getType(void);
		std::string		getName(void);
		std::string		getLine(void);
		void			announce();
};

#endif
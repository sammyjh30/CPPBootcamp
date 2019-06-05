/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 08:41:01 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 11:02:01 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
	private:
	std::string		ZombieType;

	public:
		ZombieEvent(void);
		~ZombieEvent(void);
		Zombie* 	newZombie(std::string);
		void		setZombieType(std::string);
		std::string	getZombieType(void);
};
#endif
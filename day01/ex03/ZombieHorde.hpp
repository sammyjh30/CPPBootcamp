/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 11:00:34 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 12:37:58 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HORDE_HPP
# define ZOMBIE_HORDE_HPP
# include "Zombie.hpp"

class ZombieHorde 
{
	public:
		ZombieHorde(int n);
		~ZombieHorde(void);
		void			setSize(int);
		int				getSize(void);
		Zombie			*horde;
		void			announce(void);

	private:
		int				size;
		std::string		gen_random(int);
};
#endif
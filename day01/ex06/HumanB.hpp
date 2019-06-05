/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:21:58 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 18:55:20 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string);
		~HumanB(void);
		void	attack();
		void	setWeapon(Weapon&);
	
	private:
		std::string		name;
		Weapon*			weapon;
};

#endif
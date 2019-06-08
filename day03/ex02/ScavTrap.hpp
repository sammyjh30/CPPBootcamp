/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:51:30 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 17:57:21 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP__HPP
#define SCAVTRAP__HPP

# include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap
{
	private:
		int				hitPoints;
		int				maxHitPoints;
		int				energyPoints;
		int				maxEnergyPoints;
		int				level;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;
		std::string		name;

	public:
		ScavTrap(void);
		ScavTrap(std::string);
		ScavTrap(const ScavTrap&);
		~ScavTrap();
		ScavTrap		&operator=(const ScavTrap &f);
		void			challengeNewcomer(std::string const&);

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 18:05:07 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 18:08:22 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP__HPP
#define NINJATRAP__HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap
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
		NinjaTrap(void);
		NinjaTrap(std::string);
		NinjaTrap(const NinjaTrap&);
		~NinjaTrap();
		NinjaTrap		&operator=(const NinjaTrap &f);
		void			challengeNewcomer(std::string const&);
		void			ninjaShoebox(ClapTrap&);
		void			ninjaShoebox(FragTrap&);
		void			ninjaShoebox(ScavTrap&);
		void			ninjaShoebox(NinjaTrap&);


};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 17:39:34 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 17:40:53 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
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
		ClapTrap(void);
		ClapTrap(std::string);
		ClapTrap(const ClapTrap&);
		~ClapTrap();

		void			setHitPoints(int);
		void			setMaxHitPoints(int);
		void			setEnergyPoints(int);
		void			setMaxEnergyPoints(int);
		void			setLevel(int);
		void			setMeleeAttackDamage (int);
		void			setRangedAttackDamage (int);
		void			setArmorDamageReduction(int);
		void			setName(std::string);
		int				getHitPoints(void);
		int				getMaxHitPoints(void);
		int				getEnergyPoints(void);
		int				getMaxEnergyPoints(void);
		int				getLevel(void);
		int				getMeleeAttackDamage (void);
		int				getRangedAttackDamage (void);
		int				getArmorDamageReduction(void);
		std::string		getName(void);

		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		ClapTrap		&operator=(const ClapTrap &f);
};

#endif
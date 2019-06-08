/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 15:51:30 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 17:12:18 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP__HPP
#define SCAVTRAP__HPP

#include <iostream>

class ScavTrap
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
		ScavTrap		&operator=(const ScavTrap &f);
		void			challengeNewcomer(std::string const&);

};

#endif
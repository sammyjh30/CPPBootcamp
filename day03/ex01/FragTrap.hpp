/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 11:38:17 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 14:13:42 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap
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
		FragTrap(void);
		FragTrap(std::string);
		FragTrap(const FragTrap&);
		~FragTrap();

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
		FragTrap		&operator=(const FragTrap &f);
		void			vaulthunter_dot_exe(std::string const&);

};

#endif
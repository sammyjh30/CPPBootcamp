/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:59:12 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 17:12:49 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap newFrag;
	FragTrap newFrag2(" Misha");
	FragTrap newFrag3(newFrag);
	newFrag3.setName("Keysha");
	newFrag.rangedAttack("Vasya");
	newFrag.vaulthunter_dot_exe("Vasya");
	newFrag2.rangedAttack("Max");
	newFrag2.vaulthunter_dot_exe("Max");
	newFrag3.rangedAttack("Petya");
	newFrag3.vaulthunter_dot_exe("Petya");
	FragTrap newFrag4("Robot");
	newFrag4.vaulthunter_dot_exe("Serena");
	newFrag4.vaulthunter_dot_exe("Serena");
	newFrag4.vaulthunter_dot_exe("Serena");
	newFrag4.vaulthunter_dot_exe("Serena");

	ScavTrap newScav;
	ScavTrap newScav2(" Misha");
	ScavTrap newScav3(newScav);
	newScav3.setName("Keysha");
	newScav.rangedAttack("Vasya");
	newScav.challengeNewcomer("Vasya");
	newScav2.rangedAttack("Max");
	newScav2.challengeNewcomer("Max");
	newScav3.rangedAttack("Petya");
	newScav3.challengeNewcomer("Petya");
	ScavTrap newScav4("Robot");
	newScav4.challengeNewcomer("Serena");
	newScav4.challengeNewcomer("Serena");
	newScav4.challengeNewcomer("Serena");
	newScav4.challengeNewcomer("Serena");
	return (0);
}
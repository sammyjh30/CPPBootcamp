/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 13:59:12 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/08 14:33:57 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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
	return (0);
}
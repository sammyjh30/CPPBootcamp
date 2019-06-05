/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:22:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 18:44:46 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string, Weapon&);
		~HumanA(void);
		void	attack();
	
	private:
		std::string		name;
		Weapon&			weapon;
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:20:02 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/10 18:30:25 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
	private:
		int					_damage;
		int					_apcost;
		std::string			_name;
	
	public:
		AWeapon(void);
		AWeapon(const AWeapon &src);
		AWeapon(const std::string &name, int apcost, int damage);

		virtual				~AWeapon(void);

		AWeapon				&operator= (const AWeapon &obj);

		virtual void		attack(void) const = 0;

		int					getAPCost(void) const;
		int					getDamage(void) const;
		const std::string	getName(void) const;
};

#endif
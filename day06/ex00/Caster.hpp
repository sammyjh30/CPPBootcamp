/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:28:04 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 18:57:38 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

class Caster 
{
	public:
		Caster(void);
		Caster(Caster const &obj);
		~Caster(void);
		Caster			&operator=(const Caster& obj);
		void			cast(double const &value);
};

#endif
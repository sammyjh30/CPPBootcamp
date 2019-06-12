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

		void			tryChar(double n); //try - catch
		void			tryInt(double n); //try - catch
		void			tryFloat(double n); //try - catch
		void			tryDouble(double n); //try - catch
		char			castToChar(double n); //if - throw
		int				castToInt(double n);
		float			castToFloat(double n);
		double			castToDouble(double n);

		//Classes for error handling
		class Impossible
		{

		};
		class NonDiplayable //spell check name
		{

		};
};

#endif
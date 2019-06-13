/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Caster.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:28:04 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 10:18:23 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CASTER_HPP
# define CASTER_HPP

# include <iostream>
# include <ostream>
# include <iomanip> 
# include <string>
# include <limits>
# include <cctype>
# include <cmath>

class Caster 
{
	public:
		Caster(void);
		Caster(Caster const &obj);
		~Caster(void);
		Caster			&operator=(const Caster& obj);

		void			tryChar(double n); //try - catch
		void			tryInt(double n);
		void			tryFloat(double n, int precisionSize);
		void			tryDouble(double n, int precisionSize);
		char			castToChar(double n); //if - throw
		int				castToInt(double n);
		float			castToFloat(double n);
		double			castToDouble(double n);
		int				getPrecisionSize(char *str);

		//Classes for error handling
		class Impossible : public std::exception
		{
			public:
				Impossible(void);
				Impossible(const Caster::Impossible &obj);
				~Impossible(void) throw();
				Impossible	&operator=(const Impossible& obj);
				virtual const char* what() const throw();
		};
		class NonDisplayable : public std::exception
		{
			public:
				NonDisplayable(void);
				NonDisplayable(const Caster::NonDisplayable &obj);
				~NonDisplayable(void) throw();
				NonDisplayable	&operator=(const NonDisplayable& obj);
				virtual const char* what() const throw();
		};

};

#endif
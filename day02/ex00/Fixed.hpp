/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:03:03 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/07 14:32:53 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed 
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed(void);					//simple constructor
		Fixed(const Fixed &obj);		//copy constructor
		~Fixed();						//destructor
		Fixed	&operator=(const Fixed& f); //Need to return reference->memory duplication issue
		int		getRawBits(void) const;		//A member function of a class is a function that has its definition or its prototype within the class definition like any other variable.
		void	setRawbits(int const raw);
};

#endif
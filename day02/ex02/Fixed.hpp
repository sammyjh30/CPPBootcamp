/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 07:03:03 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/07 18:25:34 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed 
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;

	public:
		Fixed(void);
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &obj);
		~Fixed();
		Fixed	&operator=(const Fixed& f);
		int		getRawBits(void) const;
		void	setRawbits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		bool	operator>(const Fixed& f);
		bool	operator<(const Fixed& f);
		bool	operator>=(const Fixed& f);
		bool	operator<=(const Fixed& f);
		bool	operator==(const Fixed& f);
		bool	operator!=(const Fixed& f);

		Fixed	operator+(const Fixed& f);
		Fixed	operator-(const Fixed& f);
		Fixed	operator*(const Fixed& f);
		Fixed	operator/(const Fixed& f);

		Fixed	&operator++();	//Pre
		Fixed	&operator--();	//Pre
		Fixed	operator++(int);	//Post
		Fixed	operator--(int);	//Post

		static Fixed		min(const Fixed &a, const Fixed &b);
		static Fixed		max(const Fixed &a, const Fixed &b);



};

std::ostream	&operator<<(std::ostream &out, Fixed const &f);



#endif
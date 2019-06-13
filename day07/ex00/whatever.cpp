/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:22:54 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 13:22:28 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename S>
void		swap(S &arg1, S &arg2) {
	S temp = arg1;
	arg1 = arg2;
	arg2 = temp;
}

template <typename S>
S const			min(S const &arg1, S const &arg2) {
	return (arg1 < arg2 ? arg1 : arg2);
}

template <typename S>
S const			max(S const &arg1, S const &arg2) {
	return (arg1 > arg2 ? arg1 : arg2);
}



int			main( void ) {
	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
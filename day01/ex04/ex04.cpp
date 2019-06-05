/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 12:48:33 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 13:22:42 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string		*ptr = &str;
	std::string		&ref = str;

	std::cout<<"Pointer: "<<*ptr<<std::endl;
	std::cout<<"Reference: "<<ref<<std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:48:12 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/14 17:27:10 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int			main(void) {
	// clang++ -Wall -Werror -Wextra -std=c++98 *.cpp
	std::list<int>		list1;

	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);
	list1.push_back(6);
	try {
		easyfind(list1, INT_MAX);
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
	try {
		easyfind(list1, 3);
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
	try {
		easyfind(list1, -1);
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
	return 0;
}
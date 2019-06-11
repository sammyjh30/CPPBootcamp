/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:28:08 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/11 13:06:58 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main(void) {
	Bureaucrat test1 = Bureaucrat("joey", 50);
	Bureaucrat test2 = Bureaucrat(test1);
	std::cout<<test2<<std::endl;

	try {
		// for (int i = 0; i < 200; i++) {
		// 	test1.increment();
		// 	std::cout<<test1<<std::endl;
		// }
		for (int i = 100; i >= 0; i--) {
			test1.decrement();
			std::cout<<test1<<std::endl;
		}
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}
	return 0;
}
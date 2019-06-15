/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 17:32:00 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/15 18:00:35 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int				main(void) {
	try {
		Span sp = Span(5);
		sp.addNumber(8);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}

	try {
		int arr1[15] = {1,2,3,4,5,6,7,8,12,24,600,234,213,765,345};
		Span sp1 = Span(15, arr1);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}

	try {
		int arr1[15] = {10,20,30,40,50,60,70,80,90,100,200,300,400,500,600};
		Span sp1 = Span(15, arr1);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}

	try {
		int arr2[] = {12,43,234,545,2334,2,4,43,3,6,5,3,5,7,8,5,4,3,85,2,8,583,5885,85,6,7,852,58,58,25,86,25,8};
		Span sp3 = Span(sizeof(arr2));
		sp3.addNumbers(arr2, 33);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;

		Span sp4 = Span(sp3);
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	} catch (std::exception &e) {
		std::cout<<e.what()<<std::endl;
	}

	return 0;
}

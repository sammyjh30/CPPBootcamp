/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 17:32:00 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/14 17:32:37 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int				main(void) {
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	int arr1[] = {1,2,3,4,5,6,7,8,12,24,600,345,234,213,765,345};
	Span sp1 = Span(sizeof(arr1), arr1);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;

	int arr2[] = {12,43,234,545,2334,2,4,43,3,6,5,3,5,7,8,5,4,3,85,2,8,583,5885,85,6,7,852,58,58,25,86,25,8};
	Span sp3 = Span(sizeof(arr2));
	sp3.addNumbers(arr2);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	Span sp4 = Span(sp3);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;

	return 0;
}

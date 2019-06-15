/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:48:34 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/14 17:30:24 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <list>

// STL - Standard Template Library (Containers and algorithms)
// https://thispointer.com/c-list-find-contains-how-to-search-an-element-in-stdlist/

template<typename T>
void		easyfind(T templ, int n) {
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = templ.end();
	//This is not the STL way
	// int i = 0;
	// for (it = templ.begin(); it != ite; ++it) {
	// 	if (*it == n) {
	// 		std::cout<<"Found: "<<*it<<" at index: "<<i<<std::endl;
	// 		return ;
	// 	} else {
	// 		i++;
	// 	}
	// }
 
	// Fetch the iterator of element with value n
	it = std::find(templ.begin(), templ.end(), n);
	
	// Check if iterator points to end or not
	if(it != ite) {
		throw std::range_error("Error:: Failed to find match.");
	} else
	{
		std::cout<<"Found: "<<*it<<std::endl;
	}
		
}

#endif
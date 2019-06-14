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

template<typename T>
void		easyfind(T templ, int n) {
	std::list<int>::const_iterator	it;
	std::list<int>::const_iterator	ite = templ.end();
	int i = 0;
	for (it = templ.begin(); it != ite; ++it) {
		if (*it == n) {
			std::cout<<"Found: "<<*it<<" at index: "<<i<<std::endl;
			return ;
		} else {
			i++;
		}
	}
	std::cout<<"Failed match."<<std::endl;
}

#endif
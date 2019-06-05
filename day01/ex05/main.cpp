/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:28:25 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 15:01:39 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void) {
	Human		bob;

	std::cout<<bob.identify()<<std::endl;
	std::cout<<bob.getBrain().identify()<<std::endl;
	return 0;
}


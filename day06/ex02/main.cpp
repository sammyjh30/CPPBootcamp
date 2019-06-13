/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:12 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 12:13:40 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base		*generate(void) {
	int i = rand() % 3;

	switch(i) {
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
	return (new Base());
}

void		identify_from_pointer(Base * p) {
	if (dynamic_cast<A*>(p) != NULL) {
		std::cout<<"A"<<std::endl;
	} else if (dynamic_cast<B*>(p) != NULL) {
		std::cout<<"B"<<std::endl;
	} else if (dynamic_cast<C*>(p) != NULL) {
		std::cout<<"C"<<std::endl;
	} else {
		std::cout<<"Base"<<std::endl;
	}
}

void		identify_from_reference(Base & p) {
	if (dynamic_cast<A*>(&p) != NULL) {
		std::cout<<"A"<<std::endl;
	} else if (dynamic_cast<B*>(&p) != NULL) {
		std::cout<<"B"<<std::endl;
	} else if (dynamic_cast<C*>(&p) != NULL) {
		std::cout<<"C"<<std::endl;
	} else {
		std::cout<<"Base"<<std::endl;
	}
}

int			main(void) {
	srand(time(NULL));
	Base	*base;

	std::cout<<"Generate."<<std::endl;
	base = generate();
	std::cout<<"Identify from pointer."<<std::endl;
	identify_from_pointer(base);
	std::cout<<"Identify from reference."<<std::endl;
	identify_from_reference(*base);
	return 0;
}
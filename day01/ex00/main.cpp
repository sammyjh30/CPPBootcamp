/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */	
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:33:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/04 17:18:06 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
// https://en.wikipedia.org/wiki/Bosnian_Mountain_Horse
// https://en.wikipedia.org/wiki/Coffin_Bay_pony

void ponyOnTheHeap() {
	// Heap memory is set up through the use of the "new" keyword
	Pony	heapPony;

	heapPony.setName("Benjamin");
	heapPony.setAge("2");
	heapPony.setSound("Nay");
	heapPony.setBreed("Bosnian");
	heapPony.setColour("Black");

	std::cout<<"  Name: "<<heapPony.getName()<<std::endl;
	std::cout<<"  Age: "<<heapPony.getAge()<<std::endl;
	std::cout<<"  Breed: "<<heapPony.getBreed()<<std::endl;
	std::cout<<"  Colour: "<<heapPony.getColour()<<std::endl;
	std::cout<<"  Sound: "<<heapPony.getSound()<<std::endl;
}

void ponyOnTheStack() {
	// Stack memory is set up using simple variable declaration
	Pony*	stackPony = new Pony();

	stackPony->setName("Steve");
	stackPony->setAge("3");
	stackPony->setSound("Neigh");
	stackPony->setBreed("Coffin Bay");
	stackPony->setColour("Black");

	std::cout<<"  Name: "<<stackPony->getName()<<std::endl;
	std::cout<<"  Age: "<<stackPony->getAge()<<std::endl;
	std::cout<<"  Breed: "<<stackPony->getBreed()<<std::endl;
	std::cout<<"  Colour: "<<stackPony->getColour()<<std::endl;
	std::cout<<"  Sound: "<<stackPony->getSound()<<std::endl;
}

int		main(void) {
	std::cout<<"Pony on the heap:"<<std::endl;
	ponyOnTheHeap();
	std::cout<<"Pony on the stack:"<<std::endl;
	ponyOnTheStack();
	return 0;
}
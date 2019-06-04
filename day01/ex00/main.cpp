/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:33:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/04 14:13:16 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
// https://en.wikipedia.org/wiki/Bosnian_Mountain_Horse
// https://en.wikipedia.org/wiki/Coffin_Bay_pony
void ponyOnTheHeap() {
	Pony	heapPony;

	heapPony.setBreed("Bosnian");
	heapPony.setColour("Black");
}

void ponyOnTheStack() {
	Pony	stackPony;

	stackPony.setBreed("Coffin Bay");
}

int		main(void) {
	ponyOnTheHeap();
	ponyOnTheStack();
	return 0;
}
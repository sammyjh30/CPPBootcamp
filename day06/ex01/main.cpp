/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 10:30:39 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:22:26 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

struct Data { std::string s1; int n; std::string s2; };

std::string		gen_random(int len) {
	char letters[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz"
		"0123456789";
	char name[len];

	for (int i = 0; i < len; ++i) {
		name[i] = letters[std::rand() % (sizeof(letters) - 1)];
	}
	name[len] = 0;
	return ((std::string)name);
}

Data	*deserialize(void * raw) {

	Data *deserializedData = reinterpret_cast<Data*>(raw);
	std::cout<<"Deserialized:"<<std::endl;
	std::cout<<deserializedData->s1<<deserializedData->n<<deserializedData->s2<<std::endl;
	return (deserializedData);
}

void	*serialize(void) {
	srand(time(NULL));
	Data	*serializedData = new Data;

	serializedData->s1 = gen_random(8);
	serializedData->n = rand() % INT_MAX;
	serializedData->s2 = gen_random(8);

	std::cout<<"Serialized:"<<std::endl;
	std::cout<<serializedData->s1<<serializedData->n<<serializedData->s2<<std::endl;
	return(reinterpret_cast<void*>(serializedData));
}



int				main(void) {
	void *dataPtr;
	Data *data = new Data;

	dataPtr = serialize();
	data = deserialize(dataPtr);
	
	return 0;
}
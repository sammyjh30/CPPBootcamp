/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 13:24:24 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 15:32:58 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename I>
void	iter(I* arr,unsigned int const &len, void (*f)(I const &ref)) {
	if (arr && len > 0) {
		for (unsigned int i=0; i < len; i++){
			f(arr[i]);
		}
	}
	return;
}

template <typename I>
void		printInput(I const &elem) {
	std::cout<<elem<<std::endl;
}

int		main(void) {
	int				nums[] = {1,2,3,4,5,6,7,8,9,0};
	std::string		letters[] = {"a","bellow","cello","downlow","ello","fellow","gallow","hello","indigo","jello"};

	::iter(nums, 10, ::printInput);
	::iter(letters, 10, ::printInput);
	return 0;
}
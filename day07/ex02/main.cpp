/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 07:21:21 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/14 10:52:03 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>

int			main(void) {
	Array<std::string> arr = Array<std::string>(5);
	// Array<std::string> arr2 = arr;
	// (void)arr2;
	// return 0;
	try {
		std::cout<<"Array size = "<<arr.size()<<std::endl;
		arr[0] = "test1";
		std::cout<<"arr[0] = "<<arr[0]<<std::endl;
		arr[1] = "test2";
		std::cout<<"arr[1] = "<<arr[1]<<std::endl;
		arr[2] = "test3";
		std::cout<<"arr[2] = "<<arr[2]<<std::endl;
		arr[3] = "test4";
		std::cout<<"arr[3] = "<<arr[3]<<std::endl;
		arr[4] = "test5";	
		std::cout<<"arr[4] = "<<arr[4]<<std::endl;
		arr[5] = "test6";	
		std::cout<<"arr[5] = "<<arr[5]<<std::endl;
		arr[6] = "test7";
		std::cout<<"arr[6] = "<<arr[6]<<std::endl;
	} catch (std::exception &e) {
		std::cout<<"Error: "<<e.what()<<std::endl;		
	}

	Array<std::string> arr2(arr);
	try {
		std::cout<<"Array size = "<<arr2.size()<<std::endl;
		arr2[0] = "BOB";
		std::cout<<"arr[0] = "<<arr[0]<<std::endl<<"arr2[0] = "<<arr2[0]<<std::endl;
		arr2[1] = "BOB";
		std::cout<<"arr[1] = "<<arr[1]<<std::endl<<"arr2[1] = "<<arr2[1]<<std::endl;
		arr2[2] = "BOB";
		std::cout<<"arr[2] = "<<arr[2]<<std::endl<<"arr2[2] = "<<arr2[2]<<std::endl;
		arr2[3] = "BOB";
		std::cout<<"arr[3] = "<<arr[3]<<std::endl<<"arr2[3] = "<<arr2[3]<<std::endl;
		arr2[4] = "BOB";	
		std::cout<<"arr[4] = "<<arr[4]<<std::endl<<"arr2[4] = "<<arr2[4]<<std::endl;
		arr2[5] = "BOB";	
		std::cout<<"arr[5] = "<<arr[5]<<std::endl<<"arr2[5] = "<<arr2[5]<<std::endl;
	} catch (std::exception &e) {
		std::cout<<"Error: "<<e.what()<<std::endl;		
	}

	Array<std::string> arr3;
	arr3 = arr2; //Cannot do: Array<std::string> arr3 = arr2; -> it doesn't call the initializer.
	try {
		std::cout<<"Array size = "<<arr.size()<<std::endl;
		arr3[0] = "STEVE";
		std::cout<<"arr2[0] = "<<arr2[0]<<std::endl<<"arr3[0] = "<<arr3[0]<<std::endl;
		arr3[1] = "STEVE";
		std::cout<<"arr2[1] = "<<arr2[1]<<std::endl<<"arr3[1] = "<<arr3[1]<<std::endl;
		arr3[2] = "STEVE";
		std::cout<<"arr2[2] = "<<arr2[2]<<std::endl<<"arr3[2] = "<<arr3[2]<<std::endl;
		arr3[3] = "STEVE";
		std::cout<<"arr2[3] = "<<arr2[3]<<std::endl<<"arr3[3] = "<<arr3[3]<<std::endl;
		arr3[4] = "STEVE";	
		std::cout<<"arr2[4] = "<<arr2[4]<<std::endl<<"arr3[4] = "<<arr3[4]<<std::endl;
		arr3[5] = "STEVE";	
		std::cout<<"arr2[5] = "<<arr2[5]<<std::endl<<"arr3[5] = "<<arr3[5]<<std::endl;
	} catch (std::exception &e) {
		std::cout<<"Error: "<<e.what()<<std::endl;		
	}
	// delete arr;
	return 0;
}
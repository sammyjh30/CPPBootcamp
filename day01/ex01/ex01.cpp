/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 21:52:17 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/04 22:07:04 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void    memoryLeak() {
    std::string*    panthere = new std::string("String panthere");

    std::cout<<*panthere<<std::endl;
    delete(panthere);
}

// int main(void) {
//     memoryLeak();
//     return 0;
// }
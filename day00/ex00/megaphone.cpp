/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 08:27:36 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/03 09:36:14 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    } else {
        for (int i = 1; i < argc; i++) {
            for (int j = 0; j < (int)strlen(argv[i]); j++) {
                argv[i][j] = toupper(argv[i][j]);
                std::cout<<argv[i][j];
            }
            std::cout<<" ";
        }
        std::cout<<std::endl;
    }
    // std::cout<<"Hello"<<std::endl;
    return 0;
}
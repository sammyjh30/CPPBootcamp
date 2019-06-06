/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:38:31 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 13:43:58 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sys/stat.h>

void	 readFiles(int argc, char* argv[]) {
	// http://pubs.opengroup.org/onlinepubs/7908799/xsh/sysstat.h.html
	// https://www.ibm.com/support/knowledgecenter/en/ssw_ibm_i_74/apis/stat.htm
	struct stat buffer;
	

	for (int i=1; i<argc; i++) {
		if (stat(argv[i], &buffer) == -1) {
			std::cout<<"Failed to read file: "<<argv[i]<<". This file does not exist."<<std::endl;
		}
		//S_IFMT "is type of file"
		switch (buffer.st_mode & S_IFMT) {
			case S_IFBLK :
				std::cout<<"Failed to read: "<<"block special."<<std::endl;
				return ;
			case S_IFCHR :
				std::cout<<"Failed to read: "<<"character special"<<std::endl;
				return ;
			case S_IFIFO :
				std::cout<<"Failed to read: "<<"FIFO special"<<std::endl;
				return ;
			case S_IFDIR :
				std::cout<<"Failed to read: "<<"directory"<<std::endl;
				return ;
			case S_IFLNK :
				std::cout<<"Failed to read: "<<"symbolic link"<<std::endl;
				return ;

		}
		std::ifstream readFile(argv[i]);
		std::string readout;
		if (readFile.fail()) {
			std::cout<<"Failed to read file: "<<argv[i]<<std::endl;
		} else {
			while(std::getline(readFile, readout)) {
				std::cout<<readout<<std::endl;
			}
		}
	}
	
}

int 	main(int argc, char* argv[]) {
	std::string		input;
	if (argc >= 2) {
		readFiles(argc, argv);
	} else {
		for(;;) {
			std::getline(std::cin, input);
			std::cout<<input<<std::endl;
		}
	}

	return 0;
}
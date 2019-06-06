/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 07:33:50 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 09:04:59 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string		string_replace(std::string& str, std::string& search, std::string& replace)
{
	if (str.empty() || search.empty()) {
		return str;
	}
	size_t pos = 0;
	std::string newstr = str;
	// npos is a static member constant value with the greatest possible value for an element of type size_t.
	while ((pos = newstr.find(search)) != std::string::npos)
	{
		newstr.replace(pos, search.size(), replace);
		pos += replace.size();
	}
	return newstr;
}

int main(int argc, char* argv[]){
	if (argc == 4) {
		std::string readout;
		std::string search = argv[2];
		std::string replace = argv[3];
		std::string filename = argv[1];
		std::ifstream readFile(filename);
		if (readFile.fail()) {
			std::cout<<"ERROR: Failed to read file."<<std::endl;
			return 0;
		}
		std::ofstream outFile(filename + ".replace");
		if (outFile.fail()) {
			std::cout<<"ERROR: Failed to create new file."<<std::endl;
			return 0;
		}
		while(std::getline(readFile, readout)) {
			outFile << string_replace(readout, search, replace) + '\n';
		}
		std::cout<<"Replace completed."<<std::endl;
	} else {
		std::cout<<"ERROR: Invalid arguments."<<std::endl;
	}
	return (0);
}
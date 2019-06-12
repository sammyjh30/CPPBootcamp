/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:10:17 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 10:19:52 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(void) {return;}
Logger::~Logger(void) {return;}

void			Logger::logToConsole(std::string message) {
	std::cout<<this->makeLogEntry(message);

}

void			Logger::logToFile(std::string message) {
		std::string readout;
		std::string filename = this->name;
		std::ifstream readFile(filename);
		std::ofstream outfile;
		outfile.open(this->name + ".log", std::ios_base::app);
		if (outfile.fail()) {
			std::cout<<"ERROR: Failed to open file."<<std::endl;
			return;
		}
		outfile << this->makeLogEntry(message); 
}

void			Logger::setName(std::string name) {
	this->name = name;
}

std::string		Logger::getName(void) {
	return (this->name);
	
}

std::string			Logger::makeLogEntry(std::string message) {
	std::time_t time = std::time(nullptr);
	//Convert time to string
	std::tm * ptm = std::localtime(&time);
	char buffer[32];
	// Format: Mo, 15.06.2009 20:20:00
	std::strftime(buffer, 32, "%a, %d.%m.%Y %H:%M:%S", ptm);  
	return ((std::string)buffer + " | INFO | " + message + '\n');
}

void			Logger::log(std::string const & dest, std::string const & message) {
	std::string logOutputs[] = {"console", "file"};
	
	// https://isocpp.org/wiki/faq/pointers-to-members
	//Make sure only 1 arguement
	typedef void (Logger::*Logs)(std::string const message);
	Logs all[2] = {&Logger::logToConsole, &Logger::logToFile};

	for (int i=0; i < 2; i++) {
		if (dest == logOutputs[i]) {
			(this->*(all[i]))(message);
		}
	}	
}
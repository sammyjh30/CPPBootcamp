/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:04:51 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 12:29:45 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
#include <fstream>
#include <string>
#include <sstream>

class Logger {
	private:
		void			logToConsole(const std::string);
		void			logToFile(const std::string);
		std::string		name;
		std::string		makeLogEntry(std::string);

	public:
		Logger(void);
		~Logger(void);
		void			setName(std::string);
		std::string		getName(void);
		void			log(std::string const & dest, std::string const & message);
};

#endif
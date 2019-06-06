/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 11:04:45 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 12:24:02 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int		main(void) {
	Logger log;

	log.setName("LogFile");
	log.log("file", "This is a test.");
	log.log("file", "This is another test.");
	log.log("file", "This is another test.");
	
	log.log("console", "This is a test.");
	log.log("console", "This is another test.");
	log.log("console", "This is another test.");

	return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:02:47 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 15:28:47 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		Intern(void);
		Intern(Intern const &obj);
		~Intern(void);
		Intern		&operator=(Intern const &obj);
		
		Form		*makeForm(std::string formName, std::string target);
		
	private:
		Form		*_createShrubberyCreationForm(std::string target);
		Form		*_createRobotomyRequestForm(std::string target);
		Form		*_createPresidentialPardonForm(std::string target);
};

#endif
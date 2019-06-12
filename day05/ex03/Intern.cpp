/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 12:02:50 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 15:28:49 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void) { return; }

Intern::Intern(Intern const &obj) {
	*this = obj;
	return;
}

Intern::~Intern(void) { return; }

Intern		&Intern::operator=(Intern const &obj) {
	(void)obj;
	return (*this);
}

Form		*Intern::_createShrubberyCreationForm(std::string target) {
	std::cout<<"Intern creates <ShrubberyCreationForm>"<<std::endl;
	return(new ShrubberyCreationForm(target));
}

Form		*Intern::_createRobotomyRequestForm(std::string target) {
	std::cout<<"Intern creates <RobotomyRequestForm>"<<std::endl;
	return(new RobotomyRequestForm(target));
}

Form		*Intern::_createPresidentialPardonForm(std::string target) {
	std::cout<<"Intern creates <PresidentialPardonForm>"<<std::endl;
	return(new PresidentialPardonForm(target));
}

Form		*Intern::makeForm(std::string formName, std::string target) {

	std::string		forms[] = {"shrubbery", "robot", "presidential"};

	typedef Form *(Intern::*InternForms)(std::string target);
	InternForms	callForms[3] = {&Intern::_createShrubberyCreationForm, 
								&Intern::_createRobotomyRequestForm, 
								&Intern::_createPresidentialPardonForm };
	
	for (int i=0; i<3; i++) {
		if (forms[i] == formName) {
			return(this->*(callForms[i]))(target);
		}
	}
	std::cout<<"Intern failed to create form."<<std::endl;
	return NULL;
}

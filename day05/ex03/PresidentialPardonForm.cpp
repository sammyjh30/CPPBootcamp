/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:45:17 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/12 11:43:36 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardon", 25, 5) {
	this->_sign = 25;
	this->_exec = 5;
	this->setTarget("unknown");
	return;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardon", 25, 5) {
	this->_sign = 25;
	this->_exec = 5;
	this->setTarget(target);
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : Form("PresidentialPardon", 25, 5) {
	this->_sign = 25;
	this->_exec = 5;
	*this = obj;
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
	return;
}

int							PresidentialPardonForm::getSign(void) {
	return (this->_sign);
}

int							PresidentialPardonForm::getExec(void) {
	return (this->_exec);
}

PresidentialPardonForm		&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj) {
	(void)obj;
	return (*this);
}

//execute - Action : Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
void 				PresidentialPardonForm::execute(const Bureaucrat &obj) const {
	if (obj.getGrade() > this->_exec) {
		throw Form::GradeTooLowException();
	} else if (!this->getSigned()) {
		throw Form::NotSignedException();
	}
	std::cout<<"<"<<this->getTarget()<<"> has been pardoned by Zafod Beeblebrox."<<std::endl;
	
	return;
}
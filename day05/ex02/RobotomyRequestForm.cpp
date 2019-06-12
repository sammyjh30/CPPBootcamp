/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:45:25 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/12 11:44:48 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("RobotomyRequest", 72, 45) {
	this->_sign = 72;
	this->_exec = 45;
	this->setTarget("unknown");
	return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequest", 72, 45) {
	this->_sign = 72;
	this->_exec = 45;
	this->setTarget(target);
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : Form("RobotomyRequest", 72, 45) {
	this->_sign = 72;
	this->_exec = 45;
	*this = obj;
	return;
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
	return;
}

int							RobotomyRequestForm::getSign(void) {
	return (this->_sign);
}

int							RobotomyRequestForm::getExec(void) {
	return (this->_exec);
}

RobotomyRequestForm		&RobotomyRequestForm::operator=(RobotomyRequestForm const &obj) {
	(void)obj;
	return (*this);
}

//execute - Action : Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
void 				RobotomyRequestForm::execute(const Bureaucrat &obj) const {
	if (obj.getGrade() > this->_exec) {
		throw Form::GradeTooLowException();
	} else if (!this->getSigned()) {
		throw Form::NotSignedException();
	}
	srand(time(NULL));
	int		chance = (rand() % 2);
	if (chance == 1 ){
		//Become robot
		std::cout<<"Robotomy Request Form approved. Target: <"<<this->getTarget()<<"> has been robotomized successfully."<<std::endl;
	} else {
		//Don't
		std::cout<<"Robotomy Request Form failed for target: "<<this->getTarget()<<std::endl;
	}
	
}
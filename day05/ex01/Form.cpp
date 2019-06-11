/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:18:58 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/11 13:55:43 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

// GradeTooHighException

Form::GradeTooHighException::GradeTooHighException(void) : std::exception() {return;}

Form::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj) {
	*this = obj;
	return;
}
Form::GradeTooHighException::~GradeTooHighException(void) throw() { return; }

Form::GradeTooHighException	&Form::GradeTooHighException::operator=(const GradeTooHighException &obj) {
	(void)obj;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

//////////////////////////////////////////////////

// GradeTooLowException

Form::GradeTooLowException::GradeTooLowException(void) : std::exception() {return;}

Form::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj) {
	*this = obj;
	return;
}
Form::GradeTooLowException::~GradeTooLowException(void) throw() { return; }

Form::GradeTooLowException	&Form::GradeTooLowException::operator=(const GradeTooLowException &obj) {
	(void)obj;
	return (*this);
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

//////////////////////////////////////////////////


//	Form

Form::Form() : _name("") { 
	return; 
}

Form::Form(std::string name, int grade) : _name(name) {
	// this->setGrade(grade);
	return;
}

Form::Form(const Form &obj) {
	*this = obj;
	return ;
}

Form::~Form(void) { return; }

// void					Form::setGrade(int grade) {
// 	if (grade < 1) {
// 		throw Form::GradeTooHighException();		// Must throw not catch.
// 	} else if (grade > 150) {
// 		throw Form::GradeTooLowException();
// 	} else {
// 		this->_grade = grade;
// 	}
// }

std::string				Form::getName(void) const {
	return (this->_name);
}

int						Form::getGrade(void) const {
	return (this->_grade);
}

Form	&Form::operator=(const Form& obj) {
	this->_grade = obj._grade;
	return (*this);
}

void					Form::increment(void) {
	this->setGrade(this->getGrade() - 1);
}

void					Form::decrement(void) {
	this->setGrade(this->getGrade() + 1);
}


//////////////////////////////////////////////////

// << overload
std::ostream	&operator<<(std::ostream &out, Form const &obj) {
	out <<"<"<<obj.getName()<<">, Form grade <"<<obj.getGrade()<<">."<<std::endl;
	return out;
}

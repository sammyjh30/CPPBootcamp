/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:42:51 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/11 12:59:26 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// GradeTooHighException

Bureaucrat::GradeTooHighException::GradeTooHighException(void) : std::exception() {return;}

Bureaucrat::GradeTooHighException::GradeTooHighException(const GradeTooHighException &obj) {
	*this = obj;
	return;
}
Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw() { return; }

Bureaucrat::GradeTooHighException	&Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &obj) {
	(void)obj;
	return (*this);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

//////////////////////////////////////////////////

// GradeTooLowException

Bureaucrat::GradeTooLowException::GradeTooLowException(void) : std::exception() {return;}

Bureaucrat::GradeTooLowException::GradeTooLowException(const GradeTooLowException &obj) {
	*this = obj;
	return;
}
Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw() { return; }

Bureaucrat::GradeTooLowException	&Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &obj) {
	(void)obj;
	return (*this);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

//////////////////////////////////////////////////


//	Bureaucrat

Bureaucrat::Bureaucrat() : _name("") { 
	return; 
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	this->setGrade(grade);
	return;
}

Bureaucrat::Bureaucrat(const Bureaucrat &obj) {
	*this = obj;
	return ;
}

Bureaucrat::~Bureaucrat(void) { return; }

void					Bureaucrat::setGrade(int grade) {
	if (grade < 1) {
		throw Bureaucrat::GradeTooHighException();		// Must throw not catch.
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else {
		this->_grade = grade;
	}
}

std::string				Bureaucrat::getName(void) const {
	return (this->_name);
}

int						Bureaucrat::getGrade(void) const {
	return (this->_grade);
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat& obj) {
	this->_grade = obj._grade;
	return (*this);
}

void					Bureaucrat::increment(void) {
	this->setGrade(this->getGrade() - 1);
}

void					Bureaucrat::decrement(void) {
	this->setGrade(this->getGrade() + 1);
}


//////////////////////////////////////////////////

// << overload
std::ostream	&operator<<(std::ostream &out, Bureaucrat const &obj) {
	out <<"<"<<obj.getName()<<">, bureaucrat grade <"<<obj.getGrade()<<">."<<std::endl;
	return out;
}

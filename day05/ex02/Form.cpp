/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:18:58 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 08:36:42 by shillebr         ###   ########.fr       */
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

//	NotSignedException

//////////////////////////////////////////////////
Form::NotSignedException::NotSignedException(void) : std::exception() { return; }
Form::NotSignedException::NotSignedException(const NotSignedException &obj) {
	*this = obj;
	return;
}

Form::NotSignedException::~NotSignedException(void) throw() {return;}

Form::NotSignedException		&Form::NotSignedException::operator= (const NotSignedException &obj) {
	(void)obj;
	return (*this);
}

const char*		Form::NotSignedException::what(void) const throw() {
	return("Not signed.");
}

//	Form

Form::Form(void) : _name(""), 
					_gradeToSign(1), 
					_gradeToExecute(1), 
					_signed(false) { return; }

Form::Form(std::string name, int gradeToSign, int gradeToExecute) : _name(name), 
																	_gradeToSign(gradeToSign),
																	_gradeToExecute(gradeToExecute),
																	_signed(false) {
	//Do Error checks
	if (gradeToSign < 1 || gradeToExecute < 1) {
		throw Form::GradeTooHighException();		// Must throw not catch.
	} else if (gradeToSign > 150 || gradeToExecute > 150) {
		throw Form::GradeTooLowException();
	}
	return; 
}

Form::Form(const Form &obj) : _name(obj._name), 
							_gradeToSign(obj._gradeToSign),
							_gradeToExecute(obj._gradeToExecute),
							_signed(false) {
	*this = obj;
	return ;
}

Form::~Form(void) { return; }

void					Form::setSigned(bool s) {
	this->_signed = s;
}

void					Form::setTarget(std::string target) {
	this->_target = target;
}

std::string				Form::getName(void) const {
	return (this->_name);
}

bool					Form::getSigned(void) const {
	return(this->_signed);
}

std::string				Form::getTarget(void) const {
	return (this->_target);
}

int						Form::getGradeToSign(void) const {
	return (this->_gradeToSign);
}

int						Form::getGradeToExecute(void) const {
	return (this->_gradeToExecute);
}

Form					&Form::operator=(const Form& obj) {
	this->_signed = obj._signed;
	return (*this);
}

void					Form::beSigned(Bureaucrat const &obj) {
	if  (obj.getGrade() <= this->getGradeToSign()) {
		this->setSigned(true);
	} else {
		throw Form::GradeTooLowException();
	}
}

//execute 
void					Form::execute(const Bureaucrat &obj) const {
	if  (obj.getGrade() > this->getGradeToExecute()) {
		throw Form::GradeTooLowException();
	} else if (!this->_signed) {
		throw Form::NotSignedException();
	}
}

//////////////////////////////////////////////////

// << overload
std::ostream	&operator<<(std::ostream &out, Form const &obj) {
	out <<"Form: "<<obj.getName()<<" which requires grade "<<obj.getGradeToSign() \
			<<" to sign, and "<<obj.getGradeToExecute()<<" to be executed is" \
			<<(obj.getSigned() ? "" : " not")<<" signed."<<std::endl;
	return out;
}

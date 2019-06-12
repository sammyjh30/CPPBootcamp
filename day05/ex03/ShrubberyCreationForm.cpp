/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:45:41 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/12 11:39:12 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyForm", 145, 137) {
	this->_sign = 145;
	this->_exec = 137;
	this->setTarget("unknown");
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137) {
	this->_sign = 145;
	this->_exec = 137;
	this->setTarget(target);
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : Form("ShrubberyForm", 145, 137) {
	this->_sign = 145;
	this->_exec = 137;
	*this = obj;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
	return;
}

int							ShrubberyCreationForm::getSign(void) {
	return (this->_sign);
}

int							ShrubberyCreationForm::getExec(void) {
	return (this->_exec);
}

ShrubberyCreationForm		&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj) {
	(void)obj;
	return (*this);
}

//execute - Action : Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
void 				ShrubberyCreationForm::execute(const Bureaucrat &obj) const {
	if (obj.getGrade() > this->_exec) {
		throw Form::GradeTooLowException();
	} else if (!this->getSigned()) {
		throw Form::NotSignedException();
	}
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream outfile;
	outfile.open(filename, std::ios_base::app);
	if (outfile.fail()) {
		std::cout<<"ERROR: Failed to open file."<<std::endl;
		return;
	}
	outfile <<"               ,@@@@@@@,                 "<<std::endl;
	outfile <<"       ,,,.   ,@@@@@@/@@,  .oo8888o.     "<<std::endl;
	outfile <<"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o    "<<std::endl;
	outfile <<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'   "<<std::endl;
	outfile <<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'   "<<std::endl;
	outfile <<"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'    "<<std::endl;
	outfile <<"   `&%\\ ` /%&'    |.|        \\ '|8'      "<<std::endl;
	outfile <<"       |o|        | |         | |        "<<std::endl;
	outfile <<"       |.|        | |         | |        "<<std::endl;
	outfile <<"_\\_\\ \\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_"<<std::endl;
	std::cout<<"File <"<<filename<<"> created."<<std::endl;
	outfile.close();
	return;
}
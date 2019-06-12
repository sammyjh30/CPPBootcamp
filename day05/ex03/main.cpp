/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:28:08 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 15:42:02 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int		main(void) {

	Intern i;

	try{
		Bureaucrat high("high", 1);
		Bureaucrat low("low", 150);

		// ShrubberyCreationForm f("Test");
		Form *f = i.makeForm("shrubbery", "test1");
		std::cout << *f << std::endl;

		f->beSigned(low);

	}
	catch (ShrubberyCreationForm::GradeTooLowException &e)
	{
		std::cout << "    " << e.what() << std::endl;
	}

	try{
		Bureaucrat high("high", 1);
		Bureaucrat low("low", 150);

		Form *f = i.makeForm("robot", "test1");
		std::cout << *f << std::endl;

		low.setGrade(20);
		f->beSigned(low);
		f->execute(low);
		//scf.beSigned(b);
	}
	catch (std::exception & e)
	{
		std::cout << "    " << e.what() << std::endl;
	}

	try{
		Bureaucrat high("high", 1);
		Bureaucrat low("low", 150);

		Form *f = i.makeForm("presidential", "test1");
		std::cout << *f << std::endl;


		low.setGrade(100);
		f->beSigned(low);
		f->execute(low);
		//scf.beSigned(b);
	}
	catch (std::exception & e)
	{
		std::cout << "    " << e.what() << std::endl;
	}
	return 0;
}
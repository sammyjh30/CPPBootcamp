/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:28:08 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 15:47:38 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int		main(void) {

	try{
		Bureaucrat high("high", 1);
		Bureaucrat low("low", 150);

		ShrubberyCreationForm f("Test");
		std::cout << f << std::endl;

		f.beSigned(low);

	}
	catch (ShrubberyCreationForm::GradeTooLowException &e)
	{
		std::cout << "    " << e.what() << std::endl;
	}

	try{
		Bureaucrat high("high", 1);
		Bureaucrat low("low", 150);

		RobotomyRequestForm f("Test");
		std::cout << f << std::endl;

		low.setGrade(20);
		f.beSigned(low);
		f.execute(low);
		//scf.beSigned(b);
	}
	catch (std::exception & e)
	{
		std::cout << "    " << e.what() << std::endl;
	}

	try{
		Bureaucrat high("high", 1);
		Bureaucrat low("low", 150);

		PresidentialPardonForm f("Test");
		std::cout << f << std::endl;

		low.setGrade(100);
		f.beSigned(low);
		f.execute(low);
		//scf.beSigned(b);
	}
	catch (std::exception & e)
	{
		std::cout << "    " << e.what() << std::endl;
	}

	return 0;
}
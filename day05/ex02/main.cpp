/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 09:28:08 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/12 11:48:02 by shillebr         ###   ########.fr       */
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
	// Bureaucrat test1 = Bureaucrat("joey", 50);
	// Bureaucrat test2 = Bureaucrat(test1);
	// std::cout<<test2<<std::endl;

	// try {
	// 	// Bureaucrat too low
	// 	// for (int i = 0; i < 200; i++) {
	// 	// 	test1.increment();
	// 	// 	std::cout<<test1<<std::endl;
	// 	// }

	// 	// Bureaucrat too High
	// 	// for (int i = 100; i >= 0; i--) {
	// 	// 	test1.decrement();
	// 	// 	std::cout<<test1<<std::endl;
	// 	// }

	// 	//Form too high
	// 	// Form form1 = Form("test1", 0, 9);
	// 	// Form form2 = Form("test", 9, 0);

	// 	//Form too low
	// 	// Form form3 = Form("test2", 500, 9);
	// 	// Form form4 = Form("test3", 9, 500);


	// 	Form form5 = Form("test4", 40, 90);
	// 	Form form6 = Form("test4", 50, 90);
	// 	std::cout<<form5<<std::endl;
	// 	std::cout<<form6<<std::endl;

	// 	// //Beau too low
	// 	// form5.beSigned(test1);

	// 	form6.beSigned(test1);
	// 	std::cout<<form5<<std::endl;
	// 	std::cout<<form6<<std::endl;



	// } catch (std::exception &e) {
	// 	std::cout<<e.what()<<std::endl;
	// }
	return 0;
}
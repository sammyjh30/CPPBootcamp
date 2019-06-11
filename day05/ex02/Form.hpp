/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:18:55 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/11 17:33:03 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const		_name;
		int const				_gradeToSign;
		int const				_gradeToExecute;
		bool					_signed;
	public:
		Form(void);
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(const Form &obj);
		~Form(void);
		void					setSigned(bool);
		bool					getSigned(void) const;
		std::string				getName(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExecute(void) const;
		Form					&operator=(const Form& obj);
		void					increment(void);
		void					decrement(void);
		//be signed
		void					beSigned(Bureaucrat const &obj);
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const Form::GradeTooHighException &obj);
				virtual					~GradeTooHighException(void) throw();
				GradeTooHighException	&operator=(const GradeTooHighException& obj);
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				GradeTooLowException(const GradeTooLowException &obj);
				virtual		~GradeTooLowException(void) throw();
				GradeTooLowException	&operator=(const GradeTooLowException& obj);
				virtual const char* what() const throw();
		};

};

std::ostream	&operator<<(std::ostream &out, Form const &obj);

#endif
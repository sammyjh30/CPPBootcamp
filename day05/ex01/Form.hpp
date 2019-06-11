/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:18:55 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/11 13:53:50 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form
{
	private:
		std::string const		_name;
		int const				_gradeToSign;
		int const				_gradeToExecute;
		bool					_signed;
	public:
		Form(void);
		Form(std::string name, int grade);
		Form(const Form &obj);
		~Form(void);
		void					setSigned(bool) const;
		bool					getSigned(void) const;
		int						getGradeToSign(void) const;
		int						getGradeToExecute(void) const;
		Form					&operator=(const Form& obj);
		void					increment(void);
		void					decrement(void);
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
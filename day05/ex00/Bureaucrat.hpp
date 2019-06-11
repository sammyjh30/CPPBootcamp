/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 08:43:31 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/11 12:59:22 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string const		_name;
		int						_grade;
	public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &obj);
		~Bureaucrat(void);
		void					setGrade(int);
		std::string				getName(void) const;
		int						getGrade(void) const;
		Bureaucrat	&operator=(const Bureaucrat& obj);
		void					increment(void);
		void					decrement(void);
		class GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				GradeTooHighException(const GradeTooHighException &obj);
				virtual		~GradeTooHighException(void) throw();
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

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &obj);

#endif
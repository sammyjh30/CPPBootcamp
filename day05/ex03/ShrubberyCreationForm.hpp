/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:45:36 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/12 11:39:14 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

#include <fstream>

class ShrubberyCreationForm : public Form
{
	private:
		int						_sign; //145
		int						_exec; //137

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		~ShrubberyCreationForm(void);

		int							getSign(void);
		int							getExec(void);

		ShrubberyCreationForm		&operator=(ShrubberyCreationForm const &obj);

		//execute - Action : Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
		virtual void 				execute(const Bureaucrat &obj) const;

};

#endif
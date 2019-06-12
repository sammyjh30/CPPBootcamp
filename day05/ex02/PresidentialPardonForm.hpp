/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:41:44 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/12 11:44:32 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class PresidentialPardonForm : public Form
{
	private:
		int							_sign; // 25
		int							_exec; // 5

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		~PresidentialPardonForm(void);

		int							getSign(void);
		int							getExec(void);

		PresidentialPardonForm		&operator=(PresidentialPardonForm const &obj);

		//execute - Action : Create a file called <target>_shrubbery, and write ASCII trees inside it, in the current directory.
		virtual void 				execute(const Bureaucrat &obj) const;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:45:21 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/12 11:40:00 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Bureaucrat.hpp"
# include "Form.hpp"

class RobotomyRequestForm : public Form
{
	private:
		int							_sign; // 72
		int							_exec; // 45

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &obj);
		~RobotomyRequestForm(void);

		int							getSign(void);
		int							getExec(void);

		RobotomyRequestForm		&operator=(RobotomyRequestForm const &obj);

		//execute - Action : Makes some drilling noises, and tells us that <target> has been robotomized successfully 50% of the time. the rest of times, tells us it’s a failure.
		virtual void 				execute(const Bureaucrat &obj) const;

};

#endif
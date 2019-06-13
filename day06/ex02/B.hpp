/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:32 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:48:49 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include "Base.hpp"

class B : public Base
{
	private:
		B(const B &obj);
		B	&operator=(const B& obj);
	public:
		B(void);
		virtual	~B(void);
};

#endif
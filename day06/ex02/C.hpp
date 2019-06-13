/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:26 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:49:20 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C : public Base
{
	private:
		C(const C &obj);
		C	&operator=(const C& obj);
	public:
		C(void);
		virtual	~C(void);
};

#endif
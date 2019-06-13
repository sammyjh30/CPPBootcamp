/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:37 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:47:55 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include "Base.hpp"

class A : public Base
{
	private:
		A(const A &obj);
		A	&operator=(const A& obj);
	public:
		A(void);
		virtual	~A(void);
};

#endif
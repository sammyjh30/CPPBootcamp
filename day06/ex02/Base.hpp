/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 11:25:21 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 11:56:32 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

class Base
{
	private:
		Base(const Base &obj);
		Base	&operator=(const Base& obj);

	public:
		Base(void);
		virtual	~Base(void);
};

#endif
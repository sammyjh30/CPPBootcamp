/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 17:33:41 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/14 18:24:21 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

class Span
{
	private:
	public:
		Span(void);
		Span(unsigned int N);
		~Span(void);
		Span		&operator=(const Span &obj);
};
#endif
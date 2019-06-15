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

# include <iostream>
# include <list>

class Span
{
	private:
		std::list<int> 		_list;
	public:
		Span(void);
		Span(unsigned int N);
		Span(unsigned int N, int *nums);
		~Span(void);
		Span			&operator=(const Span &obj);

		void			addNumber(int n);  //Will have a try catch for if it exceeds N
		std::string		shortestSpan(void); //if no span to find, throw exception
		std::string		longestSpan(void);
};
#endif
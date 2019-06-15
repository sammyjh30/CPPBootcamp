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
# include <vector>
# include <algorithm>
# include <numeric>

// https://www.fluentcpp.com/2017/10/13/size-capacity-stl-containers//
// Vectors have a size and capacity -> easier to add
class Span
{
	private:
		std::vector<int> 		_vector;
	public:
		Span(void);
		Span(unsigned int N);
		Span(unsigned int N, int *nums);
		Span(Span const &obj);
		~Span(void);
		Span			&operator=(const Span &obj);

		void			addNumber(int n);  //Will have a try catch for if it exceeds N
		void			addNumbers(int *nums);  //Will have a try catch for if it exceeds N
		int				shortestSpan(void); //if no span to find, throw exception
		int				longestSpan(void);
};
#endif
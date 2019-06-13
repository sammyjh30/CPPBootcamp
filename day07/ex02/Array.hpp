/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 15:46:32 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/13 17:59:25 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

// https://www.codeproject.com/Articles/48575/How-to-define-a-template-class-in-a-h-file-and-imp

template<typename T>
class Array
{
	public:
		Array<T>(void);
		Array<T>(unsigned int len);
		Array<T>(Array<T> const &obj);
		// Construction by assignment operator?
		~Array<T>(void);
		Array<T>				&operator=(const Array<T> &obj);

		unsigned int		size() const;    //unsigned because there would never be a negative value
		// Overriding the []
		T					&operator[](unsigned int i);
	private:
		unsigned int		_length; // Keeps the size, so that we don't take variables in the size function

};

#endif
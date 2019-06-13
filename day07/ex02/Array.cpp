/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:45:09 by sammyjh30         #+#    #+#             */
/*   Updated: 2019/06/13 18:15:05 by sammyjh30        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<typename T>
Array<T>::Array(void) {
    //Array<T> Allows the construstion of the class
    return;
}
template<typename T>
Array<T>::Array(unsigned int len) : _length(len) {

}

Array<T>(Array<T> const &obj) {
    *this = obj;
    return;
}
// Construction by assignment operator?
~Array<T>(void);
Array<T>				&operator=(const Array<T> &obj);

unsigned int		size() const;
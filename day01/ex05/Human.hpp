/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 13:28:50 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/05 15:09:44 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {
	private:
		Brain			brain;

	public:
		Human(void);
		~Human(void);
		std::string		identify(void);
		void			setBrain(Brain);
		Brain			&getBrain(void);

};

#endif
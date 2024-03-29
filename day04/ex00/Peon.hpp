/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:18:54 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/10 18:18:55 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Peon.hpp"
# include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);

	public:
		Peon(std::string name);
		Peon(const Peon &obj);
		~Peon(void);
		
		virtual void			getPolymorphed(void) const;           
};

#endif
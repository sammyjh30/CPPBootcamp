/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 09:12:18 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/06 11:00:51 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int		main(void) {
	Human human;

	human.action("meleeAttack", "steve");
	human.action("rangedAttack", "paul");
	human.action("intimidatingShout", "marlin");

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:06:30 by shillebr          #+#    #+#             */
/*   Updated: 2019/06/13 10:26:22 by shillebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Caster.hpp"

int			main(int argc, char *argv[]) {
	double		d;		// double more accurate than float
	int			precision;
	Caster		cast;
	if (argc < 2) {
		std::cout<<"Invalid input. Correct usage: ./a.out [no.]"<<std::endl;
		return 0;
	}
	for (int i=1; i<argc; i++) {
		d = std::stod(argv[i]);
		precision = cast.getPrecisionSize(argv[i]);
		cast.tryChar(d);
		cast.tryInt(d);
		cast.tryFloat(d, precision);
		cast.tryDouble(d, precision);
	}
	return 0;
}
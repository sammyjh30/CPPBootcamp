# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 09:02:21 by shillebr          #+#    #+#              #
#    Updated: 2019/06/03 09:52:09 by shillebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for Megaphone

# *****************************************************
# Variables to control Makefile operation

# CXX = clang++
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra

# ****************************************************
# Targets needed to bring the executable up to date

megaphone: obj/megaphone.o
	$(CXX) $(CXXFLAGS) -o megaphone obj/megaphone.o

# The main.o target can be written more simply

obj/megaphone.o: megaphone.cpp
	@mkdir -p obj
	$(CXX) $(CXXFLAGS) -c megaphone.cpp -o $@

clean:
	-rm -rf obj

fclean: clean
	-rm megaphone

all: fclean megaphone
	
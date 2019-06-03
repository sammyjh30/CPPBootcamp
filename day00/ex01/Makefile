# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 09:02:21 by shillebr          #+#    #+#              #
#    Updated: 2019/06/03 13:55:27 by shillebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for Phonebook

# *****************************************************
# Variables to control Makefile operation

CXX = clang++
CXXFLAGS = -Wall -Werror -Wextra
SRC = phonebook.cpp
OBJ_DIR = obj
OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
HEADERS = contact.class.hpp

NAME = phonebook

# ****************************************************
# Targets needed to bring the executable up to date

$(NAME): $(OBJ) $(HEADERS)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

# The main.o target can be written more simply

$(OBJ): $(SRC) $(HEADERS)
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $@

clean:
	-rm *.o 
	-rm -rf $(OBJ_DIR)

fclean: clean
	-rm $(NAME)

all: fclean $(NAME)
	
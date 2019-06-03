# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sammyjh30 <sammyjh30@student.42.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 09:02:21 by shillebr          #+#    #+#              #
#    Updated: 2019/06/03 23:46:33 by sammyjh30        ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for Phonebook

# *****************************************************
# Variables to control Makefile operation

# CXX = clang++
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra
SRC = phonebook.cpp contact.class.cpp
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
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)

clean:
	-rm *.o 
	-rm -rf $(OBJ_DIR)

fclean: clean
	-rm $(NAME)

all: fclean $(NAME)
	
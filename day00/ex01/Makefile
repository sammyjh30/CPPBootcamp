# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/03 09:02:21 by shillebr          #+#    #+#              #
#    Updated: 2019/06/04 09:35:22 by shillebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Makefile for Phonebook

# *****************************************************
# Variables to control Makefile operation

# CXX = clang++
# # CXX = c++
# CXXFLAGS = -Wall -Werror -Wextra
# SRC = phonebook.cpp Contact.cpp
# OBJ_DIR = obj
# OBJ = $(SRC:%.cpp=$(OBJ_DIR)/%.o)
# HDR= Contact.hpp
# NAME = phonebook

# # ****************************************************
# # Targets needed to bring the executable up to date



# $(NAME): $(OBJ) $(HDR)
# 	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

# # The main.o target can be written more simply

# $(OBJ): $(SRC) $(HDR)
# 	@mkdir -p $(OBJ_DIR)
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# clean:
# 	-rm *.o 
# 	-rm -rf $(OBJ_DIR)

# fclean: clean
# 	-rm $(NAME)

# all: fclean $(NAME)


# Name of the program.
NAME     := phonebook

# Sources and objects.
SRCS     := Contact.cpp phonebook.cpp
HDRS     := Contact.hpp
OBJS     := $(SRCS:.cpp=.o)

# Define all the compiling flags.
CXX      := clang++
CXXFLAGS := -std=c++98 -Wall -Werror -Wextra

# Compile and create everything.
all: $(NAME)

# Compile the program with the objects.
$(NAME): $(OBJS) $(HDRS)
	@$(CXX) $(OBJS) -o $@

# This won't run if the source files don't exist or are not modified.
%.o: %.cpp %.hpp
	$(CXX) $(CXXFLAGS) -o $@ -c $<

# Rule to remove all the object files.
clean:
	@rm -f $(OBJS)

# Rule to remove everything that has been created by the makefile.
fclean: clean
	@rm -f $(NAME)

# Rule to re-make everything.
re:     fclean all

# Makes sure that gnu make will still run even if files called
# clean / fclean / all and re already exist in the directory
.PHONY: all clean fclean format re
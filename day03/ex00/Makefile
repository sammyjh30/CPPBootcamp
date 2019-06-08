# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shillebr <shillebr@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/07 13:16:57 by shillebr          #+#    #+#              #
#    Updated: 2019/06/08 18:20:26 by shillebr         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Name of the program.
NAME     := claptrap

# Sources and objects.
SRCS     := FragTrap.cpp main.cpp
HDRS     := FragTrap.hpp
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
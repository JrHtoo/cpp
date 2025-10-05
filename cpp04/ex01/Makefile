# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/19 19:21:21 by juhtoo-h          #+#    #+#              #
#    Updated: 2025/10/04 19:40:13 by juhtoo-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98 -pedantic
FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJFILES = $(FILES:.cpp=.o)

NAME = I_dont_want_to_set_the_world_on_fire

all: $(NAME)

$(NAME): $(OBJFILES)
	@$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME)
	@echo "Finished compling!"

%.o: %.cpp
	@echo "Compling $<"
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean: 
	@rm -f $(OBJFILES)
	@echo "Removed $(OBJFILES)"

fclean: clean
	@rm -f $(NAME)
	@echo "Removed $(NAME)"

re: fclean all

.PHONY: al clean fclean re

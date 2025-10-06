# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/03 11:18:30 by juhtoo-h          #+#    #+#              #
#    Updated: 2025/10/05 13:32:27 by juhtoo-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = ClapTrap.cpp main.cpp ScavTrap.cpp

OBJFILES = $(FILES:.cpp=.o)

NAME = Serena_my_love

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

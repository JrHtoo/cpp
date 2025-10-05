# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juhtoo-h <juhtoo-h@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/11 23:22:49 by juhtoo-h          #+#    #+#              #
#    Updated: 2025/10/04 20:32:22 by juhtoo-h         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

C++ = c++
C++_FLAGS = -Wall -Wextra -Werror -std=c++98
FILES = main.cpp

OBJFILES = $(FILES:.cpp=.o)

NAME = hi_this_is_brain

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

C++ = c++
C++_FLAGS = -Wall -Werror -Wextra -std=c++98
FILES = main.cpp

OBJFILES = $(FILES:.cpp=.o)

NAME = whatever

$(NAME): $(OBJFILES)
	@$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME)
	@echo "Finished compiling!"

%.o: %.cpp
	@echo "Compiling $<"
	@$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	@rm -f $(OBJFILES)
	@echo "Removed $(OBJFILES)"

fclean: clean
		@rm -f $(NAME)
		@echo "Removed $(NAME)"

re: fclean all

.PHONY: all clean fclean re

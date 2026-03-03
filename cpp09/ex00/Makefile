C++ = c++
C++_FLAGS = -Wall -Werror -Wextra -std=c++98

FILES = main.cpp BitcoinExchange.cpp
OBJFILES = $(FILES:.cpp=.o)

NAME = btc

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

.PHONY: all clean fclean re
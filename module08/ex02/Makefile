NAME	= stack

SRC		= main.cpp

GO		= clang++ -Werror -Wextra -Wall -std=c++98

all: $(NAME)

$(NAME) : $(SRC)
	@$(GO) -o $(NAME) $(SRC)

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: re fclean clean all

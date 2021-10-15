NAME		= 	Zombie

SRCS 		=	main.cpp Zombie.cpp ZombieHorde.cpp

GO			=	clang++ -Wall -Wextra -Werror #-fsanitize=address -g3

all:	$(NAME)

$(NAME): $(SRCS)
		@$(GO) -o $(NAME) $(SRCS)

clean:
	@rm -rf $(SRCS)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

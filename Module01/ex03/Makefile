NAME		= 	Human

SRCS 		=	main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

GO			=	clang++ -Wall -Wextra -Werror #-fsanitize=address -g3

all:	$(NAME)

$(NAME): $(SRCS)
		@$(GO) -o $(NAME) $(SRCS)

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

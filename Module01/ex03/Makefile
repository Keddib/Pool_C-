NAME		= 	Human

SRCS 		=	main.cpp HumanA.cpp Weapon.cpp HumanB.cpp

OBJ			=	main.o HumanA.o Weapon.o HumanB.o

GO			=	clang++ -Wall -Wextra -Werror #-fsanitize=address -g3

all:	$(NAME)

$(NAME): $(SRCS)
		@$(GO) -c $(SRCS)
		@$(GO) -o $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

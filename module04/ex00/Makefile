NAME		= 	Poly

SRCS 		=	main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

GO			=	clang++ -std=c++98 -Wall -Wextra -Werror #-fsanitize=address -g3

all:	$(NAME)

$(NAME): $(SRCS)
		@$(GO) -o $(NAME) $(SRCS)

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

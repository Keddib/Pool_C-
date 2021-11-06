NAME		= 	all.exe

SRCS 		=	main.cpp AMateria.cpp Character.cpp Ice.cpp\
				Cure.cpp MateriaSource.cpp

GO			=	clang++ -std=c++98 -Wall -Wextra -Werror -g #-fsanitize=address -g3

all:	$(NAME)

$(NAME): $(SRCS)
		@$(GO) -o $(NAME) $(SRCS)

clean:

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: clean fclean re all

#makefile
NAME = bureaucrat

SRC = Bureaucrat.cpp main.cpp

GO = clang++ -Wextra -Werror -Wall -std=c++98

all: ${NAME}

${NAME} : ${SRC}
	@${GO} -o ${NAME} ${SRC}

clean:

fclean:	clean
	@rm ${NAME}

re: fclean all

.PHONY: clean fclean all re

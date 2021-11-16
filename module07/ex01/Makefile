NAME = iter

SRC = main.cpp

GO = clang++ -Wextra -Werror -Wall -std=c++98

all: ${NAME}

${NAME} : ${SRC}
	@${GO} -o ${NAME} ${SRC}

clean:

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean re all

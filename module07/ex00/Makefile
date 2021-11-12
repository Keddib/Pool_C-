NAME = temp1

SRC = main.cpp

GO = lang++ -Wextra -Werror -Wall -std=c++98

all: ${NAME}

${NAME} : ${SRC}
	@${GO} -o ${NAME} ${SRC}

clean:

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean re all

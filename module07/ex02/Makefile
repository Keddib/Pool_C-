NAME	= array

SRCS		= main.cpp

GO		= clang++ -Wall -Wextra -Werror -fsanitize=address -g

all: ${NAME}

${NAME} : ${SRCS}
	@${GO} -o ${NAME} ${SRCS}

clean:

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean all re

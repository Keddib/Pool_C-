NAME	= static

SRCS	= main.cpp #....

GO		= clang++ -Wextra -Werror -Wall

all: ${NAME}

${NAME} : ${SRCS}
	@ ${GO} -o ${NAME} ${SRCS}

clean:

fclean: clean

re: fclean all

.PHONY: clean fclean re all

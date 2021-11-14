NAME	= dynamic

SRCS	= main.cpp identifyType.cpp #....

GO		= clang++ -Wextra -Werror -Wall

all: ${NAME}

${NAME} : ${SRCS}
	@ ${GO} -o ${NAME} ${SRCS}

clean:

fclean: clean

re: fclean all

.PHONY: clean fclean re all

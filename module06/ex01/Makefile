NAME	= reinterpret

SRCS	= main.cpp serialize.cpp#....

GO		= clang++ -Wextra -Werror -Wall

all: ${NAME}

${NAME} : ${SRCS}
	@ ${GO} -o ${NAME} ${SRCS}

clean:

fclean: clean
	@rm -rf ${NAME}

re: fclean all

.PHONY: clean fclean re all

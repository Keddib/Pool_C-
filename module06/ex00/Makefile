NAME	= static

SRCS	= main.cpp convert.cpp#....

GO		= clang++ -Wextra -Werror -Wall

all: ${NAME}

${NAME} : ${SRCS}
	@ ${GO} -o ${NAME} ${SRCS}

clean:

fclean: clean
	@rm -rf ${NAME}
re: fclean all

.PHONY: clean fclean re all

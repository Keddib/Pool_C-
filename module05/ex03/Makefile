#makefile
NAME = excuteForm

SRC = Bureaucrat.cpp main.cpp Form.cpp ShrubberyCreationForm.cpp \
	  RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

GO = clang++ -Wextra -Werror -Wall -std=c++98

all: ${NAME}

${NAME} : ${SRC}
	@${GO} -o ${NAME} ${SRC}

clean:

fclean:	clean
	@rm -rf ${NAME} Home

re: fclean all

.PHONY: clean fclean all re

NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Form.cpp Bureaucrat.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

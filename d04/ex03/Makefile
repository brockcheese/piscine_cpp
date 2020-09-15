NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Character.cpp MateriaSource.cpp Cure.cpp Ice.cpp AMateria.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

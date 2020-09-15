NAME = frags

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

NAME = frags

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra NinjaTrap.cpp SuperTrap.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

NAME = frags

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra NinjaTrap.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

NAME = weapontime

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra HumanA.cpp HumanB.cpp Weapon.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

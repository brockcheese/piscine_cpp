NAME = zombietime

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra Zombie.cpp ZombieHorde.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

NAME = frags

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra FragTrap.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

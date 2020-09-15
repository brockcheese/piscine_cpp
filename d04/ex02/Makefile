NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra AssaultTerminator.cpp TacticalMarine.cpp Squad.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

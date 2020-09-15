NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Victim.cpp Sorcerer.cpp Peon.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

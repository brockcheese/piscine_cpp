NAME = ponytime

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra Pony.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

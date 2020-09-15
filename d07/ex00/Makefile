NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra whatever.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

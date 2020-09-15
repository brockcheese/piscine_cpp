NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Fixed.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

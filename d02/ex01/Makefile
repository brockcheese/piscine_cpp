NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra Fixed.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

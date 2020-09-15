NAME = ex01

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra span.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

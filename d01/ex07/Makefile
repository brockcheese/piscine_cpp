NAME = sed

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

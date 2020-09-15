NAME = ex02

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra mutantstack.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

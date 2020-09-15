NAME = convert

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Base.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

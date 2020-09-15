NAME = loggs

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra Logger.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

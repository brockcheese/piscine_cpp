NAME = braintime

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra Brain.cpp Human.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

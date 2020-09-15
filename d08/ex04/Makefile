NAME = ex04

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Num.cpp Op.cpp Token.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

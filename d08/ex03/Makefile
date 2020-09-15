NAME = ex03

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Comma.cpp Dpleft.cpp Dpright.cpp Increment.cpp Output.cpp Decrement.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

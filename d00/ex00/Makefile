NAME = megaphone

all: $(NAME)

$(NAME):
		@clang++ -std=c++2a -Wall -Werror -Wextra megaphone.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all
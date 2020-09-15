NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra MiningBarge.cpp KoalaSteroid.cpp AsteroKreog.cpp StripMiner.cpp DeepCoreMiner.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

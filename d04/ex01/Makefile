NAME = a.out

all: $(NAME)

$(NAME):
		@clang++ -Wall -Werror -Wextra Enemy.cpp SuperMutant.cpp RadScorpion.cpp Character.cpp PowerFist.cpp PlasmaRifle.cpp AWeapon.cpp main.cpp -o $(NAME)

fclean:
		@/bin/rm -f $(NAME)

re: fclean all

#include "FragTrap.hpp"

int main() {
	FragTrap a("Brock");

	a.takeDamage(50);
	a.beRepaired(3);
	FragTrap b = a;
	b.rangedAttack("you the reader");
	b.meleeAttack("the president");
	b.vaulthunter_dot_exe("itself");
	b.takeDamage(200);
	b.beRepaired(200);
}

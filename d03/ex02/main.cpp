#include "ScavTrap.hpp"

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

	ScavTrap c("Bill");

	c.takeDamage(50);
	c.beRepaired(3);
	ScavTrap d = c;
	d.rangedAttack("you the reader");
	d.meleeAttack("the president");
	d.challengeNewcomer("itself");
	d.takeDamage(200);
	d.beRepaired(200);
}

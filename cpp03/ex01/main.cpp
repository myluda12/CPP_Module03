#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap a;
	ScavTrap b("John");

	a = b;
	std::cout << a.getName() << std::endl;

	a.takeDamage(70);
	a.beRepaired(20);

	a.attack("TARGET");
	b.attack("Enemy");

	a.guardGate();
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	
	return 0;
}

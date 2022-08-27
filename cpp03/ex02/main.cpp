#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap a;
	FragTrap b("John");

	a = b;
	std::cout << a.getName() << std::endl;

	a.takeDamage(70);
	a.beRepaired(20);

	a.attack("TARGET");
	b.attack("Enemy");
	a.highFivesGuys();
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	return 0;
}

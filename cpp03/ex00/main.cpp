#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("HAAMID");
	
	ClapTrap b(a);


	ClapTrap c("NIZAR");
	
	std::cout << "-- Member functions --\n";
	
	a.attack("ANAS");
	
	a.takeDamage(5);
	a.beRepaired(30);
	a.getEnergyP();
	
	std::cout << "-- -------------------- --\n\n";
	std::cout << "-- Copy Assignment Operator --\n";
	
	b = a;
	
	std::cout << "-- -------------------- --\n\n";
	
	std::cout << "-- ostream overloading --\n";

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	std::cout << "-- -------------------- --\n\n";


	return 0;
}
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Def Construcctor called" << std::endl;
}

FragTrap::FragTrap( const FragTrap & src ) : ClapTrap(src)
{
    std::cout << "FragTrap Copy Constructor called" << std::endl;
    *this = src;
}

FragTrap::FragTrap(std::string const &Name) : ClapTrap(Name)
{
    this->Hitpoints = 100;
    this->EnergyP = 50;
    this->Adammage = 20;
}

void FragTrap::attack(std::string const & target)
{
     std::cout << "FragTrap " << Name << " attacks " << target << " , causing " << Adammage << " point of damage!" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called " << std::endl;
}


FragTrap &				FragTrap::operator=( FragTrap const & rhs )
{
	if ( this != &rhs )
	{
		std::cout << "FragTrap Assignement called" << std::endl;
        Hitpoints = rhs.Hitpoints;
        Adammage = rhs.Adammage;
        EnergyP = rhs.EnergyP;
	}
	return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "high five :)" << std::endl;
}
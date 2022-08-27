#include "ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "Def Construcctor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap & src ) : ClapTrap(src)
{
    std::cout << "ScavTRap Copy Constructor called" << std::endl;
    *this = src;
}

ScavTrap::ScavTrap(std::string const &Name) : ClapTrap(Name)
{
    this->Hitpoints = 100;
    this->EnergyP = 50;
    this->Adammage = 20;
}

void ScavTrap::attack(std::string const & target)
{
     std::cout << "ScavTrap " << Name << " attacks " << target << " , causing " << Adammage << " point of damage!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavTRap Destructor called " << std::endl;
}


ScavTrap &				ScavTrap::operator=( ScavTrap const & rhs )
{
	if ( this != &rhs )
	{
		std::cout << "ScavTrap Assignement called" << std::endl;
        Hitpoints = rhs.Hitpoints;
        Adammage = rhs.Adammage;
        EnergyP = rhs.EnergyP;
	}
	return *this;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap enter mode : Gate Keeper" << std::endl;
}
// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i )
// {
// 	//o << "Value = " << i.getValue();
// 	return o;
// }

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("") , Hitpoints(10) , EnergyP(10) , Adammage(0)
{
    std::cout << "Def Constructor Called" << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : Name(Name) , Hitpoints(10) , EnergyP(10), Adammage(0)
{
    std::cout << "Constructor Param CAlled" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap & src )
{
    std::cout << "Copy Constructor called" << std::endl;
    *this = src;
}

void ClapTrap::attack(std::string const & target)
{
    std::cout << "ClapTrap " << Name << " attacks " << target << " , causing " << Adammage << " point of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " take dammage amount : " << amount << std::endl;
    EnergyP = EnergyP - amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << Name << " is repaired by : " << amount << std::endl;
    EnergyP = EnergyP + amount;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor Called" << std::endl;
}

std::string ClapTrap::getName() const
{
    return Name;
}
int ClapTrap::getAdammage() const
{
    return Adammage;
}
int ClapTrap::getEnergyP() const
{
    return EnergyP;
}
int ClapTrap::getHitpoints() const
{
    return Hitpoints;
}


ClapTrap &				ClapTrap::operator=( ClapTrap const & rhs )
{
    Name = rhs.Name;
    Adammage = rhs.Adammage;
    EnergyP = rhs.EnergyP;
    Hitpoints = rhs.Hitpoints;
	return *this;
}

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i )
{
	o << i.getName() << " has " << i.getHitpoints() << " hit points, and " << i.getAdammage() << " attack damage and , " << i.getEnergyP() << " energy point " << std::endl;
	return o;
}
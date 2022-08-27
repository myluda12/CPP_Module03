#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{

	public:

		ClapTrap();
        ClapTrap(std::string);
		ClapTrap( ClapTrap const & src );
		~ClapTrap();


        void attack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        std::string getName() const;
        int getHitpoints() const;
        int getEnergyP() const;
        int getAdammage() const;
		ClapTrap &		operator=( ClapTrap const &);

	private:
        std::string Name;
        int Hitpoints;
        int EnergyP;
        int Adammage;

};

std::ostream &			operator<<( std::ostream & o, ClapTrap const & i );

#endif
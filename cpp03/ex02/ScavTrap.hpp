#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class ScavTrap : public ClapTrap
{

	public:

		ScavTrap();
		ScavTrap( ScavTrap const & src );
        ScavTrap(std::string const & Name);
		~ScavTrap();

        void attack(std::string const &);
        void guardGate();
		ScavTrap &		operator=( ScavTrap const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, ScavTrap const & i );

#endif /* ******************************************************** SCAVTRAP_H */
#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP


# include "ClapTrap.hpp"
# include <iostream>
# include <string>

class FragTrap : public ClapTrap
{

	public:

		FragTrap();
		FragTrap( FragTrap const & src );
        FragTrap(std::string const & Name);
		~FragTrap();

        void attack(std::string const &);
        void highFivesGuys(void);
		FragTrap &		operator=( FragTrap const & rhs );

	private:

};

// std::ostream &			operator<<( std::ostream & o, FragTrap const & i );

#endif 
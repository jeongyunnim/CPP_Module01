#include "Zombie.hpp"

Zombie::Zombie(void)
	: name("* NONE *")
{
}

Zombie::Zombie( std::string zombieName )
{
	name = zombieName;
}

Zombie::~Zombie(void)
{
	std::cout << "Named \"" << getName() << "\" Zombie is gone. Good bye." << std::endl;
}

void	Zombie::announce( void )
{
	std::cout << getName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(const std::string& zombieName )
{
	name.clear();
	name = zombieName;
}

std::string	Zombie::getName( void ) const
{
	return (name);
}
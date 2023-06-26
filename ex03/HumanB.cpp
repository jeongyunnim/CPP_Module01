#include "HumanB.hpp"

Weapon	*HumanB::getWeapon( void ) const
{
	return (weapon);
}

std::string	HumanB::getName( void ) const
{
	return (name);
}

void    HumanB::setWeapon( Weapon& newWeapon )
{
	weapon = &newWeapon;
}

void	HumanB::setName( const std::string& newName )
{
	name = newName;
}

HumanB::HumanB(void)
	:	weapon(NULL)
	,	name("* NONE *")
{
}


HumanB::HumanB(std::string newName)
{
	name = newName;
}

HumanB::~HumanB(void)
{
}

void    HumanB::attack( void )
{
	if (weapon == NULL)
	{
		std::cerr << "Error\nThere is NO weapon" << std::endl;
		return ;
	}
	std::cout << getName() << " attacks with their " << weapon->getType() << std::endl;
}

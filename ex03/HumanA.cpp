#include "HumanA.hpp"

Weapon	HumanA::getWeapon( void ) const
{
	return (weapon);
}

std::string	HumanA::getName( void ) const
{
	return (name);
}

void    HumanA::setWeapon(const Weapon& newWeapon )
{
	weapon = newWeapon;
}

void	HumanA::setName( const std::string& newName )
{
	name = newName;
}

HumanA::HumanA(std::string newName, Weapon& newWeapon)
	:	weapon(newWeapon)
{
	setName(newName);
}

HumanA::~HumanA(void)
{
}

void    HumanA::attack( void )
{
	std::cout << getName() << " attacks with their " << weapon.getType() << std::endl;
}

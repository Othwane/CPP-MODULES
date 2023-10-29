#ifndef HUMANB_H
#define HUMANB_H

#include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	Weapon* weapon;
public:
	HumanB(std::string name_);
	void	setWeapon(Weapon& weapon_);
	void	attack();
	~HumanB();
};

#endif

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string type_);
	const std::string &getType();
	void	setType(std::string type_);
	~Weapon();
};

#endif

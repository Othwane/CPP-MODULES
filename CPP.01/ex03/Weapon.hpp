#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	~Weapon();
	const std::string &getType();
};

Weapon::Weapon(/* args */)
{
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType(){
	return 0;
}


#endif

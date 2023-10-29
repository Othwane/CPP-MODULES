#include "HumanB.hpp"

HumanB::HumanB(std::string name_){
	this->name = name_;
}

void	HumanB::setWeapon(Weapon& weapon_){
	this->weapon = &weapon_;
}

void	HumanB::attack(){
	std::cout << name << ": attacks with their " << this->weapon->getType() <<  std::endl;
}

HumanB::~HumanB(){
}

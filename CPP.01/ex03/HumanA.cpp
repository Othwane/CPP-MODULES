#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon_): name(name_), weapon(weapon_){

}

void	HumanA::attack(){
	std::cout << name << ": attacks with their " << this->weapon.getType() <<  std::endl;
}

HumanA::~HumanA()
{
}

#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << name << ": IS DEAD." << std::endl;
}

void Zombie::set_name(std::string _name){
	name = _name;
}

void	Zombie::announce(){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." <<  std::endl;
}

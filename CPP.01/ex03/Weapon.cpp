#include "Weapon.hpp"

Weapon::Weapon(std::string type_){
	type = type_;
}

const std::string &Weapon::getType(){
	return this->type;
}

void	Weapon::setType(std::string type_){
	this->type = type_;
}

Weapon::~Weapon(){

}

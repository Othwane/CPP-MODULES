#include "contact.hpp"

Contact::Contact(){
	return;
}

Contact::~Contact(){
	return;
}

void	Contact::set_(int sign, std::string *info){
	if (sign == 0)
		this->first_name = *info;
	if (sign == 1)
		this->last_name = *info;
	if (sign == 2)
		this->nick_name = *info;
	if (sign == 3)
		this->phone_nunber = *info;
	if (sign == 4)
		this->darkest_secret = *info;
}

void	Contact::get_(){
		std::cout << this->first_name << std::endl;
		std::cout << this->last_name << std::endl;
		std::cout << this->nick_name << std::endl;
		std::cout << this->phone_nunber << std::endl;
		std::cout << this->darkest_secret << std::endl;


}

void	Contact::del_(int count){
	if (count == 0)
		this->first_name.clear();
	if (count == 1)
		this->last_name.clear();
	if (count == 2)
		this->nick_name.clear();
	if (count == 3)
		this->phone_nunber.clear();
	if (count == 4)
		this->darkest_secret.clear();
}

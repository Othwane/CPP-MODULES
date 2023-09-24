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

std::string	Contact::get_(int sign){
	if (sign == 0)
		return this->first_name;
	if (sign == 1)
		return this->last_name;
	if (sign == 2)
		return this->nick_name;
	if (sign == 3)
		return this->phone_nunber;
	if (sign == 4)
		return this->darkest_secret;
	return NULL;
}

int	Contact::how_many_spaces_nedded(int sign){
	if (sign == 0){
		if (this->first_name.length() > 10)
			return -1;
		else
			return 11 - this->first_name.length();
	}
	if (sign == 1){
		if (this->last_name.length() > 10)
			return -1;
		else
			return 11 - this->last_name.length();
	}
	if (sign == 2){
		if (this->nick_name.length() > 10)
			return -1;
		else
			return 11 - this->nick_name.length();
	}
	if (sign == 3){
		if (this->phone_nunber.length() > 10)
			return -1;
		else
			return 11 - this->phone_nunber.length();
	}
	if (sign == 4){
		if (this->darkest_secret.length() > 10)
			return -1;
		else
			return 11 - this->darkest_secret.length();
	}
	return 0;
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

#include "Harl.hpp"


Harl::Harl(){
	memfunc[0] = &Harl::debug;
	memfunc[1] = &Harl::info;
	memfunc[2] = &Harl::warning;
	memfunc[3] = &Harl::error;
}

void	Harl::debug(void){
	std::cout << "[DEBUG]" <<std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info(void){
	std::cout << "[INFO]" <<std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void){
	std::cout << "[WARNING]" <<std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void){
	std::cout << "[ERROR]" <<std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

Harl::~Harl(){
}

void	Harl::complain(std::string level){
	std::string levels[] = {"DEBUG", "INFO" , "WARNING" ,"ERROR"};
	size_t i = 0;
	for (i = 0; i < 4; i++)
	{
		if (levels[i] == level){
			switch (i)
			{
			case 0:
				(this->*memfunc[0])();
			case 1:
				(this->*memfunc[1])();
			case 2:
				(this->*memfunc[2])();
			case 3:
				(this->*memfunc[3])();
				break;
			default:
				break;
			}
			break;
		}
		else if (i == 3){
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}


#include "phonebook.hpp"
#include "contact.hpp"

int main(){
	Phonebook phonebook;
	std::string buff;
	do
	{
		std::cout <<"PLEASE ENTER :   ADD , SEARCH  OR  EXIT !" << std::endl;
		std::cin >> buff;
		if (buff.compare("ADD") == 0 || buff.compare("add") == 0)
			phonebook.add_();
		else if (buff.compare("SEARCH") == 0 || buff.compare("search") == 0)
			std::cout << "OrTHIS" << std::endl;
		else if (buff.compare("EXIT") == 0 || buff.compare("exit") == 0)
			break;
		else
			std::cout << "COMMAND NOT FOUND" << std::endl;
	} while (buff.compare("EXIT") != 0 && buff.compare("exit") != 0);
	std::cout << "Phonebook Closed." << std::endl;
	return(EXIT_SUCCESS);
}

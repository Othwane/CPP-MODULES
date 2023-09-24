
#include "phonebook.hpp"
#include "contact.hpp"

int main(){
	Phonebook phonebook;
	std::string buff;
	do
	{
		std::cout <<"PLEASE ENTER :   ADD , SEARCH  OR  EXIT !" << std::endl;
		std::getline(std::cin, buff);
		if (std::cin.eof()){
			return EXIT_FAILURE;
		}
		if (buff == "ADD" || buff == "add")
			phonebook.add_();
		else if (buff == "SEARCH" || buff == "search")
			phonebook.search_();
		else if (buff == "EXIT" || buff == "exit")
			break;
		else if (buff.empty())
			std::cout << "COMMAND NOT FOUND." << std::endl;
	} while (buff != "EXIT" && buff != "exit");
	std::cout << "Phonebook Closed." << std::endl;
	return(EXIT_SUCCESS);
}

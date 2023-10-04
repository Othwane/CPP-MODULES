#include <iostream>

int main(){
	std::string var = "HI THIS IS BRAIN";
	std::string *stringPTR = &var;
	std::string &stringREF = var;

	std::cout << "VAR ADDRESS: " << &var << std::endl;
	std::cout << "POINTER ADDRESS: " << stringPTR << std::endl;
	std::cout << "REFFERENCE ADDRESS: " << &stringREF << std::endl;

	std::cout << "POINTER VALUE: " << *stringPTR << std::endl;
	std::cout << "REFFERENCE VALUE: " << stringREF << std::endl;
	return 0;
}

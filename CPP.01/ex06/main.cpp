#include "Harl.hpp"

int main(int argc, char* argv[]){
	(void)argv;
	if (argc != 2){
		std::cout << " INVALID ARGUMENT" << std::endl;
	}
	else {
	Harl harl;
	harl.complain(argv[1]);
	}
}

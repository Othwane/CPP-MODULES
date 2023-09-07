#include <iostream>

int main(int argc, char** argv){
	if(argc > 1)
	{
		int i = 1;
		while (argv[i]){
			int ii = 0;
			while (argv[i][ii]){
				char x = toupper(argv[i][ii]);
				std::cout << x;
				ii++;
			}
			if (i < argc - 1)
				std::cout << " ";
			i++;
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return(EXIT_SUCCESS);
}

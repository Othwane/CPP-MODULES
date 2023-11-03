#include "Replace.hpp"

int main(int argc, char **argv){
	if (argc != 4){
		std::cerr << "SOMTHING WENT WRONG" << std::endl;
		exit (EXIT_FAILURE);
	}
	Replace replace_(argv[1], argv[2], argv[3]);
	while (1)
	{
		if (!getline(replace_.file_in, replace_.buff, '\0'))
			break;
		replace_.rep_(replace_.buff);
		// replace_.buff.clear();
	}
	return 0;
}

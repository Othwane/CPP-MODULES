#ifndef REPLACE__HPP
#define REPLACE__HPP

#include <iostream>
#include <fstream>

class Replace
{
public:
	std::ifstream file_in;
	std::ofstream file_out;
	std::string lookin_for;
	std::string replaced_by;
	std::string buff;
	Replace(std::string file_name, std::string l_for, std::string r_by);
	void rep_(std::string &buff_);
	~Replace();
};

#endif

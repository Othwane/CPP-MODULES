#include "Replace.hpp"

Replace::Replace(std::string file_name, std::string l_for, std::string r_by) : file_in(file_name), file_out(file_name + ".replace"){
	lookin_for = l_for;
	replaced_by = r_by;
}

void	Replace::rep_(std::string &buff_){
	int fp;
	while ((fp = buff_.find(lookin_for)) != -1)
	{
		buff.erase(fp, lookin_for.length());
		buff.insert(fp, replaced_by);
	}
	file_out << buff;
}

Replace::~Replace(){
}

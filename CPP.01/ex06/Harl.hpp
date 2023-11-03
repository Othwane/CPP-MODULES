#ifndef HARL__HPP
#define HARL__HPP

#include <iostream>

class Harl
{
private:
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	Harl();
	void (Harl::*memfunc[4])();
	void	complain(std::string level);
	~Harl();
};

#endif

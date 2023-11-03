#ifndef HARL__HPP
#define HARL__HPP

#include <iostream>

class Harl
{
private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void (Harl::*memfunc[4])();
public:
	Harl();
	void complain( std::string level );
	~Harl();
};

#endif

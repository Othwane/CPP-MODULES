#include "Point.hpp"

int main( void )
{
	Point	a(1.0, 1.0);
	Point	b(7.0, 1.0);
	Point	c(4.0, 5.0);
	Point	point(3.0, 2.0);
	if (bsp(a, b, c, point) == true)
		std::cout << "POINT INSIDE THE TRIANGLE" << std::endl;
	else
		std::cout << "POINT OUTSIDE THE TRIANGLE" << std::endl;
	return 0;
}

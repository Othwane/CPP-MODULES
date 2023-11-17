#ifndef POINT__HPP
#define POINT__HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
	const Fixed x;
	const Fixed y;
public:
	Point(/* args */);
	Point(const Point& copy);
	Point(float const x_, float const y_);
	Fixed getX()const;
	Fixed getY()const;
	Point &operator=(const Point &);
	~Point();
};

	// std::ostream	&operator<<(std::ostream &_x, Point const point);
	bool bsp(Point const point_i, Point const point_ii, Point const point_iii, Point const point);
#endif

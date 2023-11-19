#include "Point.hpp"

static Fixed area (const Point point_i, const Point point_ii, const Point point_iii)
{
	Fixed	p1 = point_iii.getX() * (point_i.getY() - point_ii.getY());
	Fixed	p2 = point_i.getX() * (point_ii.getY() - point_iii.getY());
	Fixed	p3 = point_ii.getX() * (point_iii.getY() - point_i.getY());
	Fixed	a =  (p1 + p2 + p3) / 2;
	if (a.toFloat() >= 0)
		return (a);
	else
		return (a * -1);
}

bool bsp(Point const point_i, Point const point_ii, Point const point_iii, Point const point)
{
	Fixed fxd, fxd1, fxd2, fxd3;
	bool ret = false;

	fxd = area(point_i, point_ii, point_iii);
	fxd1 = area(point, point_i, point_ii);
	fxd2 = area(point, point_ii, point_iii);
	fxd3 = area(point, point_i, point_iii);

	if ( fxd1 == 0 || fxd2 == 0 || fxd3 == 0)
		ret = false;
	else if ( fxd1 + fxd2 + fxd3 == fxd )
		ret = true;
	return (ret);
}

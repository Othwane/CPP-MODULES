#include "Point.hpp"

Point::Point(): x(0), y(0){
	return ;
}

Point::Point(const Point& copy): x(copy.x), y(copy.y){
	return ;
}

Point::Point(float const x_, float const y_): x(x_), y(y_){
	return ;
}


Fixed Point::getX() const{
	return this->x.toFloat();
}

Fixed Point::getY() const{
	return this->y.toFloat();
}


Point &Point::operator=(const Point &point) {
	(void)point;
	return *this;
}

Point::~Point(){
	return;
}

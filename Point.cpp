#include "Point.h"

Point::Point(int x, int y)
{
	X = x;
	Y = y;
}

int Point::GetX()
{
	return X;
}
int Point::GetY()
{
	return Y;
}
void Point::setX(int x)
{
	X = x;
}
void Point::setY(int y)
{
	Y = y;
}
Point Point::GetPoint()
{
	return Point(X, Y);
}
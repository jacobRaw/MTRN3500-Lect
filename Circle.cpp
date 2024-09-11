#include "Circle.h"

Circle::Circle(Point c, double radius, int r, int g, int b):Radius(radius), Shapes(c, 0.0, r, g, b)
{
}

double Circle::GetRadius()
{
	return Radius;
}

void Circle::setRadius(double radius)
{
	Radius = radius;
}

void Circle::Draw(HDC h)
{
	int X = P.GetX();
	int Y = P.GetY();
	COLORREF NewColor = RGB(R, G, B);
	HPEN hNewPen = CreatePen(PS_SOLID, 2, NewColor);
	Arc(h, X - (int)Radius, Y - (int)Radius, X + (int)Radius, Y + (int)Radius, X - (int)Radius, Y, X - (int)Radius, Y);
}
#pragma once
#include "Shapes.h"

class Circle : public Shapes
{
private:
	double Radius;

public:
	Circle() = default;
	Circle(Point c, double radius, int r, int g, int b);
	double GetRadius();
	void setRadius(double radius);
	void Draw(HDC h);
	virtual ~Circle() {};
};
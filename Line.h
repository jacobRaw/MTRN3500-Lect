#pragma once
#include "Shapes.h"

class Line : public Shapes
{
protected:
	double Length;

public:
	Line() = default;
	Line(Point p, double length, double angle, int r, int g, int b);
	double GetLength();
	double GetAngle();
	Point GetStart();
	Point GetEnd();
	void setStart(Point p);
	void Draw(HDC h);
	virtual ~Line() {};
};
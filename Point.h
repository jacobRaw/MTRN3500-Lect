#pragma once
class Point
{
private:
	int X;
	int Y;

public:
	Point() = default;
	Point(int x, int y);
	int GetX();
	int GetY();
	void setX(int x);
	void setY(int y);
	Point GetPoint();
	~Point() {};
};
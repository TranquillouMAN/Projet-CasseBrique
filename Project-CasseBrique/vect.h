#pragma once
#include <SFML/Graphics.hpp>
using namespace sf;

class Vect2
{
private:
	int _x;
	int _y;
	bool abs;

public:
	Vect2();
	Vect2(bool abs);
	Vect2(int x, int y);
	Vect2(int x, int y, bool abs);
	void setIfOnlyInAbs(bool abs);
	int x();
	int y();

	int norme();
	Vect2 normal();
	void normalize();

	Vector2u getVector2u();
	VideoMode getVideoMode();

	Vect2 operator*(int val);
	Vect2 operator/(int val);
	int operator*(Vect2 otherVect2);
	Vect2 operator+(Vect2 otherVect2);
	Vect2 operator-(Vect2 otherVect2);

	void operator=(Vect2 otherVect2);

	void operator*=(int val);
	void operator/=(int val);
	void operator+=(Vect2 otherVect2);
	void operator-=(Vect2 otherVect2);

private:
	void makeAbsolute();
};
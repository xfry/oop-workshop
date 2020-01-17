#ifndef __RECTANGLE__H__
#define __RECTANGLE__H__

#include "geometry.h"

class Rectangle : public Geometry
{
	~Rectangle();
	int area(void);
};

int Rectangle:area(void)
{
	cout << "Rectangle Area method" << endl;
}

Rectangle::~Rectangle()
{
	cout << "Rectangle has been destroyed" << endl;
}

#endif

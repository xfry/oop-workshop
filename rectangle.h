#ifndef __RECTANGLE__H__
#define __RECTANGLE__H__

#include "geometry.h"

class Rectangle : public Geometry
{
public:
	~Rectangle();
	int area(void);
};

int Rectangle::area(void)
{
	cout << "Rectangle Area method" << endl;
	int w = get_width();
	int h = get_height();

	return (w * h);
}

Rectangle::~Rectangle()
{
	cout << "Rectangle has been destroyed" << endl;
}

#endif

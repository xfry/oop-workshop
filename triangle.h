#ifndef __TRIANGLE__H__
#define __TRIANGLE__H__

#include "geometry.h"

class Triangle : public Geometry
{
	~Triangle();
	int area(void);
};

int Triangle:area(void)
{
	cout << "Triangle Area method" << endl;
	return (width*height / 2);
}

Triangle::~Triangle()
{
	cout << "Triangle has been destroyed" << endl;
}

#endif

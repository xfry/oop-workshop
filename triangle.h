#ifndef __TRIANGLE__H__
#define __TRIANGLE__H__

#include "geometry.h"

class Triangle : public Geometry
{
public:
	~Triangle();
	int area(void);
};

int Triangle::area(void)
{
	cout << "Triangle Area method" << endl;
	int w = get_width();
	int h = get_height();

	return (w*h / 2);
}

Triangle::~Triangle()
{
	cout << "Triangle has been destroyed" << endl;
}

#endif

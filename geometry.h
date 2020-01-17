/**
 * GEOMETRY header
 * description: This header contains the prototypes a blueprints
 * of the class GEOMETRY
 */
#ifndef __GEOMETRY__H__
#define __GEOMETRY__H__
#include <iostream>
using namespace std;

class Geometry
{
private:
	int width;
	int height;
public:
	Geometry();
	~Geometry();
	int area();
};

Geometry::Geometry()
{
	cout << "Base Shape created" << endl;
}

Geometry::~Geometry()
{
	cout << "Base Shape destroyed" << endl;
}

int Geometry::area() {
	cout << "Base class Area \n" << endl;
	return (width * height);
}

#endif

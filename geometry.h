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
	void set_width(int);
	void set_height(int);
	void get_width_and_height(void);
	int get_width(void);
	int get_height(void);

	virtual int area();
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
	cout << "Base class Area" << endl;
	return (width * height);
}

void Geometry::set_width(int w)
{
	width = w;
}
void Geometry::set_height(int h)
{
	height = h;
}

void Geometry::get_width_and_height(void)
{
	cout << "width: " << width
	     << " height: " << height << endl;
}

int Geometry::get_width()
{
	return width;
}

int Geometry::get_height()
{
	return height;
}

#endif

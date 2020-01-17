/**
 * GEOMETRY header
 * description: This header contains the prototypes a blueprints
 * of the class GEOMETRY
 */
#ifndef __GEOMETRY__H__
#define __GEOMETRY__H__

#include <iostream.h>

class Geometry
{
private:
	int width;
	int height;
public:
	Geometry();
	~Geometry();
	int area();
}

#endif

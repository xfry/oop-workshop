#include <iostream>
#include "rectangle.h"
#include "triangle.h"
#include "rombo.h"

int main(void)
{
	Geometry *shape;
	Rectangle rec;
	Triangle triang;
	Rombo romb;

	shape = &rec;
	shape->area();

	shape = &triang;
	shape->area();

	romb.area();

	return (0);
}

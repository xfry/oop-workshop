#include <iostream>
#include "geometry.h"

int main(void)
{
	Geometry rectangle;
	Geometry triangle;

	rectangle.set_width(100);
	rectangle.set_height(100);
	rectangle.get_width_and_height();
	cout << rectangle.area() << endl;

	/** The base class method Area doesn't apply for triangles*/

	/** Here is when inheritance becomes key */

	return (0);
}

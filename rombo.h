#ifndef __ROMBO__H__
#define __ROMBO__H__

#include "triangle.h"
#include "rectangle.h"

using namespace std;

class Rombo : public Triangle, public Rectangle
{
public:
	~Rombo();
};

/**
int Rombo::area()
{
	cout << "Rombo area method" << endl;
	return (0);
}
*/

Rombo::~Rombo()
{
	cout << "Rombo has been destroyed" << endl;
}

#endif

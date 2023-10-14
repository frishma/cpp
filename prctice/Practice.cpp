#include "Practice.h"
int Practice::number=0;
Practice::Practice()
{
	radius=0;
	number++;

}
Practice::Practice(double some)
{
	radius=some;
	number++;
}
void Practice::setRadius(double num)
{
	radius=(num>0)?num:0;
}
double Practice::getRadius()
{
	return radius;
}
double Practice::getArea()
{
	return 3.14*radius;
}
double Practice::add(double mid)
{
	return getArea()*mid;
}
int Practice::getnumber()
{
	return number;
}
Practice::~Practice()
{
number--; 
}

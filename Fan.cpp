#include "Fan.h"
using namespace std;
Fan::Fan()
{
	on=false;
	speed=1;
	radius=5.0;
}
Fan::Fan(bool in,int number,double lon)
{
	on=in;
	speed=number;
	radius=lon;
}
void Fan::On()
{
	on=true;
	
}
void Fan::level(int number)
{
	if(number<=3&&number>=1)
	speed=number;
}
int Fan::getspeed()
{
	return speed;
}
void Fan::value(double lon)
{
	radius=lon;
}
int Fan::getradius()
{
	return radius; 
}


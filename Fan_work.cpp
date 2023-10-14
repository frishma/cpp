 #include<iostream>
#include"Fan.h"
using namespace std;
int main()
{
	Fan fan1;
	fan1.On();
	fan1.level(3);
	fan1.value(10);
   cout<<"The speed of fan1 is "<< fan1.getspeed()<<endl;
   cout<<"The radius of fan1 is "<<fan1.getradius()<<endl;
   Fan fan2;
   fan2.On();
   fan2.level(2);
   fan2.value(10);
   cout<<"The speed of fan2 is "<<fan2.getspeed()<<endl;
   cout<<"The radius of fan2 is "<<fan2.getradius()<<endl;
	return 0;
}

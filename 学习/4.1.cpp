#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double r;
	cout<<"Enter the length from the center to a vertex : ";
	cin>>r;
	double radians = 36.0*M_PI/360;
	double s=2*r*sin(radians);
	 cout<<"The area of the pentagon is "<<5*pow(s,2)/(4*tan(radians));
	 return 0;
}

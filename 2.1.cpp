#include<iostream>
using namespace std;
int main()
{
	double celsius;
	cout<<"Enter celsius"<<endl;
	cin>>celsius;
	double fahrenheit = (double)(9.0 / 5) * celsius + 32;
	cout<<"fahrenheit is "<<fahrenheit<<endl;
	 return 0;
}

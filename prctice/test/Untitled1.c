#include<iostream>
#include<cmath>
using namespace std;
class Practice
{
public:
int radious;
int area;
Practice()
{
	radious=0;
	area=3.14*pow(radious,2);
	}
	Practice(double radious)
	{
		this->radious=radious;
		area=3.14*pow(radious,2);
		}
};
double sum(Practice c[], int size)
{
	double sum=0;
	for(int i=0;i<size;i++)
	{
		sum+=c[i].area;
	}
	return sum;
}
void print(Practice c[],int size)
{
	cout<<setw(35)<<left<<"Radious"<<setw(10)<<"Area"<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<setw(35)<<left<<c[i].radious<<setw(10)<<c[i].area<<endl;
	}

}
int main()
{
	Practice test[]={Practice(1),Practice(2),Practice(3),Practice(4),Practice(5),Practice(6)};
	print(test,6);
	cout<<"---------------------------------"<<endl;
	cout<<setw(35)<<left<<"The total is "<<setw(10)<<sum(Practice test[6],6)<<endl;

	 return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int year;
    int mouth;
	cout <<"Please enter the year: ";
	cin>>year;
	cout <<"Please enter the mouth: ";
	cin>>mouth;
	if(mouth==2)
	{
		if(year%400==0)
		{
			cout<<year<<"  "<<mouth<<"has 29 day"<<endl;
		 } 
		 else
		 cout<<year<<"  "<<mouth<<"has 28 day"<<endl;
	}
	else
	{
		if(mouth==3||mouth==6||mouth==9||mouth==11)
		{
			cout<<year<<"  "<<mouth<<"has 30 day"<<endl;
		}
		else
		{
			cout<<year<<"  "<<mouth<<"has 30 day"<<endl;
		}
	}
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
int average(const int array[] , int size); 
double average(const double array[] , int size); 
int main()
{
	cout<<"Enter 10 numbers"<<endl;
	double arrey[10];
	for(int i=0;i<10;i++)
	{
		cin>>arrey[i];
	}
	int size=0;
	average(arrey,size);
	return 0;
}
int average(const int array[] , int size)
{
	for(int a=0;a<10;a++)
	{
		size=size+array[a]/10;
	}
	cout<<"The average is "<<size;
	return size;
}
double average(const double array[] , int size)
{
	for(int p=0;p<10;p++)
	{
		size=size+array[p]/10;
	}
	cout<<"The average is "<<size;
	return size;
}

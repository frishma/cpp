#include<iostream>

int main()
{
	using namespace std;
	char ch='A';
	
	cout<<ch<<endl;

	cout<<"ch占的字节："<<sizeof(char)<< endl; //进行计算字节 
	cout<<(int)ch<<endl;//用于计算ASCLL编码 a=97   A=65
	return 0;
}

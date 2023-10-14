#include<bits/stdc++.h>
int add(int num1,int num2)
{
	using namespace std;
	int sum=num1+num2;
	return sum;
}

void swap(int num1,int num2,int num3)
{
	using namespace std;
	int t=num1;
	num1=num3;
	num3=num2;
	num2=t;
	cout<<"num1="<<num1<<endl;
	cout<<"num2="<<num2<<endl;
	cout<<"num3="<<num3<<endl;
	return;
}
int main()
{
	using namespace std;
	int n=5;
	int l=8;
	int e=2;
	swap(n,l,e);

	int a=8;
	int b=9;
	int c=add(a,b);
	cout<<"c="<<c<<endl;
	return 0;
}


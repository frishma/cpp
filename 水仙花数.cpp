#include<iostream>
 
using namespace std;
 int main()
 { 
 	int num=100;
 	
 	do
 	{
	int a=0;
 	int b=0;
 	int c=0;
 	
 	a=num%10;
	b=num/10%10;
	c=num/100;
 		

	 if(num==a*a*a+b*b*b+c*c*c)
	{
	
	 cout<<num<<endl;	
	 }
	  num=num+1;
}
while(num<1000);
return 0;
 }

#include<iostream>
int main()
{
	using namespace std;
int a=0;
int b=0;
int c=0;
cout<<"������С��a b c������"<<endl;
cin>>a;
cin>>b;
cin>>c;
if(a>b)
{
	if(a>c)
	{cout<<"С��a����"<<endl; 
	}
	else
	{
		cout<<"С��c����"<<endl; 
	}
 } 
else
{
	if(c>b){
		cout<<"С��c����"<<endl; 
	}
	else
	{cout<<"С��b����"<<endl; 
	}
}

return 	0;
}

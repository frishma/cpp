#include<iostream>
int main()
{
	using namespace std;
int a=0;
int b=0;
int c=0;
cout<<"请输入小猪a b c的体重"<<endl;
cin>>a;
cin>>b;
cin>>c;
if(a>b)
{
	if(a>c)
	{cout<<"小猪a最重"<<endl; 
	}
	else
	{
		cout<<"小猪c最重"<<endl; 
	}
 } 
else
{
	if(c>b){
		cout<<"小猪c最重"<<endl; 
	}
	else
	{cout<<"小猪b最重"<<endl; 
	}
}

return 	0;
}

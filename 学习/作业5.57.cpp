#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0;
	int a=0;
	int num=0;
	int letter=0;
	char sex[1000];
	cin.get(sex,1000);
	a=strlen(sex);
	if(a>8||a<8)
	{
		cout<<"invalid password"<<endl;
		return 0;
	}
	else
	{ 
	for(int b=0;b<8;b++)
	{
	if(sex[b]>='a'&&sex[b]<='z'||sex[b]>='A'&&sex[b]<='Z')
	 {
	 letter++;
	 }
	 else if(sex[b]>='0'&&sex[b]<='9')
	 {
	 	num++;
	 } 
	}
	 
	}
	if(num>=2&&num+letter==8)
	{
		cout<<"valid password"<<endl;
	}
	else
	{
		cout<<"invalid"<<endl;
	}
}

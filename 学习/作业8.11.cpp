#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<cstring>
int translate(int a);
void ding(char number[]);
using namespace std;
int main()
{
	int a;
	cin>>a;
	int b=translate(a);
	char mun[10];
sprintf(mun,"%d",a);
	ding(mun);
	return 0;
}
int translate(int a)
{
	    int yu=0;
	    int i=0;
		while(a!=0)	
		{
		yu=yu+(a%2)*pow(10,i);
		a=a/2;
		i++;
		}
		return yu;
	
}
void ding(char number[])
{
	int m=strlen(number);
	if (m<8)
	{
		for(int i=m;i<8;i++)
		{
			number[i]='0';
		}
		number[8]='\0';
	}
	int u=0;
	char form[3][3];
		for(int y=0;y<3;y++)
		{
			for(int o=0;o<3;o++)
			{
				if(number[u]=='1')
		        {
				form[y][o]='H';
				}
		        else
		        {
				form[y][o]='T';
				}u++;
			}
		}
		for(int q=0;q<3;q++)
		{
			for(int w=0;w<3;w++)
			{
				cout<<form[q][w];
			}
			cout<<endl;
		}
}



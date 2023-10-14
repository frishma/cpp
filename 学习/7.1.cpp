#include<bits/stdc++.h>
using namespace std;
int main()
{
	int number=0;
	cout<<"Enter the number of students: ";
	cin>>number;
	int tal[]={0};
	cout<<"Enter the score of them "<<endl;
	for(int i=0;i<number;i++)
	{
		cout<<i+1<<". ";
		cin>>tal[i];
	}
	int bast;
	for(int a=0;a<number;a++)
	{
		if(tal[a]>bast)
		{
			bast=tal[a];
		}
	}
	string lit;
	for(int b=0;b<number;b++)
	{
		if(tal[b]>=bast-10)
		{lit[b]='A';
			}	
		else if(tal[b]>=bast-20)
	{lit[b]='B';
		}	
		else if(tal[b]>=bast-30)
		{lit[b]='C';
		}
		else if(tal[b]>=bast-40)
		{lit[b]='D';
		}
		else
		{lit[b]='F';
		}
	}
	for(int m=0;m<number;m++)
	{
		cout<<"student "<<m<<" score is "<<lit[m]<<endl;
	}
	
	return 0;
}

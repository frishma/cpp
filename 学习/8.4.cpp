#include<iostream>
using namespace std;
int main()
{
	int table[8][7]={
	{2,4,3,4,5,8,8},
	{7,3,4,3,3,4,4},
	{3,3,4,3,3,2,2},
	{3,4,4,6,3,4,4},
	{3,7,4,8,3,8,4},
    {9,3,4,7,3,4,1},
	{3,5,4,3,6,3,8},
	{6,3,5,9,2,7,9}
	};
	int number[8]={0};
	for(int i=0;i<8;i++)
	{
		for(int l=0;l<7;l++)
		{
			number[i]=number[i]+table[i][l];
		}
	}
	int mid=0;
	int middle[8]={0};
	for(int q=0;q<8;q++)
	{
		middle[q]=number[q];
	}
	for(int a=0;a<8;a++)
	{
	    for(int b=a+1;b<8;b++)
	{
		if(middle[a]<middle[b])
		{
		swap(middle[a],middle[b]);
		}
	}
	}
	for(int t=0;t<8;t++)
	{
		for(int p=0;p<8;p++)
		{
			if(middle[t]==number[p])
			{
				cout<<"worker "<<p<<" time is :"<<middle[t]<<endl;
			}
		}
	}
	for(int m=0;m<8;m++)
	{
		cout<<middle[m]<<endl;
	}
	
	return 0;
}

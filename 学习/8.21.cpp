#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool isConsecutiveFour(int values[] [7]);
int main()
{
	cout<<"Enter rows  : "<<endl;
	int rol;
	cin>>rol;
	int values[rol][7];
	for(int a=0;a<rol;a++)
	{
		for(int b=0;b<7;b++)
		{
			cin>>values[a][b];
		}
	}
	if(isConsecutiveFour(values))
	{
		cout<<"true"<<endl;
	}
	else
	{
		cout<<"false"<<endl;
	}
	return 0;
}
bool isConsecutiveFour(int values[] [7])
{
	int rol=sizeof(values)/sizeof(values[0]);
	for(int i=0;i<rol;i++)
	{
		for(int p=0;p<4;p++)
		{
			if(values[i][p]==values[i][p+1]&&values[i][p+1]==values[i][p+2]&&values[i][p+2]==values[i][p+3])
		{
			return true;
			}
		}
	}
	for(int z=0;z<7;z++)
	{
		for(int x=0;x<rol-3;x++)
		{
			if(values[x][z]==values[x+1][z]&&values[x+1][z]==values[x+2][z]&&values[x+2][z]==values[x+3][z])
			{
				return true;
			}
		}
	}
	for(int c=0;c<rol-3;c++)
	{
		for(int v=0;v<4;v++)
		{
			if(values[c][v]==values[c+1][v+1]&&values[c+1][v+1]==values[c+2][v+2]&&values[c+2][v+2]==values[c+3][v+3])
			{
				return true;
			}
		}
	}
	for(int b=0;b<rol-3;b++)
	{
		for(int n=0;n<4;n++)
		{
			if(values[b][n]==values[b+1][n-1]&&values[b+1][n-1]==values[b+2][n-2]&&values[b+2][n-2]==values[b+3][n-3])
			{
				return true;
			}
		}
	}
	return true;
}

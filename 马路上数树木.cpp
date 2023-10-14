#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	int l=0;
	int m=0;
	int u,v;
	int arr[10000];
	cout<<"请输入马路长"<<endl;
	cin>>l;
	cout<<"请输入有几块区域"<<endl;
	cin>>m;
	for(int i=0;i<=l;i++)
	{
		arr[i]=2;
	 } 
	 for(int a=1;a<=m;a++)
	 {
	 	cout<<"请输入区域起始坐标"<<endl;
		 cin>>u>>v; 
	 	for(int j=u;j<=v;j++)
	 	{
	 		arr[j]=1;
		 }
	 }
	 for(int a=0;a<10000;a++)
	 {
	 	if(arr[a]==2)
	 	{
	 		k++;
		 }
	 }
	 cout<<"还有"<<k<<"棵树"<<endl;
	 return 0; 
}

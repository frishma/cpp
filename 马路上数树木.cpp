#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	int l=0;
	int m=0;
	int u,v;
	int arr[10000];
	cout<<"��������·��"<<endl;
	cin>>l;
	cout<<"�������м�������"<<endl;
	cin>>m;
	for(int i=0;i<=l;i++)
	{
		arr[i]=2;
	 } 
	 for(int a=1;a<=m;a++)
	 {
	 	cout<<"������������ʼ����"<<endl;
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
	 cout<<"����"<<k<<"����"<<endl;
	 return 0; 
}

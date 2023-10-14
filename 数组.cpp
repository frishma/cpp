#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,20,32,33,45};
cout<<"arr占用内存是"<<sizeof(arr)<<endl; 
cout<<"arr中一个占用内存是："<<sizeof(arr[1])<<endl;
cout<<"arr中共有数据为"<<sizeof(arr)/sizeof(arr[1])<<endl; 
	return 0;
}

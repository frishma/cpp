#include<iostream>
using namespace std;
int main()
{
	int arr[5]={10,20,32,33,45};
cout<<"arrռ���ڴ���"<<sizeof(arr)<<endl; 
cout<<"arr��һ��ռ���ڴ��ǣ�"<<sizeof(arr[1])<<endl;
cout<<"arr�й�������Ϊ"<<sizeof(arr)/sizeof(arr[1])<<endl; 
	return 0;
}

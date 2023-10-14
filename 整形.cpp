#include<iostream>

int main()
{
	using namespace std;
	int n_int=INT_MAX;
	short n_short=SHRT_MAX;
	long n_long=LONG_MAX;
	cout<<"short is"<<sizeof(n_short)<<"bytes."<<endl;
	cout<<"int is"<<sizeof(n_int)<<"bytes."<<endl;
	cout<<"long is"<<sizeof(n_long)<<"bytes"<<endl;
	return 0;
}

#include<iostream>
int main()
{
	using namespace std;
	cout<<"请输入对我的评分 满分十分"<<endl;
	int a=0;
	
	cin>>a;
	switch(a)

		{
	case 10: 
	cout<<"我很满意"<<endl;
	break;
	case 9:
		cout<<"就还行吧"<<endl;
		break;
		case 8:
		cout<<"好吧，有点伤心"<<endl;
		break;
		case 7:
		cout<<"过度悲伤"<<endl;
		break;
		default:
		cout<<"你我皆是路人"<<endl;
		break; 
	
	}
	
	
	return 0;
}

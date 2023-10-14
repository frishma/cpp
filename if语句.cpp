#include<iostream>
int main()
{
	using namespace std;
	int score=0;
	cout<<"您对我的好感。（满分一百分）"<<endl;
	cin>>score;
	if(score>99)
	{
		cout<<"Baby I love you"<<endl;

	 } 

else

{	if(score<90 and score>80)
	
	{
		cout<<"我直接绝交"<<endl; 
	}

	else if(score>=90)
		{
			cout<<"真是无语，尽然这么低，终究是错付了"<<endl; 
			
				 
		}
else{

cout<<"可恶，这么低，再给你一次机会"<<endl;}
}

	return 0;
}

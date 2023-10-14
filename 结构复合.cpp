#include<bits/stdc++.h>
using namespace std;
struct son
{
	string name;
	int age;
	string education;
};
struct daught
{
	string name;
	int age;
	string education;
};
struct dad
{
	string name;
	int age;
	string education;
	struct son son1;
	struct daught daught1;
};
int main()
{
	dad ho;
	ho.name="汤姆逊";
	ho.age=46;
	ho .education="中学"; 
	ho.son1.name="杰克";
	ho.son1.age=16;
	ho.son1.education="高学"; 
	ho.daught1.name="如斯";
	ho.daught1.age=19;
	ho.daught1.education="大学"; 
	cout<<"父亲的名字叫"<<ho.name<<" 年龄是"<<ho.age <<" 学历是"<<ho.education <<endl;
	cout<<"儿子的名字叫"<<ho.son1.name <<" 年龄是"<<ho.son1.age <<" 学历是"<<ho.son1.education<<endl;
	 cout<<"女儿的名字叫"<<ho.daught1.name <<" 年龄是"<<ho.daught1.age <<" 学历是"<<ho.daught1.education<<endl;
	return 0; 
}

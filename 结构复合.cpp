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
	ho.name="��ķѷ";
	ho.age=46;
	ho .education="��ѧ"; 
	ho.son1.name="�ܿ�";
	ho.son1.age=16;
	ho.son1.education="��ѧ"; 
	ho.daught1.name="��˹";
	ho.daught1.age=19;
	ho.daught1.education="��ѧ"; 
	cout<<"���׵����ֽ�"<<ho.name<<" ������"<<ho.age <<" ѧ����"<<ho.education <<endl;
	cout<<"���ӵ����ֽ�"<<ho.son1.name <<" ������"<<ho.son1.age <<" ѧ����"<<ho.son1.education<<endl;
	 cout<<"Ů�������ֽ�"<<ho.daught1.name <<" ������"<<ho.daught1.age <<" ѧ����"<<ho.daught1.education<<endl;
	return 0; 
}

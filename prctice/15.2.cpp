#include<iostream>
#include<string>
using namespace std;
class Person
{
	
public:
	string name;
	string address;
	string phoneNumber;
	string e_mail;
	Person()
	{}
	Person(string name)
	{
		this->name = name;
	};
	Person(string name, string address, string phoneNumber, string e_mail)
	{
		this->name = name;
		this->address = address;
		this->phoneNumber = phoneNumber;
		this->e_mail = e_mail;
	}
	virtual void toString()
	{
		cout << "Name is " << name << endl;
		cout << "Class is Person" << endl;
	}
};
class Student :public Person
{
public:
	string Grade;
	Student(string name) :Person(name)
	{
		this->name;
	}
	const void ma(string ms)
	{
		this->Grade = ms;
	}
	void toString()
	{
		cout << "Name is " << name << endl;
		cout << "Class is Student" << endl;
	 }
};
class Employee: public Person
{
public:
	Employee(string name):Person(name)
	{
		this->name = name;
	}
	string office;
	int salary;
	string data;
	void toString()
	{
		cout << "Name is " << name << endl;
		cout << "Class is Employee " << endl;
	}
};
class Faculty :public Employee
{
public:
	Faculty(string name):Employee(name)
	{
		this->name = name;
	}
	string workdata;
	string level;
	void toString()
	{
		cout << "Name is " << name << endl;
		cout << "Class is Faculty" << endl;
	}
};
class Staff : public Employee
{
public:
	
	Staff(string name):Employee(name)
	{
		this->name = name;
	}
	string job;
	void toString() override
	{
		cout << "Name is " << name << endl;
		cout << "Class is Staff" << endl;
	}
};
class MyData
{
public:
	int year;
	int month;
	int day;
};
int main()
{
	Person a("Lihua");
	a.toString();
	Student b("zhangsan");
	b.toString();
	Employee c("lisi");
	c.toString();
	Faculty d("wangwu");
	d.toString();
	Staff e("liuzhng");
	e.toString();
	return 0;
}

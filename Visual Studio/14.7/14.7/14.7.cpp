/*#include<iostream>
#include<string>
#include<sstream>
#include<ctime>
using namespace std;
class Complex
{
public:
	Complex()
	{
		First_number = 0;
		Second_number = 0;
	}
	Complex(double number)
	{
		First_number = number;
		Second_number = 0;
	}
	Complex(double number1, double number2)
	{
		First_number = number1;
		Second_number = number2;
	}
	friend ostream& operator<<(ostream& cout, const Complex& p);
	friend istream& operator>> (istream& cin, Complex& m);
	friend void operator+(Complex& p1, Complex& p2);
	friend void operator-(Complex& p1, Complex& p2);
	friend void operator*(Complex& p1, Complex& p2);
	friend void operator/(Complex& p1, Complex& p2);
	void getRealPart()
	{
		cout << First_number;
	}
	void getImaginaryPart()
	{
		cout << Second_number;
	}

	void operator+=(Complex& p)
	{
		First_number += p.First_number;
		Second_number += p.Second_number;
	}
	void operator-=(Complex& p)
	{
		First_number -= p.First_number;
		Second_number -= p.Second_number;
	}
	void operator*=(Complex& p)
	{
		First_number *= p.First_number;
		Second_number *= p.Second_number;
	}
	void operator/=(Complex& p)
	{
		First_number /= p.First_number;
		Second_number /= p.Second_number;
	}
	double operator[](int dax)
	{
		if (dax == 0)
		{
			return First_number;
		}
		else if (dax == 1)
		{
			return Second_number;
		}


	}
	Complex operator++()
	{
		++First_number;
		++Second_number;
		return *this;
	}
	Complex operator++(int)
	{
		Complex p(*this);
		First_number++;
		Second_number++;
		return p;
	}
	Complex operator--()
	{
		--First_number;
		--Second_number;
		return *this;
	}
	Complex& operator--(int)
	{
		Complex p(*this);
		First_number--;
		Second_number--;
		return p;
	}
	double getmo()
	{
		cout << "|" << First_number << "+" << Second_number << "i" << "|" << "=" << (sqrt(pow(First_number, 2) + pow(Second_number, 2)));
		return (sqrt(pow(First_number, 2) + pow(Second_number, 2)));
	}

private:
	double First_number;
	double Second_number;
};
ostream& operator<< (ostream& cout, const Complex& m)
{
	stringstream ss;
	ss << m.First_number;
	if (m.Second_number != 0)
	{
		ss << "+" << m.Second_number << 'i' << endl;
	}
	cout << ss.str();
	return cout;
}
istream& operator>> (istream& cin, Complex& m)
{
	cout << "Enter the first number:";
	cin >> m.First_number;
	cout << "Enter the second number:";
	cin >> m.Second_number;
	return cin;
}void operator+(Complex& p1, Complex& p2)
{
	double sum1 = p1.First_number + p2.First_number;
	double sum2 = p1.Second_number + p2.Second_number;
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "+" << "(" << p2.First_number << "+" << p2.Second_number <<"I" << ")" << "=" << sum1 << "+" << sum2 << "i" << endl;
	}
	else
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "+" << "(" << p2.First_number << "+" << p2.Second_number <<"I" << ")" << "=" << sum1 << endl;
	}
}
void operator-(Complex& p1, Complex& p2)
{
	double sum1 = p1.First_number - p2.First_number;
	double sum2 = p1.Second_number - p2.Second_number;
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "-" << "(" << p2.First_number << "+" << p2.Second_number <<"i" << ")" << "=" << sum1 << "+" << sum2 << "i" << endl;
	}
	else
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "-" << "(" << p2.First_number << "+" << p2.Second_number <<"i" << ")" << "=" << sum1 << endl;
	}
}
void operator*(Complex& p1, Complex& p2)
{
	double sum1 = p1.First_number * p2.First_number - p1.Second_number * p2.Second_number;
	double sum2 = p1.First_number * p2.Second_number + p1.Second_number * p2.First_number;
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "*" << "(" << p2.First_number << "+" << p2.Second_number <<"I" << ")" << "=" << sum1 << "+" << sum2 << "i" << endl;
	}
	else
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "*" << "(" << p2.First_number << "+" << p2.Second_number <<"I" << ")" << "=" << sum1 << endl;
	}
}
void operator/(Complex& p1, Complex& p2)
{
	double sum1 = (p1.First_number * p2.First_number + p1.Second_number * p2.Second_number) / (pow(p2.First_number, 2) + pow(p2.Second_number, 2));
	double sum2 = (p1.Second_number * p2.First_number - p1.First_number * p2.Second_number) / (pow(p2.First_number, 2) + pow(p2.Second_number, 2));
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "/" << "(" << p2.First_number << "+" << p2.Second_number <<"I" << ")" << "=" << sum1 << "+" << sum2 << "i" << endl;
	}
	else
	{
		cout << "(" << p1.First_number << "+" << p1.Second_number << "i" << ")" << "/" << "(" << p2.First_number << "+" << p2.Second_number <<"I" << ")" << "=" << sum1 << endl;
	}
}
int main()
{
	Complex p1;
	Complex p2;
	cin >> p1 >> p2;
	p1 + p2;
	p1 - p2;
	p1* p2;
	p1 / p2;
	p1.getmo();
	return 0;
}
*/



























#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Animal {
public:
	virtual void makeSound() const = 0; };
class Dog : public Animal {
public:
	void makeSound() const override { 
		cout << "ÕÙÕÙÕÙ£°" << endl;}};
class Cat : public Animal {
public:
	void makeSound() const override { 
		cout << "ﬂ˜ﬂ˜ﬂ˜£°" << endl;}};
vector<Animal*> operator+(vector<Animal*>& vec, Animal* animal) {
	vec.push_back(animal);
	return vec;
}
class Zoo {
private:
	vector<Animal*> animals; 
public:
	friend void addAnimal(Zoo& zoo, Animal* animal); 
	void showAnimals() const { 
		for (auto animal : animals) {
			animal->makeSound();
		}
	}
};
void addAnimal(Zoo& zoo, Animal* animal) {
	zoo.animals + animal; 
}
int main() {
	Zoo zoo;
	addAnimal(zoo, new Dog());
	addAnimal(zoo, new Cat());
	zoo.showAnimals();
	try {
		throw "≤‚ ‘“Ï≥£¥¶¿Ì";
	}
	catch (const char* e) {
		cerr << "≤∂ªÒ“Ï≥££∫" << e << endl;
	}

	return 0;
}
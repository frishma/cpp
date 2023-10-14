#include<iostream>
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
	Complex(double number1,double number2)
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
}
istream& operator>> (istream& cin,Complex& m)
{
	cout << "Enter the RealPart:";
	cin >> m.First_number;
	return cin;
}void operator+(Complex& p1,Complex &p2)
{
	double sum1 = p1.First_number + p2.First_number;
	double sum2 = p1.Second_number + p2.Second_number;
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		ss << "+" << sum2 << 'i' << endl;
	}
	cout << ss.str();
}
void operator-(Complex& p1, Complex& p2)
{
	double sum1 = p1.First_number - p2.First_number;
	double sum2 = p1.Second_number - p2.Second_number;
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		ss << "+" << sum2 << 'i' << endl;
	}
	cout << ss.str();
}
void operator*(Complex& p1, Complex& p2)
{
	double sum1 = p1.First_number * p2.First_number - p1.Second_number * p2.Second_number;
	double sum2 = p1.First_number * p2.Second_number + p1.Second_number * p2.First_number;
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		ss << "+" << sum2 << 'i' << endl;
	}
	cout << ss.str();
}
void operator/(Complex& p1, Complex& p2)
{
	double sum1 = (p1.First_number * p2.First_number +p1.Second_number * p2.Second_number) / (pow(p2.First_number, 2) + pow(p2.Second_number, 2));
	double sum2 = (p1.Second_number * p2.First_number - p1.First_number * p2.Second_number) / (pow(p2.First_number, 2) + pow(p2.Second_number, 2));
	stringstream ss;
	ss << sum1;
	if (sum2 != 0)
	{
		ss << "+" << sum2 << 'i' << endl;
	}
	cout << ss.str();
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


			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			

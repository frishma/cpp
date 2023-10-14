#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;
class HexFormatException :public exception
{
public:
	const char* what() const throw() override
	{
		return "This is not a hexadecimal number";
	}
};
void ifis(char* number)
{
	int sh = sizeof(number);
	bool yes = true;
	for (int i = 0; i < sh; i++)
	{
		if (!isxdigit(number[i]))
		{
			throw HexFormatException();
		}
		else
			yes = true;
	}
	if (yes)
	{
		cout << "This is a hexadecimal number" << endl;
	}
}
int test(char* number)
{
	int sh = sizeof(number);
	bool yes1 = false;
	for (int i = 0; i < sh; i++)
	{
		if (!isxdigit(number[i]))
		{
			throw HexFormatException();
		}
		else
		{
			yes1 = true;
		}
	}
	int sum=0;
	if (yes1)
	{
			sum= stoi(number, nullptr, 16);
    }
	return sum;
}
int main()
{
	char number[100] = {0};
	cout << "Enter a hexadecimal number " << endl;
	cin >> number;
	try
	{
		ifis(number);
			cout << "Converted to Decimal " << test(number) << endl;
	}
	catch (const HexFormatException* ex)
	{
		cout << ex->what() << endl;
	}
	return 0;
}

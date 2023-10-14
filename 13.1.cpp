#include<iostream>
#include<fstream>
#include<ctime>
using namespace std;
int main()
{
	srand(time(0));
	fstream output("Exercise13_1.txt");
	if (!output.fail())
	{
		output.open("Exercise13_1.txt", ios::out | ios::app);
		for (int i = 0; i < 100; i++)
		{
			output << rand() << " ";
		}
	}
	else {
		output.open("Exercise13_1.txt", ios::out);
		for (int i = 0; i < 100; i++)
		{
			output << rand() << " ";
		}

	}
	return 0;
}
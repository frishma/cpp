#include <iostream>

using namespace std;

int sumOfEven(const int* array, int size)
{
    int count = 0;
	int sum = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] % 2 == 0) {
            sum += array[i];
            count++;
        }
    }
    int o= sum / count;
    return o;
}

double sumOfEven(const double* array, int size)
{
    int count = 0;
	double sum = 0;
    for (int i = 0; i < size; i++) {
        if ((int)array[i] % 2 == 0) {
            sum += array[i];
            count++;
        }
    }
    int s=sum / count;
    return s;
}

int main()
{
    const int S = 10;
    double arr[S];
    cout << "Please enter 10 double numbers: ";
    for (int i = 0; i < S; i++) 
	{
        cin >> arr[i];
    }
    double evenAvg = sumOfEven(arr, S);
    cout << "The average of even numbers is " << evenAvg << endl;

    return 0;
}

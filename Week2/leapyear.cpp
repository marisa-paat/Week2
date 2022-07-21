//write code to check if it is currently a leap year
#include <iostream>
using namespace std;

int main() 
{
	int year;
	cout << "Please enter a year: ";
	cin >> year;

	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)) 
	{
		cout << year << " is a leap year!";
	}
	else
	{
		cout << year " is not a leap year.";
	}
	return 0;
}
//Write a program to display all factors of a number provided by the user. Take an input of a positive value and write back all of the values factors.
#include <iostream>
using namespace std;

int main()
{
	int number, i;

	cout << "Please enter a positive number: ";
	cin >> number;

	cout << "Factors of " << number << " are: ";

	for (i = 1; i <= number; i++)
	{
		if (number % i == 0)
		{
			cout << i << ", ";
		}

		return 0;
	}
}
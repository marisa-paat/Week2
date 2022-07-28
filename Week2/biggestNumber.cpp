//Write a program to find and display the biggest number(element) in an array of integers.
#include <iostream>
using namespace std;

int GetMax(int number, int i, float arr[100])
{
	for (i = 0; i < number; ++i)
	{
		if (arr[0] < arr[i])
		{
			//replace with largest number
			arr[0] = arr[i];
		}
	}

	count << "Biggest number is " << arr[0];

}

int main()
{
	int number, i;
	float arr[100];

	cout << "Please enter the amount of numbers to add to array: ";
	cin >> number;
	cout << endl;

	for(i = 0; i < number; ++i)
	{
		cout << "Please enter a number " << i + 1 << " : ";
		cin >> arr[i]
	}

	GetMax();

	return 0;
}
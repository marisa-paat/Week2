//find sum and average of 3 inputs
//output cube of number
#include <iostream>
using namespace std;

float FindCube(float n) 
{
    return n * n * n;
}

int FindSum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}

int FindAverage(int a, int b, int c)
{
    int average = (a + b + c) / 3;
    return average;
}

int main()
{
    float cube;

    int a;
    cout << "Enter number 1 : ";
    cin >> a;

    int b;
    cout << "Enter number 2 : ";
    cin >> b;

    int c;
    cout << "Rnter number 3 : ";
    cin >> c;

    cube = FindCube(a);
    int sum = FindSum(a, b, c);
    int average = FindAverage(a, b, c);

    cout << "Cube of " << a << " is: " << cube << endl;
    cout << "Average = " << average << "and Sum = " << sum << endl;
}

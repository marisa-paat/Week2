//find sum and average of 3 inputs
//output cube of number
#include <iostream>
using namespace std;

float findCube(float n) 
{
    return n * n * n;
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

    cube = findCube(a);

    int sum = a + b + c;
    int average = (a + b + c) / 3;
    cout << "Cube of " << a << " is: " << cube << endl;
    cout << "Average = " << average << "and Sum = " << sum << endl;
}

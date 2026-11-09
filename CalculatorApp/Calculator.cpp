#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
    return num1 + num2;
}

int Subtract(int num1, int num2)
{
    return num1 - num2;
}

int main()
{
    cout << "Addition: " << Add(10, 5) << endl;
    cout << "Subtraction: " << Subtract(10, 5) << endl;

    return 0;
}

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

int Multiply(int num1, int num2)
{
    return num1 * num2;
}

double Divide(double num1, double num2)
{
    if (num2 == 0)
    {
        cout << "Cannot divide by zero." << endl;
        return 0;
    }

    return num1 / num2;
}

int main()
{
    cout << "Addition: " << Add(10, 5) << endl;
    cout << "Subtraction: " << Subtract(10, 5) << endl;
    cout << "Multiplication: " << Multiply(10, 5) << endl;
    cout << "Division: " << Divide(10, 5) << endl;

    return 0;
}


//add sub feature
//bla bla bla
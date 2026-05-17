#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cout << "Enter the First Number: " << endl;
    cin >> a;

    cout << "Enter the Second Number: " << endl;
    cin >> b;


    cout << "Addition: " << a+b << endl;
    cout << "subtraction: " << a-b << endl;
    cout << "Multiplication: " << a*b << endl;
    cout << "Division: " << (float)a/b << endl;
    cout << "Remainder: " << a%b << endl;
    return 0;
}

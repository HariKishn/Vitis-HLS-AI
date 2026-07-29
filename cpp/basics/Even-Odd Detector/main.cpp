#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter any Number: " << endl;
    cin >> num;

    if (num%2==0 && num > 0)
    {
        cout << "The Entered Number is Even and Positive." << endl;
    }else if (num == 0)
    {
        cout << "The Entered Nunber is Zero." << endl;
    }
    else if (num%2==0 && num < 0)
    {
        cout << "The Entered Number is Even and Negative." << endl;
    }
    else
    {
        cout << "The Number is Odd." << endl;
    }

    return 0;
}

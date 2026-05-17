#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    int num ;
    for (int i=0; i<5; i++)
    {
        cin >> num;
        total += num;
    }
    cout << "The Sum is: " << total << endl;
    cout << "The Average is: " << (float)total/5 << endl;
    return 0;
}

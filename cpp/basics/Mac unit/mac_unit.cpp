#include <iostream>
using namespace std;

float mac(float a[], float b[], int n)
{
    float total = 0;
    for(int i=0; i<n; i++)
    {
        total += a[i] * b[i];
        cout << "Step " << i+1 << ": " << total << endl;
    }
    return total;
}

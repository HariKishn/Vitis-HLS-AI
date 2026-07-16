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
int main()
{
    int x;
    cout << "Enter the length of array :" << endl;
    cin >> x;
    float arr1[10]={};
    float arr2[10]={};
    cout << "Enter the Values for A :" << endl;
    for(int i=0; i<x; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the Values for B :" << endl;
    for(int i=0; i<x; i++)
    {
        cin >> arr2[i];
    }
    float m = mac(arr1, arr2, x);
    cout << "The dot Product is :" << m << endl;
    return 0;
}

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
int mac(int a[], int b[], int n)
{
    int total = 0;
    for(int i=0; i<n; i++)
    {
        total += a[i] * b[i];
        cout << "Step " << i+1 << ": " << total << endl;
    }
    return total;
}
int main()
{
    int p;
    cout << "Enter the length of array :" << endl;
    cin >> p;

    float fA[10]={};
    float fB[10]={};
    int iA[10]={};
    int iB[10]={};

    cout << "Enter float Values for A & B :" << endl;
    for(int i=0; i<p; i++)
    {
        cin >> fA[i] >> fB[i];
    }
    cout << "Enter integer Values for A & B :" << endl;
    for(int i=0; i<p; i++)
    {
        cin >> iA[i] >> iB[i];
    }
    float x = mac(fA, fB, p);
    cout << "The float dot Product is :" << x << endl;

    int y = mac(iA, iB, p);
    cout << "The integer dot Product is :" << y << endl;
    return 0;
}

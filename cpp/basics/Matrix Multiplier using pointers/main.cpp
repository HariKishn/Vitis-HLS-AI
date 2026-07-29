#include <iostream>
using namespace std;

void macmul(float *a, float *b, float *c, int rows, int shared, int cols)
{
    float total = 0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            total = 0;
            for(int k=0; k<shared; k++)
            {
                total += a[i*shared+k] * b[k * cols + j];
            }
        c[i * cols + j] = total;
        }
    }
}

int main()
{
    int m,p,n;
    cout << "Enter the Rows of A : " << endl;
    cin >> m;
    cout << "Enter the Shared Dimension : " << endl;
    cin >> p;
    cout << "Enter the Columns of B : " << endl;
    cin >> n;

    float A[100] = {};
    float B[100] = {};
    float C[100] = {};

    cout << "Enter the values for A : " << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
           cin >>  A[i * p + j];
        }
    }
    cout << "Enter the values for B : " << endl;
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<n; j++)
        {
           cin >>  B[i * n + j];
        }
    }
    macmul(A, B, C, m, p, n);
    cout << "The Result Matrix C : " << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << C[i * n + j] << " ";
        }
    cout << endl;
    }
    return 0;
}

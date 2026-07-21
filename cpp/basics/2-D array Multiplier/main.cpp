#include<iostream>
using namespace std;

void macmul(float a[][10], float b[][10], float c[][10], int rows, int shared, int columns)
{
    float total = 0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            total = 0;
            for(int k=0; k<shared; k++)
            {
               total += a[i][k] * b[k][j];
            }
             c[i][j] = total;
        }
    }
    return;
}
int main()
{
    int m;
    int p;
    int n;
    cout << "Enter rows of A :" << endl;
    cin >> m;
    cout << "Enter shared dimension (cols of A = rows of B) : " << endl;
    cin >> p;
    cout << "Enter columns of B:" << endl;
    cin >> n;
    float A[10][10] = {};
    float B[10][10] = {};
    float C[10][10] = {};
    cout << "Enter the values for Matrix A (" << m << "x" << p << ") :" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<p; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the values for matrix B (" << p << "x" << n << ") :" << endl;
    for(int i=0; i<p; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }
    macmul(A, B, C, m, p, n);
    cout << "Result Matrix C (" << m << "x" << n << ") :" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

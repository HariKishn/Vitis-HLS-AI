#include <iostream>
using namespace std;

void macmul(float a[][10], float b[][10], float c[][10], int rows, int columns)
{
    float total = 0;
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            total = 0;
            for(int k=0; k<columns; k++)
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
    int n;
    cout << "Enter the no. of rows :" << endl;
    cin >> m;
    cout << "Enter the no. of columns :" << endl;
    cin >> n;
    float A[10][10] = {};
    float B[10][10] = {};
    float C[10][10] = {};
    cout << "Enter the values for Matrix A :" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Enter the values for matrix B :" << endl;
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> B[i][j];
        }
        cout << endl;
    }
    macmul(A, B, C, m, n);
    cout << "Result Matrix C :" << endl;
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
Explain the code in a very interactive way



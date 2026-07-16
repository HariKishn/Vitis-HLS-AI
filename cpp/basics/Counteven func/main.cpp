#include <iostream>

using namespace std;

int countEven(int arr[],int size)
{
    total = 0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            total ++;
        }
    }
    return total;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int c=countEven(arr,10);
    cout << "the Number of even No. are :" << c << endl;
    return 0;
}

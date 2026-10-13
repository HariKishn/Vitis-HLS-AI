#include <iostream>

using namespace std;

int sum(int arr[], int size)
{
    int total = 0;
    for (int i=0; i<5; i++)
    {
        total += arr[i];
    }
    return total;
}
int findMax(int arr[], int size)
{
    int max = arr[0];
    for (int i=0; i<5; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int array[5] = {42, 7, 93, 15, 56};

    int s = sum(array, 5);
    int m = findMax(array, 5);
    cout << "Sum: " << s << endl;
    cout << "Max: " << m << endl;
    return 0;
}

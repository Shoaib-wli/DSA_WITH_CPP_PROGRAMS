#include <iostream>
using namespace std;

int arrSum(int num[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + num[i];
    }
    return sum;
}

int main()
{
    int size;
    int arr[100];
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Sum of all array element is " << arrSum(arr, size) << endl;
}
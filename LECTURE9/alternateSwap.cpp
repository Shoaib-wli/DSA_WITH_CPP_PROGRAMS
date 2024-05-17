#include<iostream>
using namespace std;
void alternateSwap(int num[], int n)
{
    int i=0;
    int j=1;
    while (i<=n-2 && j<=n-1)
    {
        swap(num[i], num[j]);
        j+=2;
        i+=2;
    }
    
}

void printArry(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
    
}
int main()
{
    int arr[10]={12,3,45,33,1};
    
    alternateSwap(arr,6);
    printArry(arr,6);
}
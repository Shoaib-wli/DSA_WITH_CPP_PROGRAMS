#include<iostream>
using namespace std;

void alternateSwap(int num[], int size)
{
    for (int i = 0; i < size; i+=2)
    {
        if (i+1<size)
        {
            swap(num[i],num[i+1]);
        }
        
    }
    
}

void printArry(int num[], int size)
{
    for (int  i = 0; i < size; i++)
    {
        cout<<num[i]<<" ";
    }
    
}
int main()
{
    int arr[7]={12,2,3,1,5,8,9};
    
    alternateSwap(arr,7);
    printArry(arr,7);


}
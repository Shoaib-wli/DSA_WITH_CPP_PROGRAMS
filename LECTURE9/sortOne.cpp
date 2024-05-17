#include<iostream>
using namespace std;

void printArr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
    
}
void sortOne(int num[], int n)
{
    int i=0;
    int j=n-1;
    while (i<j)
    {
        while (num[i]==0)
        {
            i++;
        }
        while (num[j]==1)
        {
            j--;
        }
        swap(num[i],num[j]);
        i++;
        j--; 
    } 
}

int main()
{
    int arr[10]={1,0,1,1,1,0,0,0,1,1};

    sortOne(arr,10);
    printArr(arr,10);
}
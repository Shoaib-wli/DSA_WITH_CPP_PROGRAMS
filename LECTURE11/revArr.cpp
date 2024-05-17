#include<iostream>
using namespace std;


void revArr(int num[], int n)
{
    
    int i=0;
    int j=n-1;
    while (j>=i)
    {
        swap(num[i],num[j]);
        i++;
        j--;
    }  
}

void printArr(int num[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
    
}
int main()
{
    int arr[6]={1,4,0,5,-2,15};
    int brr[5]={2,6,3,9,4};

    revArr(arr,6);
    revArr(brr,5);

    printArr(arr,6);
    cout<<endl;
    printArr(brr,5);
}
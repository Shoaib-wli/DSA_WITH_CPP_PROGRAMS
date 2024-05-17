#include<iostream>
using namespace std;

// my function
int myfun(int arr[], int n,int k)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<=e)
    {
        if (arr[mid]==k)
        {
            return arr[mid];
        }
        else if (arr[mid]<k)
        {
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
    
}

int main()
{
    int arr[6]={2,4,8,9,10,13};
    cout<<"key value is "<<myfun(arr,5,10);
}
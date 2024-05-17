#include<iostream> 
using namespace std;

int getPivot(int arr[], int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
           s=s+1;

        }
        else
        {
            e=mid;
        }

        mid=s+(e-s)/2;
    }
    return s;
}

int main()
{
    int arr[]={1,4,5,6,8,9};

    cout<<"pivot is"<<getPivot(arr,6);
}
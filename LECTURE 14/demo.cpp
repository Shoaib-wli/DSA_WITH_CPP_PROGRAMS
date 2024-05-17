// function
#include<iostream>
using namespace std;
int myPivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
        
    }
    return s; // return s of e is the in both case
    
}
int main()
{
    int arr[]={7,8,12,13,3,4};
    cout<<"pivot is "<<myPivot(arr,6);
}
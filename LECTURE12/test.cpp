#include<iostream>
using namespace std;
int firstOccurence(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if (arr[s]==key)
        {
            ans=mid;
            e=mid-1;
        }
        else if(key<arr[mid])
        {
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int lastOccurance(int arr[], int n , int key)
{
    int s=0;
    int e=n-1;
    int ans=-1;
    int mid=s+ (e-s)/2;
    while (s<e)
    {
        if(arr[s]==key)
        {
            ans=mid;
            s=mid +1;
        }
        else if (key<arr[mid])
        {
            e=mid-1;

        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        mid=s+(e-s)/2; 
    }
    return ans;
    
}
int main()
{
    int odd[9]={1,3,3,3,3,3,4,4,5};
    int even[7]={1,2,2,2,2,2,4};

    int res=firstOccurence(odd,9,3);
    int res1=firstOccurence(even,7,2);
    cout<<"The indext of 3 at first occurennce is "<<res<<endl;
    cout<<"The indext of 2 at first occurennce is "<<res1<<endl;

    int s=lastOccurance(odd,9,3);
    int t=lastOccurance(even,7,2);
    cout<<"The indext of 3 at last occurennce is "<<s<<endl;
    cout<<"The indext of 2 at last occurennce is "<<t<<endl;
}
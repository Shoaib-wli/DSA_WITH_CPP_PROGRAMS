#include<iostream>
using namespace std;

int binarySearch(int arr[], int key,int n)
{
    int srt=0;
    int end=n-1;
    int mid=srt+(end-srt)/2;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==key)
        {
            return mid;
        }
        if (key>arr[i])
        {
            srt=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=srt+(end-srt)/2;
        
    }
     return 0;
    
}

int main()
{
    int even[]={5,6,9,12,13,25};
    int odd[]={4,5,7,9,12,14,18};
    
    int result=binarySearch(even,12,6);
    if(result==12)
    {
        cout<<"Key is present: "<<result;
    }
    else
    {
        cout<<"key is not present: "<<endl;
    }
    cout<<endl;
    int result1=binarySearch(odd,11,7);
    if(result==12)
    {
        cout<<"Key is present: "<<result1;
    }
    else
    {
        cout<<"key is not present: "<<endl;
    }
}
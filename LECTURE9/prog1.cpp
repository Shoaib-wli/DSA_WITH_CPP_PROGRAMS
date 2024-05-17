#include<iostream>
using namespace std;
int getMax(int num[], int n)
{
    int maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,num[i]); // This line has same meaning as below commented code
        // if (num[i]>max)
        // {
        //     max=num[i];
        // }
    }
    return maxi;
    
}
int getMin(int num[], int n)
{
    int mini=INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini=min(mini,num[i]);  //This line has same meaning as below commented code
        // if (num[i]<min)
        // {
        //     min=num[i];
        // }
    }
    return mini;
    
}
int main()
{
    int arr[100];
    int size;
    cin>>size;
    for (int  i = 0; i <size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Maximum value is "<<getMax(arr,size)<<endl;
    cout<<"Minimum value is "<<getMin(arr,size)<<endl;
}
#include<iostream>
using namespace std;

bool search(int num[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (num[i]==key)
        {
            return 1;
        }
    }
    return 0;
    
}


int main()
{
    int key;
    int arr[]={12,11,2,34,5,9};
    cout<<"Enter the ey element you want to search"<<endl;
    cin>>key;
    bool found=search(arr,6,key);
    if (found)
    {
        cout<<"Element is found"<<endl;

    }
    else
    cout<<"Element not found"<<endl;
    
}
#include<iostream>
using namespace std;
int linearSearch(int arr[], int key)
{
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]==key)
        {
            return arr[i];
        }
        
    }
}
int main()
{
    int n=10;
    int arr[]={1,2,3,4,34,22,10};

    int reslt=linearSearch(arr,n);
    if(reslt==n)
    {
        cout<<"The key value is present in the list: "<<n<<endl;
    }
    else
    cout<<"Element is not present in the list"<<endl;

}
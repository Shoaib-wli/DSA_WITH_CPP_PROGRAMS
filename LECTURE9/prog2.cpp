#include<iostream>
using namespace std;

void Update(int num[],int n)
{
    num[1]=11;
    for (int  i = 0; i < n; i++)
    {
        cout<<num[i]<<" ";
    }
    cout<<endl;
    
}
int main()
{
    int arr[3]={1,2,3};

    cout<<"Arrrays of the funtion"<<endl;
    Update(arr,3);

    cout<<"Arrrays of the main funtion"<<endl;
    for (int  i = 0; i < 3; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
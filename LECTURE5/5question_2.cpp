#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    for (int  i = 0; i <=15; i=i+2)
    {
        cout<<i<<" ";
        if (i&1)
        {
            continue;
        }
        i++;
        
    }
    
}
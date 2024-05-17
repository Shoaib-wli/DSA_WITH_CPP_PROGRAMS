#include<iostream>
using namespace std;
bool evenOdd(int a)
{
    if (a&1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int ans=evenOdd(n);
    if (ans==1)
    {
       cout<<"Even number"<<endl;
    }
    else if(ans==0)
    {
        cout<<"Odd number"<<endl;
    }
    
}
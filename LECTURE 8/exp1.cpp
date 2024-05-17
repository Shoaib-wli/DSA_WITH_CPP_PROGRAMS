#include<iostream>
using namespace std;
int main()
{
    int a,b;
    int ans=1;
    cout<<"Enter the value of the a and b"<<endl;
    cin>>a>>b;
    for (int  i = 1; i <=b; i++)
    {
        ans=ans*a;
    }
    cout<<" power vlaue is "<<ans<<endl;
}
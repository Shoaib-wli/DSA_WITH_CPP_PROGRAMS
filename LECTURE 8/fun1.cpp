#include<iostream>
using namespace std;
void power(int a, int b)
{
    int ans=1;
    for (int  i = 0; i < b; i++)
    {
        ans=ans*a;
    }
    cout<<"The power value is "<<ans<<endl;
    
}
int main()
{
    int x,y;
    cout<<"Enter the value of a and b"<<endl;
    cin>>x>>y;
    power(x,y);
}
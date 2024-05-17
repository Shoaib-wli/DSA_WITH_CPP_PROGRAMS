#include<iostream>
using namespace std;
int main()
{
    int n,i;
    int a=0;
    int b=1;
    
    cout<<"Enter the number n"<<endl;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for (i=1; i<=n;i++)
    {
        int sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    
}
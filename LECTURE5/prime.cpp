#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    for (int i = 2; i<(n-1); i++)
    {
        if (n%i==0)
        {
           cout<<"Entred number is not prime number"<<endl;
           
        }
        else
        cout<<"Entered number is prime number"<<endl;
        break;
        
    }
    
}
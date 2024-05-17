#include<iostream>
using namespace std;
int main()
{
    int i=1, j;
    int n;
    cout << "Entre the value of n"<<endl;
    cin>> n;
    while (i<=n)
    {
        j=1;
        while (j<=i)
        {
            cout<<(i-j+1) << " ";
            j+=1;
        }
        cout <<endl;
        i=i+1;
        
    }
    
}
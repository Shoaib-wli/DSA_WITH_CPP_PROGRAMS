#include<iostream>
using namespace std;
int main ()
{
    int i=1,n;
    cout <<"Enter the value of n" << endl;
    cin>>n;
    int result;
    while (i<=n)
    {
        int j=1;
        while(j<=n)
        {
            result =n-j+1;
            cout << result;
            j+=1;
        }
        cout <<endl;
        i+=1;
    }
    return 0;
    
}
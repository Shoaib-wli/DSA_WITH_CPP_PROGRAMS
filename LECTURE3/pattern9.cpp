#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout <<"Enter the  value of n" << endl;
    cin>>n;
    while (i<=n)
    {
        int j=1;
        int value=i;
        while(j<=i)
        {
            cout <<value <<" ";
            value+=1;
            j+=1;
        }
        cout <<endl;
        i+=1;
    }
    return 0;
    
}
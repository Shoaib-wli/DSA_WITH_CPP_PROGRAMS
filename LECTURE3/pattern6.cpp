#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout <<"Enter value of n" <<endl;
    cin>> n;
    while (i<=n) // for row
    {
        int j=1;
        while(j<=i)  // for coloumn
        {
            cout <<"*" << " ";
            j+=1;
        }
        cout << endl;
        i+=1;
    }
    return 0;
    
}
#include<iostream>
using namespace std;
int main()
{
    int row=1,n,col;
    cin>>n;
    while (row<=n)
    {
        // printing for pattern1
        col=1;
        while (col<=n-row+1)
        {
            cout<<col;
            col++;
        }
        int star=row-1;
        while (star)
        {
            cout<<"*";
            star--;
        }
        star=row-1;
        while (star)
        {
            cout<<"*";
            star--;
        }
        col=1;
        while (col<=n-row+1)
        {
            int val=n-(row+col)+2;
            cout<<val;
            col++;
        }
        cout<<endl;
        row++;       
    }
    
}
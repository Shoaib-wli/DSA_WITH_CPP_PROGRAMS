#include<iostream>
using namespace std;
int main()
{
    int row=1,col,n;
    cin>>n;
    while (row<=n)
    {
        int space=n-row;
        col=1;
        while (space)
        {
            cout<<" ";
            space--;
        }
        
        while (col<=row)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
        
        
    }
    
}
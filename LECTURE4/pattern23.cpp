#include<iostream>
using namespace std;
int main()
{
    int row=1,col,n;
    cin>>n;
    while (row<=n)
    {
        col=1;
        while (col<=n-row+1)
        {
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;   
    }   
}
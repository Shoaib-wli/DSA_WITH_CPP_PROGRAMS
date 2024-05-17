#include<iostream>
using namespace std;
int main()
{
    int n,col,row=1;
    int count=1,space;
    cin>>n;
    while (row<=n)
    {
        space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        col=1;
        while (col<=row)
        {
            cout<<count;
            count++;
            col++;
        }
        cout<<endl;
        row++;  
    }   
}
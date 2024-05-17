#include<iostream>
using namespace std;
int main()
{
    int row=1,col,n;
    char value='A';
    cin>>n;
    while (row<=n)
    {
        col=1;
        while (col<=row)
        {
            cout<<value;
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    
}
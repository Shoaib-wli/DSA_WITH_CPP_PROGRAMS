#include<iostream>
using namespace std;
int main()
{
    int row=1,col,n;
    char start;
    cin>>n;
    while (row<=n)
    {
        col=1;
        start='A'+n-row;
        while (col<=row)
        {
            cout<<start;
            start++;
            col++;
        }
        cout<<endl;
        row++;   
    }
    
}
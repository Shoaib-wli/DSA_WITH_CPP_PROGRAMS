#include<iostream>
using namespace std;
int main()
{
    int row=1;
    int col,n;
    char ch,start='A';
    cin>>n;
    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
            cout<<start <<" ";
            start++;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
    
}
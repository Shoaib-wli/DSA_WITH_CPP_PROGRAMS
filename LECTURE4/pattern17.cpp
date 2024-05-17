#include<iostream>
using namespace std;
int main()
{
    int row=1,col;
    int n;
    char ch;
    cin>>n;
    while (row<=n)
    {
        col=1;
        while (col<=row)
        {
            ch='A'+row-1;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
}
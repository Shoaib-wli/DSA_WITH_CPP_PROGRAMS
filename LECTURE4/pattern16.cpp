#include<iostream>
using namespace std;
int main()
{
    int row=1;
    int col,n;
    char ch;
    cin>>n;
    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
            ch='A'+row+col-2;
            cout<<ch;
            col++;
        }
        cout<<endl;
        row++;   
    }
    
}
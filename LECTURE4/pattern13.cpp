#include<iostream>
using namespace std;
int main()
{
    int row=1;
    int col;
    char ch;
    int n;
    cin>>n;
    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
            ch='A'+row-1;
            cout<<ch;
            col++;
        }
        cout <<endl;
        row++;
    }
    
}
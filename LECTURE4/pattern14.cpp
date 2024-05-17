#include<iostream>
using namespace std;
int main()
{
    int row=1;
    int col,n;
    cin>>n;
    char ch;
    while (row<=n)
    {
        col=1;
        while (col<=n)
        {
            ch='A'+col-1;
            cout<<ch<<" ";
            col++;
        }
        cout<<endl;
        row++;  
    }
    
}
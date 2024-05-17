#include<iostream>
using namespace std;
int main()
{
    int row=1, col,n;
    int val;
    cin>>n;
    while (row<=n)
    {
        int space=row-1;
        while (space)
        { cout<<" ";
            space--;
        }
           
        
        col=1;
        while (col<=n-row+1)
        {
            val=row+col-1;
            cout<<val;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
}
#include<iostream>
using namespace std;
int main()
{
    int row=1,col,n;
    cin>>n;
    while (row<=n)
    {
        int space=row-1;
        
        while (space)
        {
            cout<<" ";
            space--;
        }
        col=1;
        while (col<=n-row+1)
        {
            cout<<row;
            col++;
        }
        
        cout<<endl;
        row++;
        
        
    }
    
}
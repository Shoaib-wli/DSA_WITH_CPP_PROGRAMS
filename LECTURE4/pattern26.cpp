#include<iostream>
using namespace std;
int main()
{
    int row=1,col,n;
    cin>>n;
    while (row<=n)
    {
        int space=n-row;
        while (space)
        {
            cout<<" ";
            space--;
        }
        col=1;
        while (col<=row)
        {
            cout<<row;
            col++;
        }
        cout<<endl;
        row++;
        
    }
    
}
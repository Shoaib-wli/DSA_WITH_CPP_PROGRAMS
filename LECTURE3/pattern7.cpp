#include<iostream>
using namespace std;
int main ()
{
    int row=1,n;
    cout << "Enter the value " << endl;
    cin >>n;
    while (row<=n)
    {
        int colmun=1;
        while(colmun<=row)
        {
            cout << row;
            colmun+=1;
        }
        cout <<endl;
        row+=1;
    }
    return 0;
    
}
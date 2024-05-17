#include<iostream>
using namespace std;
int main()
{   
    int n,num=1,fact=1;
    cout << "Enter the number" << endl;
    cin >> n;
    for ( num = 1; num<=n ; num++)
    {
        fact *=num; 
    }
    cout << fact << endl;
    
    
}
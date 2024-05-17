#include<iostream>
using namespace std;
int main()
{
    int i=1,n;
    cout << "Enter the value of n" << endl;
    cin >>n;
    while (i<=n) // can use for loop also
    {
        int j=1; // 
        while (j<=n)
        {
            cout <<j;  //print j
            j+=1;
        }
        cout << endl;
        i+=1;
        
    }
    return 0;
    
}
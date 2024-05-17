#include <iostream>
using namespace std;
int main()
{
    int i = 2, n;
    cout << "Enter the number" << endl;
    cin >> n;
    while (i<n)
    {
        if (n%i!=0)
        {
            cout << "prime number " <<endl;
            break;
        }
        else
        cout <<" not prime for " <<i <<endl;
        
        i+=1;
        
    }
    
}
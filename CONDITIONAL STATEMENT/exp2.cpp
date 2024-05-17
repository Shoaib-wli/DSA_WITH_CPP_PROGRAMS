#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the nuber a" << endl;
    cin >> a;
    
    if (a > 0)
    {
        cout << "Entred number a is positive" << endl;
    }
    else
    {
        if (a < 0)
        {
            cout << "Entred number is negative" <<endl;
        }

        else
        {
            cout << "Entred number is zero" << endl;
        }
    }
}
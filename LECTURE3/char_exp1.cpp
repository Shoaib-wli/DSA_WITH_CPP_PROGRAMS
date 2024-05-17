#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter any charectar\n";
    cin >> ch;
    if (ch >= 65 && ch <= 90)
    {
        cout << "higher case" << endl;
    }
    if (ch >= 97 && ch <= 122)
    {
        cout << "lower case" << endl;
    }
    if (ch >= 0 && ch <= 9)
    {
        cout << "Digit" << endl;
    }
    return 0;
}
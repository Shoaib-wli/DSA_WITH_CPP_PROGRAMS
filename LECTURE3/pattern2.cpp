#include <iostream>
using namespace std;
int main()
{
    int n, i = 1;

    cout << "Enter the number" << endl;
    cin >> n;
    while (i <= n)
    {
        int j = i; // j=3
        while (j <= n)
        {

            cout << i; // i=3
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
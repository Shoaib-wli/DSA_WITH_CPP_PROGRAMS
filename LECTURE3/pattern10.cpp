#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    int n;
    cout << "Enter the value of the n" << endl;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i + j << " ";
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}
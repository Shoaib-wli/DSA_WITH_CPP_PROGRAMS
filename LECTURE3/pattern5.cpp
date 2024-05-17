#include <iostream>
using namespace std;
int main()
{
    int i = 1, n;
    int count = 1;
    cout << "Enter the value of the n" << endl;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << count << "\t";
            count++;
            j += 1;
        }
        cout << endl;
        i += 1;
    }
    return 0;
}
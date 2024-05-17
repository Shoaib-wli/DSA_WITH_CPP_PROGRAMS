#include <iostream>
using namespace std;
int main()
{
    int row = 1, col, n;
    int space;
    cin >> n;
    while (row <= n)
    {
        space = n - row;
        while (space)
        {
            cout << " ";
            space--;
        }
        col = 1;
        while (col <= row)
        {
            cout << col;
            col++;
        }
        int start = row - 1;
        while (start)
        {
            cout << start;
            start--;
        }

        cout << endl;
        row++;
    }
}
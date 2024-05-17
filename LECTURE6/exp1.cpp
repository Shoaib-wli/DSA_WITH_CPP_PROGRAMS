#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int i = 0;
    int ans = 0;
    int bit;
    int n;
    cout << "Enter the number " << endl;
    cin >> n;
    while (n != 0)
    {
        bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "The binary of the number is :" << ans << endl;
}
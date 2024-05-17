#include <iostream>
using namespace std;
int main()
{
    int n;
    int i = 2;
    int sum = 0;
    cout << "Enter the number " << endl;
    cin >> n;
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
        i += 1;
    }
    cout << "The sum of the all even number is " << sum;
    return 0;
}
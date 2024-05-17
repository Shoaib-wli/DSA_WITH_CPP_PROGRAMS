// WACPP program to check enter number is prime or not
#include <iostream>
using namespace std;
int main()
{
    int n, i = 2;
    cout << "Enter the number" << endl;
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % 2 != 0)
        {
            cout << "Entred number is prime number";
            break;
        }
        else
            cout << "Enterd number is not prime number";
        break;
    }
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int a = 2;
    int b = 3;
    bool first = (a == b);
    cout << first << endl;

    bool second = (a < b);
    cout << second << endl;

    bool third = (a > b);
    cout << third << endl;

    bool fourth = (a != b);
    cout << fourth << endl;

    bool fivth = (a >= b);
    cout << fivth << endl;

    bool sixth = (a <= b);
    cout << sixth << endl;
    return 0;
}
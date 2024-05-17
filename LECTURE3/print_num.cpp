#include<iostream>
using namespace std;
int main ()
{
    int n;
    int i=1;
    int sum=0;
    cout << "Enter the number " << endl;
    cin>> n;
    while (i<=n)
    {
        cout << i << " " << endl;
        sum +=i;
        i=i+1;
    }
    cout << "The sum of the total number is\t"<<sum;
    
}
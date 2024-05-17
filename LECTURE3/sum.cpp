#include<iostream>
using namespace std;
int main ()
{
    int n;
    int i=1;
    int sum=0;
    cout << "Enter the number" << endl;
    cin >> n;
    while (i<=n)
    {
        sum=sum+i;
        i=i+1;
    }
    cout << "Sum of the total number is\t"<< sum; 
}
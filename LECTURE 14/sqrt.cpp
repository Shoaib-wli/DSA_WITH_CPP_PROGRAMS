#include<iostream>
using namespace std;

int binarySearch(int x)
{
    int s = 0;
    int e = x;
    int ans = -1;
    long long int mid = s + (e - s) / 2;
    while (s <= e)
    {
        long long int sqrt = mid * mid;
        if (sqrt == x)
        {
            return mid;
        }
        if (sqrt < x)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}
double accurateAns(int n, int precision,int tempSol)
{
    double factor=1;
    double ans=tempSol;
    for ( int i = 0; i <precision; i++)
    {
        factor=factor/10;
        for (double j = ans; j*j < n; j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    int tempSol=binarySearch(n);
    cout<<"Answer is "<<accurateAns(n,6,tempSol)<<endl;

}
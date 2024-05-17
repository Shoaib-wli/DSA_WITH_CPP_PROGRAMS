#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int i=0,n,ans=0;
    cout<<"Enter the number"<<endl;
    cin>>n;
    while (n!=0)
    {
        int digit=n%10;
        if (digit==1)
        {
            ans=pow(2,i)+ans;
        }
        i++;
        n=n/10;
        
    }
    cout<<"The answer is "<<ans<<endl;
    
}
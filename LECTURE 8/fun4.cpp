#include<iostream>
using namespace std;
void printNum(int a)
{
    a++;
    cout<<" a is "<<a<<endl;
}
int main()
{
    int n;
    cout<<"Enter the vlsue of a "<<endl;
    cin>>n;
    printNum(n); 
    cout<<"a is"<<n<<endl; // this is an example of pass by vlaue
}
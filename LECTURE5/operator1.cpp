#include<iostream>
using namespace std;
int main()
{
    int a=2;
    int b=4;
    
    // Implimenting the operator
    cout<<"a&b: "<<(a&b)<<endl;
    cout<<"a|b: "<<(a|b)<<endl;
    cout<<"a^b: "<<(a^b)<<endl;
    cout<<"~a: "<<~b<<endl;

    // Implimenting the left shit and right operator
    cout<<"17>>1: "<<(17>>1)<<endl;
    cout<<"17>>2: "<<(17>>2)<<endl;
    cout<<"19<<1: "<<(19<<1)<<endl;
    cout<<"21<<2: "<<(21<<2)<<endl;
    
}
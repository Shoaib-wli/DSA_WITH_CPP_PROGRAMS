#include<iostream>
using namespace std;
int main()
{
    int n;
    
    for(int i=1;i<=4;i++)
    {
        cout<<"Enter your choice "<<endl;
        cin>>n;
        
    switch (n)
    {
    case 1:
        cout<<"hundred notes is "<<1330/100<<endl;
        break;
    case 2:
        cout<<"number of 50 notes is"<<30/50<<endl;
        break;
    case 3:
        cout<<"number of 20 notes "<<30/20<<endl;
        break;
    case 4:
        cout<<"number of one notes "<<10/1<<endl;
    default:
        cout<<"Invalid inputs"<<endl;
        break;
    }
    }
    return 0;
}
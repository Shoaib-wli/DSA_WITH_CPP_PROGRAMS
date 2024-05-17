#include<iostream>
using namespace std;
class Area{
    int radius;
    public:
    Area(int a){
        radius=a;
    }
    float area1(float pi=3.14){
        return pi*radius*radius;
    }
};
int main(){
    float x;
    cout<<"enter radius of circle";
    cin>>x;
    Area s(x);
    float y= s.area1();
    cout<<"area of circle is  "<<y;
}
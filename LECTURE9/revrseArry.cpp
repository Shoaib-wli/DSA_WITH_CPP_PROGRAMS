#include<iostream>
using namespace std;

void reverseArr1(int num1[], int n)
{
    int st=0;
    int end=n-1;
    while (st<end)
    {
        swap(num1[st], num1[end]);
        st++;
        end--;
    }
    
}

void reverseArr2(int num2[],int n)
{
    int st=0;
    int end=n-1;
    while (st<=end)
    {
        swap(num2[st],num2[end]);
        st++;
        end--;
    }
    
}

void printArry1(int num1[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<num1[i]<<" ";
    }
    cout<<endl;
}
void printArry2(int num2[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<num2[i]<<" ";
    }
    cout<<endl;
}


int main()
{
    int arr1[10]={12,2,33,5,6,33};
    int arr2[10]={11,45,76,99,55};
    
    reverseArr1(arr1,6);
    reverseArr2(arr2,5);

    printArry1(arr1,6);
    printArry2(arr2,5);
}
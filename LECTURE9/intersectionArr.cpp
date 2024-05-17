#include<iostream>
using namespace std;

int intersectionArr(int num1[],int num2[], int n, int m)
{
    int count=0;
    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < m; j++)
       {
        if (num1[i]==num1[j])
        {
            count++;
            return num1[i];
            
        }
        
       }
       
    }
    
}

void printArry(int num1[], int n)
int main()
{
    int arr[10]={1,2,3,4};
    int arr2[10]={5,6,3,4,7};
    intersectionArr(arr,arr2,4,5);
}
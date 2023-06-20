#include<iostream>
using namespace std;

void reverse(int arr[],int size)
{
    int start=0;
    int end=size-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
        
    }
    
}


void printarray(int arr[],int size)
{
    cout<<"The reversed array is "<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int num1[5]={4,6,9,1,3};
    int num2[6]={3,8,0,1,2,5};

    reverse(num1,5);
    reverse(num2,6);

    printarray(num1,5);
    printarray(num2,6);

 
}
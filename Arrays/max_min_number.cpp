#include<iostream>
using namespace std;

int getMax(int arr[],int n )
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int getMin(int arr[],int n )
{
    int min=100;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

int main(){
    int size;
    cout<<"Enter size "<<endl;
    cin>>size;

    int num[100];
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }

    int max_no=getMax(num,size);
    int min_no=getMin(num,size);
    cout<<"The Max number is "<<max_no<<endl;
    cout<<"The Min number is "<<min_no<<endl;



}
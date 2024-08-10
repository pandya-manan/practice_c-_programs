#include<iostream>
using namespace std;
int findMinimumElement(int arr[],int n)
{
    int min=99999,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int data[]={9,0,3,4,0,2,1,5,4,2,1,1,1,1,4,4,3,2,6,3,7,4};
    int n=sizeof(data)/sizeof(data[0]);
    int minElement=findMinimumElement(data,n);
    cout<<"The Minimum element present in the array is: "<<minElement;
    return 0;
}
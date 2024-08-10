#include<iostream>
using namespace std;
int findLargestElement(int arr[],int n)
{
    int max=-99999,i;
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={9,13,2,5,3,9,15,34,23,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxElement=findLargestElement(arr,n);
    cout<<"The largest element present in the array is: "<<maxElement;
    return 0;
}
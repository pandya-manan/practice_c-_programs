#include<iostream>
using namespace std;
int checkArrayIsSorted(int arr[],int n)
{
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            continue;
        }
        else
        {
            flag=false;
            break;
        }
    }
    return flag;
}
int main()
{
    int data[]={3,5,6,4,6,3,7,8,2,3,5};
    int data2[]={1,3,4,6,7,8,9,10};
    int dataLength=sizeof(data)/sizeof(data[0]);
    int dataLength2=sizeof(data2)/sizeof(data2[0]);
    bool result=checkArrayIsSorted(data,dataLength);
    bool result2=checkArrayIsSorted(data2,dataLength2);
    cout<<"The first array sorted status is: "<<result<<endl;
    cout<<"The second array sorted status is: "<<result2;
    return 0;
}
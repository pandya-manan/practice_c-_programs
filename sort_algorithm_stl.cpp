#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int i,int j)
{
    return (i<j);
}
int main()
{
    int arr[]={9,4,2,8,6,3,1};
    sort(arr,arr+3,compare);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
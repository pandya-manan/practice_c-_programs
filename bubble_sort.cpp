#include<iostream>
using namespace std;
void bubbleSort(int arr[],int n);
int main()
{
    int data[]={10,5,4,7,3,2,1,6,4,8,3};
    int n=sizeof(data)/sizeof(data[0]);
    cout<<"Array Before Sorting"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<endl;
    bubbleSort(data,n);
    cout<<"Array After Sorting"<<endl;
    for(int i=0;i<11;i++)
    {
        cout<<data[i]<<" ";
    }
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
}
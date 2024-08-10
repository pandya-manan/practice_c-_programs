#include<iostream>
using namespace std;
int main()
{
    int *ptr=new int(20);
    cout<<*ptr;
    free(ptr);
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    int temp=number,reverse=0;
    while(temp!=0)
    {
        int dig=temp%10;
        reverse=(reverse*10)+dig;
        temp=temp/10;
    }
    if(reverse==number)
    {
        cout<<"The given number "<<number<< " is a palindrome number"<<endl;
    }
    else
    {
        cout<<"The given number "<<number<<" is not a palindrome number"<<endl;
    }
    return 0;
}
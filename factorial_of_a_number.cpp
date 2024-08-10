#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    else 
        return n*factorial(n-1);
}
int main()
{
    int number;
    cout<<"Enter a number"<<endl;
    cin>>number;
    int factorialOfTheNumber=factorial(number);
    cout<<"The factorial of the number "<<number<<" is: "<<factorialOfTheNumber<<endl;
    return 0;
}
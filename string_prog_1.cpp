#include<iostream>
#include<string>
using namespace std;
int main()
{
    string firstname,lastname;
    cout<<"Enter the first name of the person"<<endl;
    cin>>firstname;
    cout<<"Enter the last name of the person"<<endl;
    cin>>lastname;
    string fullname=firstname+" "+lastname;
    cout<<"The full name of the person is: "<<fullname;
    return 0;
}
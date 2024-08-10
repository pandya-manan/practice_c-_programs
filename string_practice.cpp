#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Programming";
    str.erase(3,5);
    str.insert(3,"AB");
    str.insert(5,"XYZ");
    cout<<str;
    return 0;
}
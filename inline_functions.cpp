#include<iostream>
using namespace std;
inline int square (int n) {return n*n;}
inline int cube (int n) {return n*n*n;}
int main()
{
    int value;
    cout<<"Enter the number whose cube and square need to be found out"<<endl;
    cin>>value;
    int cubeOfTheNumber=cube(value);
    int squareOfTheNumber=square(value);
    cout<<"The cube of the number "<<value<<" is: "<<cubeOfTheNumber<<endl;
    cout<<"The square of the number "<<value<<" is: "<<squareOfTheNumber;
    return 0;
}
#include<iostream>
using namespace std;
#define CUBE(x) (x*x*x)
#define SQUARE(x) (x*x)
int main()
{
    int value;
    cout<<"Enter a number whose cube and square needs to be calculated"<<endl;
    cin>>value;
    int cube=CUBE(value);
    int square=SQUARE(value);
    cout<<"The cube of the number "<<value<<" is: "<<cube<<endl;
    cout<<"The square of the number "<<value<<" is: "<<square;
    return 0;
}

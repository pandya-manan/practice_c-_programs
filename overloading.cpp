#include<iostream>
using namespace std;
float calculate(int x,float y)
{
    return x+y;
}
float calculate(float x,int y)
{
    return x-y;
}
int main()
{
    cout<<calculate(4,5);
    return 0;
}
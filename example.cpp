#include<iostream>
using namespace std;
class Example
{
    int x;
    public:
        Example(int x_=0):x(x_) {cout<<"Constructor: "<<x<<" ";}
        ~Example() {cout<<"Destructor:"<<x<<" ";}
};
Example globalObj(50);
int main()
{
    Example *pExample=new Example(20);
    Example localObj(30);
    {
        Example localObj2(40);
        delete pExample;
    }
    return 0;
}
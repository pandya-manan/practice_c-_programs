#include<iostream>
using namespace std;
class Rectangle
{
    int width,height;
    public:
        Rectangle(int width_=0,int height_=0):width(width_),height(height_){
            cout<<"c-tor";
        }
        Rectangle(Rectangle &r):width(r.width),height(r.height)
        {
            cout<<"c-tor";
        }
        Rectangle& operator=(Rectangle r)
        {
            width=r.width;
            height=r.height;
            cout<<"c-assign";
            return *this;
        }

};
int main()
{
    Rectangle r1(30,40);
    Rectangle r2=r1;
    Rectangle *rPtr;
    Rectangle r3;
    r3=r2;
    return 0;
}
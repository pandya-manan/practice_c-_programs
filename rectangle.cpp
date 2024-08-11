#include<iostream>
using namespace std;
class Rectangle
{
    private:
        int breadth;
        int length;
        int area;
        int perimeter;
    public:
        void setBreadth(int b)
        {
            this->breadth=b;
        }
        void setLength(int l)
        {
            this->length=l;
        }
        int getBreadth()
        {
            return this->breadth;
        }
        int getLength()
        {
            return this->length;
        }
        int calculateArea()
        {
            this->area=(this->length)*(this->breadth);
            return this->area;
        }
        int calculatePerimeter()
        {
            this->perimeter=2*((this->length)+(this->breadth));
            return this->perimeter;
        }
};
int main()
{
    Rectangle r;
    int l,b;
    cout<<"Enter the length of the rectangle: ";
    cin>>l;
    cout<<"Enter the breadth of the rectangle: ";
    cin>>b;
    r.setBreadth(b);
    r.setLength(l);
    r.calculatePerimeter();
    cout<<"The Area of the rectangle is: "<<r.calculateArea()<<endl;
    cout<<"The Perimeter of the rectangle is: "<<r.calculatePerimeter()<<endl;
    return 0;

}
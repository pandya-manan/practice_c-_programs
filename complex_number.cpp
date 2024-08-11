#include<iostream>
using namespace std;
class ComplexNumber
{
    private:
        double real;
        double imaginary;
    public:
        void setReal(double realPart)
        {
            this->real=realPart;
        }
        void setImaginary(double imaginePart)
        {
            this->imaginary=imaginePart;
        }
        double getReal()
        {
            return this->real;
        }
        double getImaginary()
        {
            return this->imaginary;
        }
    
};
int main()
{
    ComplexNumber c;
    double real,imaginary;
    cout<<"Enter the real part :";
    cin>>real;
    cout<<"Enter the imaginary part: ";
    cin>>imaginary;
    c.setImaginary(imaginary);
    c.setReal(real);
    cout<<"The complex number is: "<<c.getReal()<<" + "<<c.getImaginary()<<"i"<<endl;
    return 0;
}
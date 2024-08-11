#include<iostream>
using namespace std;
class Car
{
    int id;
    string model;
    Car(){}
    public:
        Car(int id_,string model_):id(id_),model(model_){}
        void updateCar(Car& c)
        {
            this->id=c.id;
            this->model=c.model;
        }
        void display()
        {
            cout<<id<<" , "<<model<<endl;
        }
};
int main()
{
    Car car1(101,"Sedan");
    Car car2(102,"SUV");
    car1.updateCar(car2);
    car1.display();
    return 0;
}
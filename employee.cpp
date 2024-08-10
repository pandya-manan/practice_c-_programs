#include<iostream>
#include<string>
using namespace std;
class Employee
{
    private:
        int empId;
        string empName;
        double empSalary;
        string empAddress;
    public:
        void setEmpId(int id)
        {
            this->empId=id;
        }
        int getEmpId()
        {
            return this->empId;
        }
        void setEmpName(string name)
        {
            this->empName=name;
        }
        string getEmpName()
        {
            return this->empName;
        }
        void setEmpSalary(double salary)
        {
            this->empSalary=salary;
        }
        double getEmpSalary()
        {
            return this->empSalary;
        }
        void setEmpAddress(string address)
        {
            this->empAddress=address;
        }
        string getEmpAddress()
        {
            return this->empAddress;
        }
};
int main()
{
    Employee emp;
    int id,salary;
    string address,name;
    cout<<"Enter the id for the employee"<<endl;
    cin>>id;
    cout<<"Enter the name of the employee"<<endl;
    cin>>name;
    cout<<"Enter the salary for the employee"<<endl;
    cin>>salary;
    cout<<"Enter the address for the employee"<<endl;
    cin>>address;
    emp.setEmpAddress(address);
    emp.setEmpId(id);
    emp.setEmpName(name);
    emp.setEmpSalary(salary);

    cout<<"Id "<<"Name  "<<"Salary  "<<"Address  "<<endl;
    cout<<emp.getEmpId()<<emp.getEmpName()<<emp.getEmpSalary()<<emp.getEmpAddress();
    return 0;
}
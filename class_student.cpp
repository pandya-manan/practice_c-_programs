#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    int rollNo;
    string name;

    void printStudentDetails() {
        cout << "The roll number of the student is: " << rollNo << endl;
        cout << "The name of the student is: " << name << endl;
    }
};

int main() {
    Student stud1 = {1, "Aditi GW"};
    stud1.printStudentDetails();
    return 0;
}

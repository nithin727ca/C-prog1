//parameterized constructor
#include <iostream>
using namespace std;

class Student {
    int rollno;
    string name;

public:
    
    Student(int r, string n) {
        rollno = r;
        name = n;
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {

    Student s1(1, "Nithin");
    Student s2(2, "Cyril");

    cout << "Student 1 Details:" << endl;
    s1.display();

    cout << "\nStudent 2 Details:" << endl;
    s2.display();

    return 0;
}

//using constant member function
#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }

    
    void display() const
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;

        // rollno = 10;   ❌ Error: cannot modify inside const function
    }
};

int main()
{
    Student s1;
    s1.getData();

    cout << "\nStudent details:\n";
    s1.display(); 

    return 0;
}

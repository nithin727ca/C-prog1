//usign constructor
#include <iostream>
using namespace std;

class Student
{
    int rollno;
    string name;

public:
    
    Student()
    {
        cout << "Constructor is called!" << endl;
        rollno = 0;
        name = "Unknown";
    }

    void getData()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter name: ";
        cin >> name;
    }

    void display()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main()
{
    cout << "Creating object s1...\n";
    Student s1; 

    cout << "\nDefault values after constructor call:\n";
    s1.display();

    cout << "\nEnter new details:\n";
    s1.getData();

    cout << "\nAfter updating details:\n";
    s1.display();

    return 0;
}

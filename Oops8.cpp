//using non-constant member function
#include <iostream>
using namespace std;

class Student
{
    int rollno;
    int marks;

public:
    void getData()
    {
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter marks: ";
        cin >> marks;
    }


    void updateMarks(int newMarks)
    {
        marks = newMarks; 
    }

    void display()
    {
        cout << "Roll No: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s1;
    s1.getData();

    cout << "\nBefore updating:\n";
    s1.display();

    int newMarks;
    cout << "\nEnter new marks to update: ";
    cin >> newMarks;

   
    s1.updateMarks(newMarks);

    cout << "\nAfter updating:\n";
    s1.display();

    return 0;
}

//using friend function
#include <iostream>
using namespace std;

class Student
{
    int marks;

public:
    void getData()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    
    friend void compare(Student s1, Student s2);
};


void compare(Student s1, Student s2)
{
    if (s1.marks > s2.marks)
        cout << "Student 1 has higher marks (" << s1.marks << ") than Student 2 (" << s2.marks << ")." << endl;
    else if (s1.marks < s2.marks)
        cout << "Student 2 has higher marks (" << s2.marks << ") than Student 1 (" << s1.marks << ")." << endl;
    else
        cout << "Both students have equal marks (" << s1.marks << ")." << endl;
}

int main()
{
    Student s1, s2;

    cout << "Enter details of student 1:\n";
    s1.getData();

    cout << "Enter details of student 2:\n";
    s2.getData();


    compare(s1, s2);

    return 0;
}

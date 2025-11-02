//copy constructor
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

   
    Student(const Student &s) {
        rollno = s.rollno;   // here s only refers to the object s1 which is present only inside copy constructor
        name = s.name;      
    }

    void display() {
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student s1(101, "Nithin");
    cout << "Original Object (s1):" << endl;
    s1.display();

    
    Student s2(s1);
    cout << "\nCopied Object (s2):" << endl;
    s2.display();// s2 created as a new object which has elements copied from s1

    return 0;
}

//array of objects to store n students data and display it
#include<iostream>
using namespace std;
class student
{
    int rollno,mark;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter mark: ";
        cin>>mark;

    }
    void display()
    {
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Mark: "<<mark<<endl;
    }
    
};
int main()
{
    student stu[100];
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"student "<<i+1<<":"<<endl;
        stu[i].getdata();
    }
    for(int i=0;i<n;i++)
    {
        cout<<"Details of student "<<i+1<<":"<<endl;
        stu[i].display();
        
    }
    return 0;
}
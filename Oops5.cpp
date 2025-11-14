//passing object as function argument
#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter name: ";
        cin>>name;

    }
    void display()
    {
        cout<<"Roll No: "<<rollno<<endl;
        cout<<"Name: "<<name<<endl;

    }
    void compare(student s1,student s2)
    {
        if(s1.rollno > s2.rollno)
        {
            cout<<s1.name<<" has a higher roll no than "<<s2.name<<endl;
        
        }else if(s1.rollno < s2.rollno)
        {
            cout<<s2.name<<" has a higher roll no than "<<s1.name<<endl;

        }else{
            cout<<s1.name<<" and "<<s2.name<<" have the same roll no"<<endl;
        }
    }
};
int main()
{
    
    student s1,s2,result;
    cout<<"Enter details of student 1:"<<endl;
    s1.getdata();
    cout<<"Enter details of student 2:"<<endl;
    s2.getdata();
    cout<<"details of student 1:"<<endl;
    s1.display();
    cout<<"details of student 2:"<<endl;
    s2.display();
    result.compare(s1,s2);
    return 0;
}
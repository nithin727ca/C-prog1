//using static data member & static member function
#include<iostream>
using namespace std;
class student
{
    int roll_no;
    static int count;
    public:
    void getdata(int r)
    {
        roll_no=r;
        count++;

    }
    void display()
    {
        cout<<"Roll No: "<<roll_no<<endl;
        
    }
    static void showcount()
    {
        cout<<"Total number of students: "<<count<<endl;
    }


};
int student :: count=0;
int main()
{
    student s1,s2,s3;
    s1.getdata(101);
    s2.getdata(102);
    s3.getdata(103);
    s1.display();
    s2.display();
    s3.display();
    student :: showcount();
    return 0;
}
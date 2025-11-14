#include<iostream>
using namespace std;
class largest
{
    int a,b,large,c;
    public:
    void getdata()
    {
        cout<<"Enter two numbers: ";
        cin>>a>>b;
    }
    void resdata()
    {
        large=(a>b)? a:b;
        c=large;
        
        
        
    }
    void display()
    {
        getdata();
        resdata();
        cout<<"Largest number is: "<<c<<endl;
        


    }
};
int main()
{
    largest l1;
    l1.display();
    return 0;
}
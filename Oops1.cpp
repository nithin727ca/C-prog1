#include<iostream>
using namespace std;
class product
{
    int id;
    float cost;
    public:
    void setdata(int a,float b)
    {
        id=a;
        cost=b;
    }
    void display()
    {
        cout<<"Id: "<<id<<endl;
        cout<<"Cost: "<<cost<<endl;
    }

};
int main()
{
    product p1;
    p1.setdata(100,250.34);
    p1.display();
}
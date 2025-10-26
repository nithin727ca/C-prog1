//square of a number with setprecision(4)
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number: "<<endl;
    cin>>num;
    int square=num*num;
    double squares=square*num;
    cout<<"Square of the number is: "<<fixed<<setprecision(4)<<squares<<endl;
    

}
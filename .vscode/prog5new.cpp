//largest of three numbers using ternary operator
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,largest;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    largest=(a>=b)?((b>=c)? b:c):((c>=a)? c:a);
    cout<<largest<<" is the largest number"<<endl;
    return 0;

}
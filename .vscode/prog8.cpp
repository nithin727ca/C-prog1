//to check a sting is palindrome or not
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a string: "<<endl;
    cin>>str;
    int n=str.length();
    bool palin=true;
    for(int i=0;i<n/2;i++)
    {
        if(str[i]!=str[n-i-1])
        {
            palin=false;
            break;

        }
    }
    if(palin==true)
    {
        cout<<str<<" is a palindrome"<<endl;
    }
    else
    {
        cout<<str<<" is not a palindrome"<<endl;
    }
    return 0;
}
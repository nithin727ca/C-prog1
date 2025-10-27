//to print an array after removing even numbers
#include<iostream>
using namespace std;
int main()
{
    int n,arr[100];
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            cout<<arr[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}

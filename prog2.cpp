//passing array to a function
#include<iostream>
using namespace std;
void printarr(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int arr[100];
    cout<<"Enter the elements of the array: "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    printarr(arr,n);
    return 0;
}
    
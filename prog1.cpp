#include<iostream>
using namespace std;
void printeven(int arr[100],int n)
{
    
    for (int i = 0; i < n; i++)
    
    if (arr[i]%2!=0)
    {
        cout<<arr[i]<<" "<<endl;
    }
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
    printeven(arr,n);
    
    return 0;


}
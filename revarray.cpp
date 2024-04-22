#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of an array=";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements="<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"\nAfter reversing array="<<endl;
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
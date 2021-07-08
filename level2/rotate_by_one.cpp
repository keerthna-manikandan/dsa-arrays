#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=a[n-1];
    for(int i=n-1;i>0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=x;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

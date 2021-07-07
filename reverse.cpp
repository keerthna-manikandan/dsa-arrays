#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=n-1,i=0,x;
    for(;i<j;i++,j--)
    {
        x=a[i];
        a[i]=a[j];
        a[j]=x;
    }
    cout<<"Reverse using iterative method: ";
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    cout<<"\nReverse using stl function: ";
    reverse(a,a+n);
    for(i=0;i<n;i++)cout<<a[i]<<" ";
}

#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int n,x;
    cout<<"Size: ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i+=2)
    {
        if(a[i]<a[i+1])
            swap(&a[i],&a[i+1]);
        if(a[i]<a[i-1] && i!=0)
            swap(&a[i],&a[i-1]);
    }
    cout<<"Wave Array: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    
}

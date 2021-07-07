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
    int j,i,min,x;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {

                 x=a[i];
                 a[i]=a[j];
                 a[j]=x;

            }
        }
    }
    for(i=0;i<n;i++)cout<<a[i]<<" ";
}

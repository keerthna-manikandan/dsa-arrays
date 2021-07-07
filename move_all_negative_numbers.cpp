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
    int x,j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(i!=j)
            {
                x=a[i];
                a[i]=a[j];
                a[j]=x;
            }

            j++;
        }

    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}

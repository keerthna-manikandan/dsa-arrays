#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int a[n+1];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int j=0,k=0,x;
    for(int i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            x=a[i];
            //shifting
            for(k=i;k>=j;k--)
            {
                a[k]=a[k-1];
            }
            //changing the position of negative number
            a[j]=x;
            j+=2;
        }
    }
    cout<<"Rearranged Array: ";
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

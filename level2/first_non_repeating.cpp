#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int a[n];
    map<int,int> m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    cout<<"The none Repeating element is: ";
    int j=0,flag=0;
    for(int i=0;i<n;i++)
    {
        if(m[a[i]]<=1)
        {
            cout<<a[i];
        flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"found none";
    }
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";

    /*
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    cout<<"The duplicates are: ";
    for(auto i:m)
    {
        if(i.second!=1)cout<<i.first<<" ";
    }
    */

    int a[n];for(int i=0;i<n;i++)cin>>a[i];

    for(int i=0;i<n;i++)
    {
        a[a[i]%n]= a[a[i]%n]+n;
    }
    cout<<"The duplicates are: ";
    for(int i=0;i<n;i++)
    {
        if(a[i]>=n*2)
            cout<<i<<" ";
    }
}

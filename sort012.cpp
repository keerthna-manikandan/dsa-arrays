#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int x;
    map<int,int> m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    int a[n],j=0;
    for(auto i: m)
    {
        for(int k=0;k<i.second;k++,j++)
        {
            a[j]=i.first;
        }
    }
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

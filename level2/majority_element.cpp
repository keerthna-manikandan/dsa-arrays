#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cout<<"Size: ";
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    x=n/2;
    for(auto i: m)
    {
        if(i.second>x)
        {
            cout<<i.first<<" ";
        }
    }
}

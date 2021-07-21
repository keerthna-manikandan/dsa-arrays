#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cout<<"Size of array1: ";
    cin>>n;
    int a[n];
    map<int,int> p;
    cout<<"Elements of array1: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        p[a[i]]++;
        
    }
    cout<<"Size of Array2: ";
    cin>>m;
    int b[m],flag=0;
    cout<<"Elements of array2: ";
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
        if(p[b[i]]>0)
            p[b[i]]--;
        else
            flag=1;
    }
    if(flag==1)
    {
        cout<<"No, its not a subarray!!";
    }
    else{
        cout<<"Yes, It is a subarray!!!!";
    }
}

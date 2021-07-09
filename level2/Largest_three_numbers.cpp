#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Greatest elements: ";
    set<int> s(a,a+n);
    set<int>::iterator i;
    int j=0; i=s.end();
    for(--i;j!=3;i--)
    {
        j++;
        cout<<*i<<" ";
    }

}

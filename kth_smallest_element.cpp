#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n],b[n];
    map<int,int> m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        m[a[i]]++;

    }
    sort(a,a+n);
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    cout<<"Using sort, the answer is: "<<a[k-1];


    set<int> s(b,b+n);
    set<int>::iterator i=s.begin();
    advance(i,k-1);
    cout<<"\nUsing set method, the answer is:  "<<*i;
    int x=0;
    for(auto i:m)
    {
     x++;
     if(x==k){cout<<"\nUsing sort, the answer is: "<<i.first;break;}
    }
}

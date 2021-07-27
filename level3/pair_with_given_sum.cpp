#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<"Enter sum: "; cin>>x;
    int l=0,r=n-1,left,right,m=INT_MAX,sum;
    while(l<r)
    {
        sum = a[l]+a[r];
        if(sum>x){
            r--;
        }
        sum = a[l]+a[r];
        
        if(m > x-sum&&sum<x)
        
            m = x-sum;
            left = a[l];
            right = a[r];
        }
        
        l++;
    }
    cout<<left<<"  "<<right;
    
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int a[n+1];
    int sum=0;
    map<int,int> m;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        m[sum]++;
    }
   /*
    this solution is O(n^2)
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int k=i;k<n;k++)
        {
            sum+=a[k];
            if(sum==0){flag=true;break;}
        }
    }
    if(flag==true)cout<<"true";
    else cout<<"False";
    */
    bool flag=false;
    for(auto i:m)
    {
        if(i.first==0)
        {
            flag=true;break;
        }
        else if(i.second>1)
        {
            flag=true;break;
        }
    }
    if(flag==true)cout<<"true";
    else cout<<"False";
}

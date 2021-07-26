#include <bits/stdc++.h>
using namespace std;
int maxGap(int *a, int n)
{
    if(n==1) return 0;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({a[i],i});
    }
    sort(v.begin(),v.end());
    int m = INT_MAX,ans =0;
    for(int i=0;i<n;i++)
    {
        m = min(m,v[i].second);
        ans = max(ans, v[i].second-m);
    }
    return ans;
}
int main()
{
   int n,x;
   cin>>n;
   int  v[n];
   for(int i=0;i<n;i++)
   {
       cin>>v[i];
   }
   x = maxGap(v,n);
   cout<<x;
   return 0;
}

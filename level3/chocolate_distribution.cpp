#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int m;
   cin>>m;
   sort(a,a+n);
   int x = INT_MAX,i=0,j=m-1;
   for(;j<n;j++,i++)
   {
        
       x=min(x,a[j]-a[i]);
   }
   cout<<x;
   return 0;
}

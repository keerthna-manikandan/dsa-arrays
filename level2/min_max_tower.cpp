#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cout<<"Size: ";
   cin>>n;
   int a[n];
   cout<<"ARRAY: ";
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort(a,a+n);
   cout<<"K: ";
   int k;
   cin>>k;
   int result = a[n-1]-a[0];
   int minel,maxel;
   for(int i=1;i<n;i++)
   {
       if(a[i]>=k && a[n-1]>=k)
       {
           maxel = max(a[i-1]+k,a[n-1]-k);
       
          minel = min(a[i]-k,a[0]+k);
            result=min(result,maxel-minel);
       }
   }
    cout<<"Result: "<<result;
   return 0;
}

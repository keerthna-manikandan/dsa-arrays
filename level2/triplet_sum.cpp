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
   int sum;
   cout<<"Sum: ";
   cin>>sum;
   sort(a,a+n);
   int l,r;
   for(int i=0;i<n-2;i++)
   {
       l=i+1;r=n-1;
       while(l<r)
       {
           if(a[i]+a[l]+a[r]==sum)
           {
               cout<<"("<<a[i]<<","<<a[l]<<","<<a[r]<<")";
               break;
           }
           if(a[i]+a[l]+a[r]<sum)
                l++;
            else
                r++;
       }
       
   }
   return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cout<<"Size: ";
   cin>>n;
   int a[n];
   cout<<"ARRAY: ";
   int jumps[n];
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
       jumps[i]=1000;
   }
   
   jumps[0]=0;
   for(int i=1;i<n;i++)
   {
       for(int j=0;j<i;j++)
       {
           if(i<=j+a[j])
           {
               jumps[i]=min(jumps[i],jumps[j]+1);
           }
       }
   }
    cout<<"Minimumm number of jumps to reach end = "<<jumps[n-1];
   
   
   return 0;
}

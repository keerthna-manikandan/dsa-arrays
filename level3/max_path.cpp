#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++) cin>>a[i];
   int m;
   cin>>m;
   int b[m];
   for(int i=0;i<m;i++) cin>>b[i];
   int res=0,sa=0,sb=0,i=0,j=0;
   while(i<n && j<m)
   {
       if(a[i]<b[j])
       {
           sa+=a[i]; i++;
       }
       else if(a[i]>b[j])
       {
           sb+=b[j]; 
           j++;
       }else{
           sa+=a[i];sb+=b[j];
           res += sa<sb? sb:sa;
           sa=sb=0; i++;j++;
       }
   }
   while(j<m) { 
       sb+=b[j];
       j++;
   }
   while(i<n) { 
       sa+=a[i]; 
       i++;
   }
   res += sa<sb? sb:sa;
   cout<<res;
   return 0;
}

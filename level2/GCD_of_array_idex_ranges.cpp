#include <iostream>

using namespace std;

int gcd(int a,int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

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
   cout<<"Number of array indexes: ";
   int t;
   cin>>t;
   cout<<"Enter the array indexes: ";
   while(t--)
   {
       int qs,qe;
       cin>>qs>>qe;
       int gc=a[qs];
       cout<<"GCD: ";
       for(int i=qs+1;i<=qe;i++)
       {
           gc=gcd(gc,a[i]);
       }
       cout<<gc<<", ";
   }
   return 0;
}

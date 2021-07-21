#include <bits/stdc++.h>

using namespace std;

int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}

int main()
{
   int n,x=0,m=1;
   cout<<"n: ";
   cin>>n;
   x=n+2;
   int a[x];x=0;
   cout<<"ARRAY: ";
   for(int i=0;i<n+2;i++)
   {
       cin>>a[i];
       x+=a[i];
       m*=a[i];
   }
   
   int S=n*(n+1)/2;
   int sum=x-S;
   int fact=factorial(n);
   int mul = m/fact;
   
   int dif = sqrt(pow(sum,2)-4*mul);
   
   int d= (sum+dif)/2;
   int b = sum - d;
   
   cout<<"A: "<<d<<" & B: "<<b;
   
   return 0;
}

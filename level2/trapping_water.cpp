#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,x;
    cout<<"Size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    int l_max = 0;
    int r_max = 0;
    int result = 0;
    while (l <= r)
    {
  
      if(r_max <= l_max)
      {
        result += max(0, r_max-arr[r]);
        r_max = max(r_max, arr[r]);
        r -= 1;
      }
      else
      {
        result += max(0, l_max-arr[l]);
        l_max = max(l_max, arr[l]);
        l += 1;
      }
    }
    cout<<result;
}

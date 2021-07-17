#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int a[n];
    int max_so_far=INT_MIN,sum=0;
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(max_so_far<sum)
            max_so_far=sum;
        if(sum<0)
            sum=0;
    }
   cout<<max_so_far;
}

#include<bits/stdc++.h>
using namespace std;

#define MAX 1000

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    int count=1,max_so_far=1,x=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++)
    {
        if(a[i]+1==a[i+1])
            count++;
        else{
            x=1;
        }
        if(x==1)
        {
            if(max_so_far<count)
                max_so_far=count;
            count=1;x=0;
        }

    }
    cout<<"Longest consecutive subarray length: "<<max_so_far;
}

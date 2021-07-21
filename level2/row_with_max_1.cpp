#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Size: ";
    cin>>n;
    int max=0,maxi,count=0,x;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            cin>>x;
            if(x==1) count++;
        }
        if(max<count)
        {
            max=count;
            maxi=i;
        }
    }
    cout<<"max row: "<<maxi+1;
   return 0;
}

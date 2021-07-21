#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n;
    cout<<"Size: ";
    cin>>m>>n;
    cout<<"Enter matrix: ";
    int a[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    int t=0,d=m-1,l=0,r=n-1,dir=0;
    
    while(t<=d && l<=r)
    {
        if(dir==0)
        {
            for(int i=l;i<=r;i++)
                cout<<a[t][i]<<" ";
            t++;
        }
        else if(dir==1)
        {
            for(int i=t;i<=d;i++)
                cout<<a[i][r]<<" ";
            r--;
        }
        else if(dir==2)
        {
            for(int i=r;i>=l;i--)
                cout<<a[d][i]<<" ";
            d--;
        }
        else{
            for(int i=d;i>=t;i--)
                cout<<a[i][l]<<" ";
            l++;
        }
        dir=(dir+1)%4;
    }
   return 0;
}

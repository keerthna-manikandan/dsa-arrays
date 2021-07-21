#include <bits/stdc++.h>

using namespace std;
const int MAX = 100;
int mat[MAX][MAX];

void fill_remaining(int i, int j,int n)
{
    int x=2;
    for(int p=i+1;p<n;p++)
        mat[p][j]=x++;
    for(int p=0;p<i;p++)
        mat[p][j]=x++;
}

void fill(int n)
{
    int r=n-1,l=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            mat[i][r]=1;
            fill_remaining(i,r,n);
            r--;
        }
        else
        {
            mat[i][l]=1;
            fill_remaining(i,l,n);
            l++;   
        }
    }
}
int main()
{
   int n;
   cout<<"Size: ";
    cin>>n;
    fill(n);
    cout<<"Matrix: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
    
   return 0;
}

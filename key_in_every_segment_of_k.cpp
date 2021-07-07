#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x,k;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of k: ";
    cin>>k;
    int j=1,cnt=0,flag=0;
    for(int i=0;i<n;i++,j++)
    {
        if(a[i]==x){cnt++;}

        if(j%k==0){if(cnt>0){cnt=0;}else{flag=1;break;}}
    }
    if(flag==0)cout<<"Yes";
    else cout<<"No";
}

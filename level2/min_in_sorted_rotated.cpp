#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the Number: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements: ";
    cin>>a[0];
    int min=0;
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<a[i-1])
            min=a[i];
    }

    cout<<min;
}

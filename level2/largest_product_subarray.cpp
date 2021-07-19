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
    int product=1,max_so_far=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0)
            product=1;
        else
            product *=a[i];
        if(max_so_far<product)
            max_so_far=product;

    }
    cout<<max_so_far;
}

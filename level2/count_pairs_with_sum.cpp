#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int a[n],cnt=0;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    for(int i=0;i<n;i++)
    {
        cnt+=m[sum-a[i]];
        if(sum-a[i]==a[i])
            cnt--;

    }

    cout<<"The count of pairs is: "<<cnt/2;


}

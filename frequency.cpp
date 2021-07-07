#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int x;
    map<int,int> m;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>x;
        m[x]++;
    }
    cout<<"Value of x: ";
    cin>>x;
    cout<<"frequency is: "<<m[x];

}

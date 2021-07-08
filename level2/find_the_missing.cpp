#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n-1);
    int x;
    for(int i=0;i<n;i++)
    {
        if(a[i]!=(i+1)){x=i+1;break;}
    }
    cout<<"The missing number is: "<<x;

}

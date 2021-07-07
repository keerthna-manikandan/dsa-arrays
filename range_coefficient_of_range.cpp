#include<bits/stdc++.h>
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
    sort(a,a+n);
    int min=a[0],max=a[n-1];
    cout<<"Range: "<<max-min;
    double float coeff=(max-min)/(max+min);
    cout<<"\nCoefficient of Range: "<<coeff;


}

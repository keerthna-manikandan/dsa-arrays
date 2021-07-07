#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements: ";
    cin>>a[0];
    int min,max;
    min=max=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>max){max=a[i];}
        else if(a[i]<min){min=a[i];}
    }
    cout<<"Min and max in O(n) time complexity: "<<min<<"  "<<max;

    cout<<"\n\n Min and max using stl function: "<<*min_element(a,a+n)<<"  "<<*max_element(a,a+n);

    sort(a,a+n);
    cout<<"\n\n Min and max using sort method:  "<<a[0]<<"   "<<a[n-1];


}

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of the array: ";
    cin>>n;
    int a[n],b[n];
    map<int,int> m;
    cout<<"Enter the elements of array A: ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        m[a[i]]++;

    }
    cout<<"Enter the elements of array B: ";
    for(int i=0;i<n;i++)
    {
        cin>>b[i];m[b[i]]++;
    }
    cout<<"Union of arrays A and B is: ";
    for(auto i:m)
    {
        cout<<i.first<<"  ";
    }
    std::vector<int> v1(n);
    std::vector<int>::iterator it, ls;
    ls = std::set_intersection(a, a+n, b, b+n, v1.begin());

    std::cout << "\nThe intersection has " << (ls - v1.begin()) << " elements:";
    for (it = v1.begin(); it != ls; ++it)
        std::cout << ' ' << *it;
}

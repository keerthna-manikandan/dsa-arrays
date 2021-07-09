#include<bits/stdc++.h>
using namespace std;
void findCom(int a[], int b[], int c[], int n1, int n2,
                int n3)
{

    unordered_set <int> uset,uset2,uset3;
    for(int i=0;i<n1;i++){
        uset.insert(a[i]);
    }
     for(int i=0;i<n2;i++){
        uset2.insert(b[i]);
    }
    for(int i=0;i<n3;i++){
        if(uset.find(c[i])!=uset.end() && uset2.find(c[i])!=uset.end()){
            // using a 3rd set to prevent duplicates
            if(uset3.find(c[i])==uset3.end())
                cout<<c[i]<<" ";
            uset3.insert(c[i]);
        }
    }
}
int main()
{
    int n1,n2,n3;
    cout<<"Size1: ";
    cin>>n1;
    cout<<"Array1: ";
    int a[n1];
    for(int i=0;i<n1;i++)cin>>a[i];
    cout<<"Size2: ";
    cin>>n2;
    cout<<"Array2: ";
    int b[n2];
    for(int i=0;i<n2;i++)cin>>b[i];
    cout<<"Size3: ";
    cin>>n3;
    cout<<"Array3: ";
    int c[n3];
    for(int i=0;i<n3;i++)cin>>c[i];
    cout<<"Common Elements are: ";

    findCom(a,b,c,n1,n2,n3);

}

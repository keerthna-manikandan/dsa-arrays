#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        m[a]++;
    }
    int c=1,missing=0,rep;
    for(auto i:m){
        if(i.first>c){
            missing=i.first-1;
            //cout<<i.first<<endl;
            c++;
        }
        if(i.second>1){
            rep=i.first;
        }
        c++;
    }
    cout<<missing<<" "<<rep<<endl;
    return 0;
}

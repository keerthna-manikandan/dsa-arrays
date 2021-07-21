#include<bits/stdc++.h>
using namespace std;

class twostacks{
    int *arr;
    int size;
    int top1,top2;
    
    public:
    
    twostacks(int n)
    {
        arr= new int[n];
        size=n;
        top1=0;
        top2=n-1;
    }
    void insert1(int a)
    {
        if(top1<top2-1)
        {   arr[top1]=a; top1++;}
        else
            cout<<"\nStack overflow!!";
    }
    void insert2(int a)
    {
        if(top2>top1)
         {   arr[top2]=a; top2--;}
        else
            cout<<"\nStack overflow!!";
    }
    void pop1()
    {
        cout<<"\nelement: "<<arr[top1-1];
        top1--;
    }
    void pop2()
    {
        cout<<"\nelement: "<<arr[top2+1];
        top2++;
    }
};

int main()
{
    twostacks t(6);
    t.insert1(1);
    t.insert1(5);
    t.insert2(2);
    t.insert2(4);
    t.insert2(3);
    t.pop1();
    t.pop2();
    t.pop1();
}

#include<bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int a[], int low, int high)
{
  int start = low;
  int end=high;
  int pivot  = a[low];
  while(start<end)
  {
      while(a[start]<=pivot)
        start++;
      while(a[end]>pivot)
        end--;
      if(start<end)
      {
          swap(&a[start],&a[end]);
      }
 }
 swap(&a[end],&a[low]);
 return end;
}

void quickSort(int a[],int low,int high)
{

    if(low<high)
    {
        int loc = partition( a,low,high);
        quickSort(a,low,loc-1);
        quickSort(a,loc+1,high);
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    cout<<"Enter the elements: ";

    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];

    quickSort(a,0,n-1);

    for(int i=0;i<n;i++)cout<<a[i]<<" ";

}

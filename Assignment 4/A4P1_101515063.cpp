#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void countingsort(int arr[],int n)
{
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(max<arr[i])
    max=arr[i];
  }
  int count[max+1];
  memset(count,0,sizeof(count));
  for(int i=0;i<n;i++)
  {
    count[arr[i]]++;
  }
  //
  for(int i=1;i<max+1;i++)
  count[i]=count[i]+count[i-1];
  //print(count,max+1);
  int sortarr[n];
  for(int i=0;i<n;i++)
  {
    if(count[arr[i]]-1>=0){
    sortarr[count[arr[i]]-1]=arr[i];
    count[arr[i]]--;}
  }
  print(sortarr,n);
}
// 10 1 1 1 1 2 2 2 2 0 3
// 10 1 2 3 4 5 6 6 7 8 10
int main()
{
  int n;
  cout<<"enter the number of elements"<<endl;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
  cin>>arr[i];
  countingsort(arr,n);
}

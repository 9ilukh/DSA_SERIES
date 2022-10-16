#include<bits/stdc++.h>
using namespace std;

int maximum(int arr[],int n)
{
  int i;
  int max= 0;
  for(i=0;i<n;i++)//Time complexity = O(n)
  {
    if(arr[i]>arr[max])
    max = i;
  }
  return max;
}
int main()
{
  
  int arr[]={12,45,65,78};
  cout<<maximum(arr,4);

  return 0;
}
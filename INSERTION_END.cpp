#include<bits/stdc++.h>
using namespace std;

int InsertAtEnd(int arr[],int n,int element){
  arr[n -1]=element;
}
int main()
{
  int n = 6;
  int arr[] = {23,45,45,45,53};
  for(int i=0;i<n;i++)
  {
    int x = InsertAtEnd(arr,6,4) ;

  
  cout<<arr[i]<<" ";
  }
}
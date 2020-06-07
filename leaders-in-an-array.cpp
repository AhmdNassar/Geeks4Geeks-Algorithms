// pro-url: https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0

#include <iostream>

using namespace std;

int main()
{
  int testCases, size;
  cin>>testCases;
  while(testCases--)
  {
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++) cin>>arr[i];
    int leaders[size], max = -1 ,k =0;
    for(int i=size-1; i>=0; i--)
    {
      if(arr[i]>=max) 
      
      {
        leaders[k++] = arr[i];
        max = arr[i];
      }
    }
    for(int i=k-1; i>=0; i--) cout<<leaders[i]<<" ";
    cout<<"\n";
  }

  return 0;
}
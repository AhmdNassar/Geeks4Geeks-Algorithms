// pro-url: https://practice.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0

#include <iostream>

using namespace std;

int main()
{
  int testCases, size;
  cin>>testCases;
  while(testCases--)
  {
    cin>>size;
    int arr[3]={0},temp;
    while (size--) 
    {
      cin>>temp;
      arr[temp]++;
    }
    for(int i=0; i<3; i++)
    {
      temp = arr[i];
      while(temp--) cout<<i<<" ";
    }
    cout<<endl;
    
  }
  return 0;
}
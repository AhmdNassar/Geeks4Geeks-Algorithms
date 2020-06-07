// pro-url: https://practice.geeksforgeeks.org/problems/equilibrium-point/0

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
    if (size==1)
    {
      cout<<1<<endl;
      continue;
    }
    int left=0, right = size-1, lsum=0, rsum=0;
    while(right>left)
    {
      if(lsum>rsum) rsum+= arr[right--];
      else if (rsum>lsum) lsum+= arr[left++];
      else
      {
        rsum+= arr[right--];
        lsum+= arr[left++];
      }
    }
    if(lsum == rsum && left==right) cout<<left+1<<endl;
    else cout<<-1<<endl;
    
  }
  return 0;
}
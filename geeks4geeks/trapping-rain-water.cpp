// pro-url: https://practice.geeksforgeeks.org/problems/trapping-rain-water/0

#include <iostream>

#define loop(start,n) for (int i = start; i < n; i++)
#define ll long long int

using namespace std;
int main()
{
  int testCases;
  cin >> testCases;
  while (testCases--)
  {

    int size, totalWater = 0, leftMax = 0, rightMax = 0, minSide = 0;
    cin >> size;
    int arr[size];
    
    loop (0,size)
      cin >> arr[i];
    
    leftMax = arr[0];
    
    rightMax = arr[size-1];

    int l = 0, r = size-1;
    while(l<=r)
    {
      rightMax = max(rightMax,arr[r]);
      leftMax = max(leftMax,arr[l]);

      if(rightMax<=leftMax)
      {
        totalWater += rightMax - arr[r];
        r--;
      }
      else
      {
        totalWater += leftMax - arr[l];
        l++;
      }
      
    }
    cout<<totalWater<<endl;
  }
}

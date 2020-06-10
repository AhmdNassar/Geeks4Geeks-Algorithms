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
    /* code */
    int size, totalWater = 0, maxValue = 0, minSide = 0;
    cin >> size;
    int arr[size], maxLeft[size], maxRight[size];
    
    loop (0,size)
      cin >> arr[i];
    
    maxLeft[0] = arr[0];
    loop(1,size) maxLeft[i] = max(arr[i],maxLeft[i-1]);
    
    maxRight[size-1] = arr[size-1];
    for(int i = size-2; i>=0; i--) maxRight[i] = max(arr[i],maxRight[i+1]);

    loop(0,size)
    {
      minSide = min(maxLeft[i],maxRight[i]);
      totalWater += minSide - arr[i];
    }
    cout<<totalWater<<endl;
  }
}

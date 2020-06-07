// pro-url: https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
#include <iostream>

using namespace std;

int main()
{
  //code
  int t, n, sum;
  cin >> t;
  while (t > 0, t--)
  {
    cin >> n >> sum;
    int arr[n], start = 0, end = 0, currSum = 0;
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
      currSum += arr[i];
      while (currSum > sum)
      {

        currSum -= arr[start];
        start++;
      }
      if (currSum == sum)
      {
        end = i;
        break;
      }
    }
    if (currSum == sum)
      cout << start + 1 << " " << end + 1 << endl;
    else
      cout << -1 << endl;
  }
  return 0;
}
// pro-url: https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
#include <iostream>
#include <algorithm> // std::sort
#include <math.h>
using namespace std;

int main()
{
  int t, n, cnt;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cnt = 0;
    int arr[n], temp;
    for (int i = 0; i < n; i++)
    {
      cin >> temp;
      arr[i] = temp * temp;
    }
    sort(arr, arr + n);
    for (int i = n - 1; i > 1; i--)
    {
      int right = i - 1, left = 0, sum, curr = arr[i] ;
      while (right > left)
      {
        sum = arr[right] + arr[left];
        if (sum == curr)
        {
          cout<<"Yes\n";
          return 0;
        }
        else if (sum < curr)
          left++;
        else if (sum > curr)
          right--;
      }
    }

    cout << "No" << endl;
  }
  return 0;
}
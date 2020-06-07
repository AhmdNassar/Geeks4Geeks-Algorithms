// pro-url: https://practice.geeksforgeeks.org/problems/count-the-triplets/0
#include <iostream>
#include <algorithm> // std::sort

using namespace std;

int main()
{
  int t, n, cnt;
  cin >> t;
  while (t--)
  {
    cin >> n;
    cnt = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
      cin >> arr[i];
    }
    sort(arr, arr + n);
    for (int i = n - 1; i > 1; i--)
    {
      int right = i - 1, left = 0, sum, curr = arr[i];
      while (right > left)
      {
        sum = arr[right] + arr[left];
        if (sum == curr)
        {
          cnt++;
          left++;
          right--;
        }
        else if (sum < curr)
          left++;
        else if (sum > curr)
          right--;
      }
    }

    if (cnt == 0)
      cout << cnt - 1 << endl;
    else
      cout << cnt << endl;
  }
  return 0;
}
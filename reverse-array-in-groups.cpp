// pro-url: https://practice.geeksforgeeks.org/problems/reverse-array-in-groups/0

#include <iostream>

using namespace std;

int main()
{
  int testCases, size, revSize;
  cin >> testCases;
  while (testCases--)
  {
    cin >> size >> revSize;
    int arr[size];
    for (int i = 0; i < size; i++)
      cin >> arr[i];
    int temp = 1, cnt = 1, j = revSize - 1;
    while (1)
    {
      if (temp >= size)
        break;
      j = (revSize * cnt) - 1;
      if (j >= size)
      {
        j = size - 1;
      }
      for (int i = 0; i < revSize; i++)
      {
        if (temp > size)
          break;
        cout << arr[j--] << " ";
        temp++;
      }
      cnt++;
    }

    cout << "\n";
  }

  return 0;
}
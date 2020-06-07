// pro-url: https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/
#include <iostream>
#include <algorithm>

using namespace std;

void print(int arr[], int idx, int size)
{
  while (idx < size)
  {
    cout << arr[idx] << " ";
    idx++;
  }
  cout << "\n";
}

int main()
{
  int testCases, firstArrSize, secArrSize, temp;
  cin >> testCases;

  while (testCases--)
  {
    cin >> firstArrSize >> secArrSize;
    int firstArr[firstArrSize], secArr[secArrSize];

    for (int i = 0; i < firstArrSize; i++)
      cin >> firstArr[i];
    for (int i = 0; i < secArrSize; i++)
      cin >> secArr[i];

    int i = 0, j = 0;

    while (i < firstArrSize && j < secArrSize)
    {
      if (firstArr[i] < secArr[j])
      {
        cout << firstArr[i] << " ";
        i++;
      }
      else
      {
        cout << secArr[j] << " ";
        j++;
      }
    }
    if (firstArrSize > secArrSize)
      print(firstArr, i, firstArrSize);
    else
      print(secArr, j, secArrSize);
  }
  return 0;
}
// pro-url: https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
#include <iostream>

using namespace std;

int arr[10000000];

void solver(int arrSize)
{
  int currSum = 0, maxSum = 0;
  for (int i = 0; i < arrSize; i++)
  {
    if (currSum < 0 && arr[i] > currSum)
      currSum = arr[i];
    else
      currSum += arr[i];

    if (currSum > maxSum || i == 0)
      maxSum = currSum;
  }
  cout << maxSum << endl;
  
}
int main()
{
  int testCases, arrSize;
  cin >> testCases;
  while (testCases--)
  {
    cin >> arrSize;
    for (int i = 0; i < arrSize; i++)
      cin >> arr[i];

    solver(arrSize);
  }
  return 0;
}

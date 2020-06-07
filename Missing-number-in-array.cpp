#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int testCases, arrSize, missingNum = 0, temp;
  cin >> testCases;
  while (testCases--)
  {
    cin >> arrSize;
    missingNum = 0;
    int arr[arrSize] = {0};
    for (int i = 0; i < arrSize - 1; i++)
    {
      cin >> temp;
      arr[temp - 1] = 1;
    }

    for (int i = 0; i < arrSize - 1; i++)
    {
      if (arr[i] != 1)
      {
        missingNum = i + 1;
        break;
      }
    }

    if (missingNum == 0)
      missingNum = arrSize;

    cout << missingNum << endl;
  }
  return 0;
}
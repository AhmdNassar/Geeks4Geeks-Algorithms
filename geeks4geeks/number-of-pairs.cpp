// pro-url: https://practice.geeksforgeeks.org/problems/number-of-pairs/0/

/****************** not completed **********************/

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int testCases, xSize, ySize;
  cin >> testCases;
  while (testCases--)
  {
    cin >> xSize >> ySize;

    int x[xSize], y[ySize];

    for (int i = 0; i < xSize; i++)
      cin >> x[i];
    for (int i = 0; i < ySize; i++)
      cin >> y[i];

    int totalCnt = 0, currCnt = 0;
    sort(x, x + xSize);
    sort(y, y + ySize);
    int xIdx = xSize - 1, yIdx = ySize - 1, tempX;
    while (xIdx >= 0)
    {
      tempX = x[xIdx];
      if (tempX == 1)
      {
        xIdx--;
        continue;
      }
      totalCnt += currCnt;
      currCnt = 0;
      while (yIdx >= 0)
      {
        if (tempX < y[yIdx])
        {
          currCnt++;
          yIdx--;
        }
        else
          break;
      }
      totalCnt += currCnt;
      xIdx--;
    }

    if(y[0]==1)
      totalCnt += xSize;
    if(x[0]==1)
      totalCnt--;
    cout << totalCnt << endl;
  }

  return 0;
}
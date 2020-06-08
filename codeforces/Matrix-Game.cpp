// pro-url: https://codeforces.com/contest/1365/problem/A
#include <iostream>

using namespace std;

int main()
{
  int testCases, rows, cols;
  cin>>testCases;
  while(testCases--)
  {
    cin>>rows>>cols;
    int rowsCnt[rows]={0},colCount[cols]={0},temp;
    for(int i=0; i< rows; i++)
    {
      for(int j=0; j< cols; j++)
      {
        cin>>temp;
        rowsCnt[i]+= temp;
        colCount[j] += temp;
      }
    }
    int v = 0, a = 0, turn = 0, done= 0;
    for(int i=0; i<rows;i++)
    {
      for(int j=0; j<cols; j++)
      {
        if(rowsCnt[i]==0 && colCount[j]==0)
        {
          colCount[j]++;
          rowsCnt[i]++;
          if(turn==0)
          {
            a++;
            turn=1;
          }
          else
          {
            v++;
            turn = 0;
          }
          break;
        }
      }
    }
    if(a>v) cout<<"Ashish\n";
    else cout<<"Vivek\n";
  }
  return 0;
}
// pro-url: https://practice.geeksforgeeks.org/problems/minimum-platforms/0
#include <iostream>
#include <algorithm>

using namespace std;

bool sortHelper(pair<int, char> i, pair<int, char> j)
{
  if (i.first == j.first)
  {
    if (i.second == 'a')
      return 1;
    else
      return 0;
  }
  return i.first < j.first;
}
int main()
{
  //code
  int testCases, size;
  cin >> testCases;
  while (testCases--)
  {
    cin >> size;
    pair<int, char> map[size * 2];
    int ans = 0, free = 0;
    for (int i = 0; i < size; i++)
    {
      cin >> map[i].first;
      map[i].second = 'a';
    }
    for (int i = size; i < size * 2; i++)
    {
      cin >> map[i].first;
      map[i].second = 'd';
    }
    sort(map, map + (2 * size), sortHelper);
    for (int i = 0; i < size * 2; i++)
    {
      if (map[i].second == 'a' && free == 0)
        ans++;
      else if (map[i].second == 'd')
        free++;
      else
        free--;
    }
    cout << ans << endl;
  }
  return 0;
}
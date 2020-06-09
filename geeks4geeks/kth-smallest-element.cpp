// pro-url: https://practice.geeksforgeeks.org/problems/kth-smallest-element/0

#include <iostream>

#define for(n) for (int i = 0; i < n; i++)
#define ll long long int

using namespace std;
int main()
{
  int testCases;
  cin >> testCases;
  while (testCases--)
  {
    int size, k, cnt=0, arr[100000] = {0};
    cin >> size;
    for (size)
    {
      cin >> k;
      arr[k-1]++;
    }
    cin>>k;
    for(100000)
    {
      //cout<<" i = "<<i<<" arr[i] = "<<arr[i]<<"cnt = "<<cnt<<endl;
      cnt+=arr[i];
      if(cnt>=k) 
      {
        cout<<i+1<<endl;
        break;
      }
    }
  }
}

#include<iostream>
#include <algorithm>    // std::sort

using namespace std;

int main()
{
  unsigned long long int t, n,k;
  cin>>t;
  while(t--)
  {
    cin>>n>>k;
    unsigned long long int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(arr[0]+arr[n-1]==0)
    {
        cout<<0<<endl;
        continue;
    }
    int left = n-2;
    while(k>0 && arr[left] > 0)
    {
        k--;
        arr[n-1] += arr[left];
        arr[left] = 0;
        left--;
        //cout<<"max = "<<arr[n-1]<<" left = "<<arr[left+1]<<endl;
    }
    sort(arr,arr+n);
    cout<<arr[n-1] - arr[0]<<endl;
  }
}
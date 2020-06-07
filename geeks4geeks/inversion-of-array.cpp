// pro-url: https://practice.geeksforgeeks.org/problems/inversion-of-array/0/
#include <iostream>
#include <vector>
using namespace std;

vector<int> temp;
long long int merge(int arr[], int left, int mid, int right)
{
  long long int inv = 0 ;
  int i = left, j = mid, k = left;
  while(i<mid && j<=right)
  {
    if(arr[i]>arr[j])
    {
      inv += mid - i ;
      temp.push_back(arr[j++]);
    }
    else
    {
      temp.push_back(arr[i++]); 
    }
  }
  while(i<mid) temp.push_back(arr[i++]);
  while(j<=right) temp.push_back(arr[j++]);
  k = 0;
  for(int i=left; i<=right; i++) arr[i] = temp[k++];
  temp.clear();
  return inv;
}
long long int _mergSort(int arr[],int left, int right)
{
  long long int inv = 0;
  if(right>left)
  {
    int mid = (left+right)/2;
    inv += _mergSort(arr,left,mid);
    inv += _mergSort(arr,mid+1,right);

    inv += merge(arr,left,mid+1,right);
  }
  return inv;
}
long long int mergSort(int arr[], int size)
{
  return _mergSort(arr,0,size-1);

}
int main()
{
  int testCases, arrSize;
  cin>>testCases;
  while(testCases--)
  {
    cin>>arrSize;
    int arr[arrSize];
    for(int i=0; i<arrSize; i++) cin>>arr[i];
    long long int ans = mergSort(arr,arrSize);
    cout<<ans<<endl;
  }
  return 0;
}
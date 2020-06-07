//pro-url: https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0/
#include<iostream>

using namespace std;

int main()
{
  int testCases, arrSize;
  cin>>testCases;
  while(testCases--)
  {
    cin>>arrSize;
    int arr[arrSize];
    for(int i=0; i<arrSize; i++)
      cin>>arr[i];
    
    int i = 0, j=arrSize-1,flag=0;
    while(j>=i)
    {
      if(!flag)
        {
          cout<<arr[j]<<" ";
          j--;
          flag=1;
        }
      else
        {
          cout<<arr[i]<<" ";
          i++;
          flag=0;
        }
    }
    cout<<endl;
  }
  return 0;
}
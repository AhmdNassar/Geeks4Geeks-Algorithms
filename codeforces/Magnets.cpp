// pro-url: 

#include<iostream>

#define for(n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;
int main()
{
  int n, sol = 0;
  string prev, curr;
  cin>>n>>prev;
  sol++;
  n--; 
  while(n--)
  {
      cin>>curr;
      if(curr != prev)
      {
          prev = curr;
          sol++;
      }
  }
  cout<<sol<<endl;
}
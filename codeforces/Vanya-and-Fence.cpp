// pro-url: 

#include<iostream>

#define for(n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;
int main()
{
  int numOfFriends, h;
  cin>>numOfFriends>>h;
  int width = 0, temp;
  for(numOfFriends)
  {
      cin>>temp;
      if(temp>h) width+=2;
      else width++;
  }
  cout<<width<<endl;
}
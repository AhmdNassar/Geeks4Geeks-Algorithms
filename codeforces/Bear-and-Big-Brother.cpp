// pro-url: 

#include<iostream>

#define for(n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;
int main()
{
  int a, b,y=0;
  cin>>a>>b;
  while(1)
  {
      y++;
      a *= 3;
      b *= 2;
      if(a>b)
        break;
  }
  cout<<y<<endl;
}
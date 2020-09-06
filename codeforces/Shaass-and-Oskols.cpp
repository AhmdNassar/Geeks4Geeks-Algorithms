// pro-url: 

#include<iostream>

#define for(n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;
int main()
{
  int n, m,x,y,left,right;
  cin>>n;
  int wires[n];
  for(n)
  {
      cin>>wires[i];
  }
  cin>>m;
  while(m--)
  {
    cin>>x>>y;
    x--; y--;
    left = y;
    right = wires[x] - y - 1;
    wires[x] = 0;
    if(x>0) wires[x-1]+=left;
    if(x<n-1) wires[x+1] += right;
    
  }
  for(n)
  {
      cout<<wires[i]<<endl;
  }
}
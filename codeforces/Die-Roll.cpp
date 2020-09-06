// pro-url: 

#include<iostream>

#define for(n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;
int main()
{
  int a, b, numerator, denominator = 6;
  cin>>a>>b;
  numerator = 6 - max(a,b) +1;
  if(numerator == 6)
  {
      cout<<"1/1\n";
      return 0;
  }
  if(numerator%2 == 0 )
  {
      numerator/=2;
      denominator/=2;
  }
  else if (denominator%numerator == 0)
  {
      denominator/=numerator;
      numerator = 1;
  }
  cout<<numerator<<"/"<<denominator<<endl;
}
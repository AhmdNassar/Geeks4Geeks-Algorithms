// pro-url: 

#include<iostream>

#define for(n) for(int i=0; i<n; i++)
#define ll long long int

using namespace std;
int main()
{
  
 int n, result = 0, temp = 0, conf = 0;
 cin>>n;
 while(n--)
 {
    int i = 0;
    while(i<3)
    {
        cin>>temp;
        conf+=temp;
        i++;
    }
    if(conf>=2) result++;
    conf = 0 ; 
 }
 cout<<result;  
}
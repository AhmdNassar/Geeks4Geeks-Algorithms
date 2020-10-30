#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#define lo(n) for(int k = 0; k<n; k++)
#define ll long long int
#define ull unsigned long long int

bool sortPairs(pair<ull,int> a, pair<ull,int> b)
{
    return a.second > b.second;
}

int main()
{
    int n;
    string colors = "ROYGBIV";

    cin>>n;
    lo(n/7) cout<<colors;
    lo(n%7) cout<<colors[k%4 + 3];
    cout<<endl;
}
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
    int n, lidx = 1, ridx, colorIdx = 1;
    string colors = "ROYGBIV";

    cin>>n;

    string out = string(n, 'R');
    ridx = n - 1;
    while(lidx <= ridx)
    {
        out[lidx++] = colors[colorIdx++];
        colorIdx %= 7;
        if(lidx < ridx)
            out[ridx--] = colors[colorIdx++];
        colorIdx %= 7;
    }
    // 2-5 3-5 4-4
    // RRRRRRR
    cout<<out<<endl;
}
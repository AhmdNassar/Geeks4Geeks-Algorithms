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
    ll n, m, l , r, type;
    cin>>n;
    vector<ll> values(n+1,0), sum(n+1,0), sortedSum(n+1,0);

    for(int i=1; i<=n; i++)cin>>values[i];

    for(int i=1; i<=n; i++) sum[i] = sum[i-1] + values[i];

    sort(values.begin(), values.end());

    for(int i=1; i<=n; i++) sortedSum[i] = sortedSum[i-1] + values[i];

    cin>>m;
    while(m--)
    {
        cin>>type>>l>>r;
        if(type==1)
            cout<<sum[r] - sum[l-1]<<endl;
        else
            cout<<sortedSum[r] - sortedSum [l-1]<<endl;
    }
}
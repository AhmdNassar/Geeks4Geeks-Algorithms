#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

#define lo(n) for(int k = 0; k<n; k++)
#define ll long long int
#define ull unsigned long long int

bool sortPairs(pair<char,int> a, pair<char,int> b)
{
    return a.second < b.second;
}

int main()
{
    vector<pair<char,int>> coins = {{'A',0}, {'B',0}, {'C',0}};
    string inp;
    lo(3)
    {
        cin>>inp;
        if(inp[1] == '>')
        {
            if(inp[0] == 'A')
                coins[0].second++;
            
            else if(inp[0] == 'B')
                coins[1].second++;

            else
                coins[2].second++;
        }

        else
        {
            if(inp[2] == 'A')
                coins[0].second++;
            
            else if(inp[2] == 'B')
                coins[1].second++;

            else
                coins[2].second++;
        }
    }
    
    
    sort(coins.begin(), coins.end(), sortPairs);
    //cout<<coins[0].first<<" "<<coins[0].second<<" "<<coins[1].first<<" "<<coins[1].second<<" "<<coins[2].first<<" "<<coins[2].second<<endl;
    if(coins[0].second !=0 || coins[1].second !=1 || coins[2].second !=2)
        cout<<"Impossible\n";
    else
        cout<<coins[0].first<<coins[1].first<<coins[2].first<<endl;
}